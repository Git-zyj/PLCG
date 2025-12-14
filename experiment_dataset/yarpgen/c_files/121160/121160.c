/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (min((arr_4 [i_1]), (arr_1 [i_1])));
                arr_7 [i_0] [i_1] = ((((max((max((arr_4 [i_1]), 203)), 18446744073709551615))) ? ((((18446744073709551615 && (arr_4 [i_0]))))) : ((-(max((arr_1 [i_1]), var_12))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_17 = (max(var_17, (((arr_11 [i_0] [i_1] [10] [i_4] [i_3] [i_4]) ? (((-(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (arr_8 [i_1] [i_1] [i_2 + 1])))));
                                arr_15 [i_3] [i_1] [i_3] [i_3] = (arr_12 [i_0] [i_1]);
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_18 -= ((arr_2 [i_2 + 1]) ? var_0 : (arr_12 [i_0] [i_2 - 2]));
                                var_19 = (((~var_1) ^ ((-(arr_6 [14] [i_1] [16])))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 20;i_6 += 1)
                            {
                                arr_23 [i_1] [i_3] [i_3] [i_1] [i_1] = (((((arr_16 [i_0] [i_0] [i_2] [i_3] [i_6]) ? (arr_22 [i_0] [i_1] [i_2 - 2]) : (arr_22 [i_3] [i_3] [i_1]))) | (arr_17 [i_2 - 3] [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                                var_20 = (-1 | 52171);
                            }
                            var_21 &= arr_8 [i_0] [i_0] [i_0];
                            var_22 = (arr_3 [i_1]);
                        }
                    }
                }
                var_23 = ((~(((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_0]) : (arr_5 [i_0] [i_1])))));
            }
        }
    }
    var_24 = var_9;
    #pragma endscop
}
