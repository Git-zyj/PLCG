/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158131
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
    var_12 = ((/* implicit */_Bool) var_6);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_9) : (max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (28U))), (1998001076U)))));
    var_14 = var_11;
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_15 |= min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2127799134U)) ? (((/* implicit */int) arr_5 [2ULL] [2ULL])) : (((/* implicit */int) (unsigned short)16384))))), (min((arr_3 [(unsigned short)4] [i_0 + 1]), (arr_3 [2LL] [i_0 - 3]))));
                var_16 = ((/* implicit */long long int) arr_5 [i_1] [i_1]);
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) min((var_17), (max((4294967295U), (((arr_10 [i_2 + 1] [i_4]) & (arr_10 [i_2 - 1] [i_4])))))));
                                var_18 = ((/* implicit */long long int) arr_0 [i_1]);
                                arr_13 [i_0] [i_4] [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])), (min((17987589201749764847ULL), (((/* implicit */unsigned long long int) 28U))))))) ? (((((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_9 [i_0] [i_1] [i_2] [i_3 - 1] [i_0] [i_4 + 2]) : (arr_12 [i_1] [i_1]))) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 - 1] [i_1]))))) : (((/* implicit */long long int) ((31U) - (13U))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_2))));
}
