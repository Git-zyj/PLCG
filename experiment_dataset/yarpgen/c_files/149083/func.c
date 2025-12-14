/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149083
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((short) (_Bool)1))) : (var_6)))), (((2548465599176753086ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) var_10)))))) ? (((/* implicit */unsigned long long int) var_5)) : (((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)0))))))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((1990335975U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) ? (min((max((2014628594U), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) (short)16384)))) : (2187912350U)));
}
