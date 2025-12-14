/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100511
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1 - 2] &= arr_5 [i_0] [i_1];
                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (((-8684658913671432943LL) / (-8684658913671432943LL))))))));
                arr_8 [i_1 + 2] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((arr_6 [i_1] [i_0]) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) (unsigned short)65508)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_11))))) * (((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_0)))))));
    var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32755)) ? (384) : (((/* implicit */int) (unsigned short)42885))));
    var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */int) var_17))))) ? (max((var_0), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1))))))) ? (((/* implicit */int) var_5)) : (((((((/* implicit */_Bool) var_12)) ? (var_3) : (var_1))) / (((/* implicit */int) var_6))))))));
}
