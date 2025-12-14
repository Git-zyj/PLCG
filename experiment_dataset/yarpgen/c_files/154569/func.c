/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154569
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) ((arr_0 [i_0 + 1] [i_0]) != (arr_0 [i_0 - 2] [i_0])));
        var_19 = ((arr_0 [i_0 - 1] [i_0]) & (arr_0 [i_0 - 1] [i_0]));
        var_20 -= ((/* implicit */short) arr_1 [i_0 - 2]);
    }
    for (long long int i_1 = 2; i_1 < 9; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned int) var_4);
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) ^ (max((((/* implicit */unsigned int) var_10)), (arr_0 [i_1] [i_1])))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 8; i_3 += 3) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_21 = ((/* implicit */short) max((var_21), (arr_12 [9U] [i_4 - 1] [i_3] [i_1 + 1] [i_3 + 3])));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 4; i_5 < 10; i_5 += 1) 
                        {
                            arr_17 [i_4] [i_2] [i_1] = ((/* implicit */short) arr_1 [i_1]);
                            var_22 = ((/* implicit */unsigned long long int) arr_15 [i_1] [i_3 - 1] [6LL] [i_3] [i_3 - 1]);
                            var_23 = ((/* implicit */short) max((var_23), (arr_12 [i_2] [i_2] [i_2] [i_3 - 1] [i_5])));
                        }
                        var_24 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_9 [i_2])), (arr_3 [i_1])));
                        arr_18 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_3] [i_3] [i_3 + 1] [i_3 + 3] [i_3])) * (((/* implicit */int) arr_16 [i_4] [i_4] [i_4] [i_3 + 3] [i_3]))))) - (var_6)));
                    }
                } 
            } 
            var_25 += ((/* implicit */short) arr_6 [i_1] [i_2]);
        }
        arr_19 [i_1] = ((/* implicit */long long int) var_8);
    }
    var_26 = ((/* implicit */long long int) var_11);
}
