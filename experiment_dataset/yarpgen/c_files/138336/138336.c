/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_21 = (((arr_1 [i_0 + 2]) == -56));
                    var_22 = (max(var_22, ((((arr_7 [14] [i_0 - 2] [i_2]) && (arr_7 [i_0 + 2] [i_0 - 2] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_23 |= (--939664199);
                                arr_12 [i_4] [i_3 - 2] [i_3 - 1] [i_2] [20] [i_0] = -939664208;
                                arr_13 [15] [i_1] [i_1] [15] [i_3 - 1] [i_4] [i_4] = var_16;
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0] = (arr_10 [i_2] [2] [i_0] [i_0]);
                }
                arr_15 [i_0 - 2] [15] [i_1] = 8;
                arr_16 [i_1] [i_1] = ((-((((arr_0 [i_0 + 1]) || (arr_0 [i_0 - 1]))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_5] [i_6] = (var_1 ? ((((arr_0 [i_1]) || 914689958))) : (min((arr_1 [i_5]), ((((arr_1 [i_0]) == 843714873))))));
                                arr_24 [i_0] [i_5] [i_5] [i_6 + 2] [i_6 + 2] = ((((((var_3 ? (arr_5 [i_0 - 2] [13] [13]) : var_19))) ? (arr_22 [i_0] [0] [i_5] [i_6 + 3] [i_6] [i_7]) : (((((arr_21 [18] [i_1] [i_5]) + 2147483647)) >> (((arr_9 [i_0] [i_5] [i_6] [i_5]) - 7745817104805271616)))))));
                            }
                        }
                    }
                }
                var_24 ^= (var_14 ? (arr_7 [i_0] [20] [20]) : (((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 2]))));
            }
        }
    }
    #pragma endscop
}
