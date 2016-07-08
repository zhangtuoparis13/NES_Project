#ifndef POW_CONS_VALUES_H 
#define POW_CONS_VALUES_H 7654


//MICROCONTROLLER MSP430F1611 POWER CONSUMPTION VALUES
#define MSP430F1611_SUPPLY 2200//mV
#define MSP430F1611_ACTIVE_MODE 330*MSP430F1611_SUPPLY//uA*mV=nW
#define MSP430F1611_STANBY_MODE 1.1*MSP430F1611_SUPPLY//uA*mV=nW
#define MSP430F1611_OFF_MODE 0.0000002*MSP430F1611_SUPPLY//A*mV=mW


//RADIO MODULE 802.15.4 POWER CONSUMPTION VALUES

#define CC2420_SUPPLY 3//V

#define CC2420_TX 19*CC2420_SUPPLY//mA*V=mW
#define CC2420_RX 17*CC2420_SUPPLY//mA*V=mW
#define CC2420_IDLE 43*CC2420_SUPPLY//uA*V=uW
#define CC2420_PD_MODE 20*CC2420_SUPPLY//nA*V=nW


//DS-100 POWER CONSUMPTION VALUES
#define POLLUTION_SENSOR_SUPPLY 9//V

//CO SENSOR
#define CO_SENSOR_HEATING 83//mW

//CO2 SENSOR
#define CO2_SENSOR_LOW 25*5//(mA*V)=mW
#define CO2_SENSOR_PEAK 125*POLLUTION_SENSOR_SUPPLY//(mA*V)=mW

//TEMP SENSOR
#define HEAT_DISSIPATION_CONSTANT 35//(mW/°C) to be multiplied by the °C sensed
#define OPERATIONAL_CONSUME 45//(mW) to be multiplied by the °C sensed
#endif
