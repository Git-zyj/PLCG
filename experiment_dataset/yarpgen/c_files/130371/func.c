/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130371
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_14 |= ((/* implicit */long long int) 4294967295U);
                    var_15 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (arr_1 [i_0 - 2]) : (arr_1 [i_1]))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */_Bool) arr_1 [i_0 + 2]);
                        var_17 &= ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_7 [i_0 + 2] [18U])) : (arr_0 [i_0 - 2] [i_0 - 1]))) / (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0 + 1] [10U])) > (arr_0 [i_0 + 1] [i_0 + 2])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 1; i_4 < 23; i_4 += 1) 
                    {
                        arr_13 [i_1] [i_1] [i_2] [i_4 - 1] = ((arr_9 [i_0] [i_0 + 1] [i_2] [i_4 - 1] [i_4] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 2])))))));
                        var_18 = (unsigned short)65535;
                    }
                    for (int i_5 = 1; i_5 < 22; i_5 += 4) 
                    {
                        arr_17 [6] &= ((/* implicit */int) arr_12 [i_2] [i_1] [i_0]);
                        arr_18 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-8003)) && (((/* implicit */_Bool) var_6)))))) / (4294967295U)))));
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) 4294967295U))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) 2990256066U);
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_7)) : (var_10)))) ? (((/* implicit */unsigned long long int) 4071854306U)) : (var_6)))))));
}
