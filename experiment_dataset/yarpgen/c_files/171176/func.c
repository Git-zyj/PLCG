/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171176
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? ((~(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))))) : (var_5)));
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) var_10)))) : (var_5))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */int) var_3)))))))))))));
    var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : ((+(var_5)))));
    var_19 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))), (((unsigned long long int) var_3)))) >> (((((/* implicit */int) ((signed char) (+(((/* implicit */int) var_4)))))) + (57)))));
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) var_15)))))));
}
