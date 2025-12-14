/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180806
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
    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
    var_19 = var_5;
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) ^ (((arr_3 [i_0 + 1] [i_0 + 2]) ^ (((var_8) & (((/* implicit */unsigned long long int) arr_4 [i_1]))))))));
                var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) 4294967295U)))))) ? (((max((((/* implicit */unsigned long long int) -2147483637)), (8456559277693578167ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_9)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_4 [i_1])))))))));
                var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) var_7))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 2147483628)) : (68719476704ULL))) : (max((((/* implicit */unsigned long long int) arr_5 [i_0] [10U] [i_1])), (var_2))))) >> (((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) >> ((((-(1246766735U))) - (3048200537U)))))));
                var_22 = ((/* implicit */int) 0ULL);
                arr_7 [i_0] [i_0] = var_1;
            }
        } 
    } 
    var_23 |= ((var_5) | (((/* implicit */unsigned long long int) var_16)));
}
