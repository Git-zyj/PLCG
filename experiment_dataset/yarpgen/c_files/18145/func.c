/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18145
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
    var_20 += var_9;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_1 + 1] |= ((/* implicit */unsigned char) max((((/* implicit */long long int) min((max((((/* implicit */unsigned int) var_4)), (var_9))), (((/* implicit */unsigned int) max((var_3), (((/* implicit */unsigned short) var_6)))))))), (var_19)));
                arr_5 [i_1] [i_0] [i_1 - 1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) ((var_7) != (((/* implicit */long long int) ((/* implicit */int) var_18)))))) >> (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_17)))) - (25157)))))), (min((var_7), (((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_18)))))))));
                var_21 = ((/* implicit */unsigned short) var_1);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_14);
    var_23 = ((/* implicit */unsigned int) max((var_23), (var_5)));
}
