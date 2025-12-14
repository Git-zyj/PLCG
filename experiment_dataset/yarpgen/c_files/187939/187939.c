/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (7539339397949357125 ? -8404898667567094425 : 6322785466295022632);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        arr_11 [15] [i_2] [i_1] [16] = (arr_6 [i_3] [4] [i_1] [i_0]);
                        arr_12 [0] [11] [0] [i_0] [3] = (~(((arr_5 [i_3 - 2] [i_3 - 1] [18] [i_0]) | var_8)));
                        arr_13 [23] [i_2] [19] [i_0] = var_3;
                        arr_14 [i_3] [i_2] [10] [i_0] = (+((((((var_2 ? (arr_7 [i_3] [i_3] [7] [i_0] [i_0]) : (arr_4 [i_3]))) + 9223372036854775807)) >> (((arr_1 [i_3 + 1]) - 5220091848962625017)))));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_20 [i_4] [i_4] = (((((arr_3 [i_0] [i_0]) ? (arr_5 [i_5] [i_4] [i_1] [1]) : var_4))) ? (arr_16 [i_4]) : (arr_7 [i_5] [i_4] [i_1] [i_1] [i_0]));
                            arr_21 [i_4] [i_2] [i_2] [13] [i_1] [i_4] = arr_9 [i_2];
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            arr_24 [i_6] [15] [i_4] [i_4] [15] [i_0] = -var_4;
                            arr_25 [i_6] [14] [i_0] |= arr_17 [i_6] [i_4] [12] [12] [13];
                        }
                        arr_26 [i_4] [i_4] [i_1] [i_4] [12] = ((arr_22 [9] [i_4] [i_2] [i_4] [i_0]) ? (arr_10 [i_4] [i_2] [i_1] [i_0]) : var_6);
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        arr_31 [i_7] [9] [7] [i_0] = var_9;
                        arr_32 [i_7] [i_1] [1] = ((-9223372036854775807 - 1) + 4515196574960088115);
                        arr_33 [i_7] [22] [i_1] [i_0] = var_1;
                        arr_34 [i_7] [i_2] [23] [i_0] |= arr_15 [i_7] [19] [i_2] [i_1] [6] [i_0];
                    }
                    arr_35 [i_0] [8] [i_0] = ((((arr_23 [16] [16] [i_0]) ? (arr_6 [7] [i_2] [21] [i_0]) : (arr_23 [i_2] [2] [i_0]))) | var_7);
                    arr_36 [6] = var_5;
                }
            }
        }
    }
    var_12 = min(((-4515196574960088115 ? var_6 : 8721138363582291384)), -9223372036854775800);
    #pragma endscop
}
