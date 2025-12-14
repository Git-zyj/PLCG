/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179488
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
    var_17 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (max((((/* implicit */unsigned long long int) ((var_13) & (var_7)))), (var_14)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_4] [i_2] [i_0] [i_4] [i_2] = (~(((((/* implicit */_Bool) ((3556537650U) ^ (7U)))) ? (((((/* implicit */_Bool) (unsigned short)1080)) ? (((/* implicit */unsigned long long int) 288230376151711743LL)) : (400208665447226730ULL))) : (((/* implicit */unsigned long long int) arr_8 [8ULL] [8ULL] [6ULL])))));
                                var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_12 [i_3 + 2]) > (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                                arr_14 [(unsigned short)6] [i_3] [i_3] [i_0] [1U] = ((/* implicit */unsigned int) min((max((((var_2) ^ (((/* implicit */long long int) var_13)))), ((-(arr_12 [i_1]))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))))), (arr_8 [i_0] [i_0 - 1] [i_0])))));
                                arr_15 [(unsigned short)9] [i_1] [i_1] [(unsigned short)3] [i_0] [12LL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1361592295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48993))) : (1726849853U)))) : (var_11)));
                                arr_16 [7ULL] [i_3 + 1] [i_0] [(unsigned short)12] [i_0] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) var_6);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(var_2)))), (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (arr_9 [i_0] [i_2]) : (arr_1 [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_3 [0U] [0U]) : (arr_3 [i_0 - 1] [i_0 - 1])))))))))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((max((var_2), (10LL))), (var_11))))));
                }
            } 
        } 
    } 
}
