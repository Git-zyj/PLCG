/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147823
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
    var_16 = var_15;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2 - 1] [i_2])) ? (((/* implicit */int) arr_6 [i_2 + 3] [i_2 + 3] [i_2 + 2])) : (((/* implicit */int) var_9))));
                    var_17 = ((/* implicit */short) arr_6 [i_0] [i_1] [i_2]);
                }
                /* LoopNest 3 */
                for (unsigned int i_3 = 2; i_3 < 15; i_3 += 2) 
                {
                    for (short i_4 = 3; i_4 < 17; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) var_9);
                                arr_19 [i_4] [i_1] [8U] [i_1] [(short)7] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) 1113044721U)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (2832791678107203600ULL))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) min((var_19), (((((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)0)), (var_13)))) ? (min((arr_17 [i_0] [i_1] [i_1]), (((/* implicit */unsigned int) var_1)))) : (max((arr_11 [i_0]), (((/* implicit */unsigned int) (short)1554)))))) / (((/* implicit */unsigned int) var_0))))));
            }
        } 
    } 
}
