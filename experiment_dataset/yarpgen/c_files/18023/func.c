/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18023
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
    var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))), (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((long long int) 11224242891945516188ULL))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_13)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) (unsigned short)29453);
                    arr_8 [i_0] = (~(((/* implicit */int) ((short) arr_1 [14]))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) (-(((((/* implicit */int) min(((signed char)64), (((/* implicit */signed char) var_10))))) * (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_4)))))))));
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((short) var_3)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_15)))) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
    var_22 = ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) max((var_8), (var_8)))))));
}
