/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11872
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) var_15);
                var_20 &= ((/* implicit */long long int) arr_3 [i_0]);
                /* LoopSeq 2 */
                for (unsigned short i_2 = 3; i_2 < 9; i_2 += 1) 
                {
                    var_21 = ((/* implicit */signed char) max((max((min((((/* implicit */unsigned long long int) arr_2 [i_2])), (var_2))), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_0] [i_2] [i_2]), (((/* implicit */long long int) min((arr_2 [i_2]), (arr_2 [i_0])))))))));
                    arr_6 [i_0 + 4] [i_0 + 4] [i_0] [(unsigned short)9] = ((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) var_3))));
                }
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    var_22 = (+(max((arr_4 [i_0 + 2] [i_1] [i_1] [i_0]), (((/* implicit */long long int) var_13)))));
                    var_23 = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1]);
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned short) var_14)))))) : (max((((/* implicit */long long int) var_17)), (var_15)))))));
}
