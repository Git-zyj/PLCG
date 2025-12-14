/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_2 + 1] = (((arr_0 [i_2 - 1]) <= (arr_0 [i_0])));
                        arr_11 [i_3] [i_2] [11] [i_0] |= ((251 ? (((arr_0 [1]) | 18446744073709551615)) : (0 / 1)));
                        var_17 = (min(var_17, (((arr_9 [i_0] [i_1] [i_2 + 1]) ? (arr_9 [i_0] [i_1] [4]) : var_7))));
                    }
                }
            }
        }

        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            arr_15 [i_4] [i_4 - 1] [i_4 - 1] = (((arr_4 [4] [i_4 - 1] [9] [i_4]) ^ (arr_2 [i_4 - 1] [7] [7])));
            arr_16 [i_0] [i_0] &= ((((arr_7 [i_0] [9]) ? 227 : (arr_13 [4] [1] [i_0]))));
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_18 = (arr_5 [i_7] [i_6]);
                            arr_29 [i_8] [13] = 0;
                            var_19 = (min(var_19, var_10));
                        }
                    }
                }
                arr_30 [4] &= (arr_21 [3] [i_5] [i_6] [i_5]);
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_33 [i_9] [i_5] [i_5] [i_0] = arr_24 [7] [i_5] [i_0] [i_5] [i_0];
                arr_34 [i_0] |= ((13859 ? (arr_17 [i_5]) : (arr_1 [i_0])));
                arr_35 [i_5] [i_5] = (((arr_27 [i_0] [i_5] [i_9] [i_5] [i_5]) || (arr_27 [i_0] [i_5] [i_5] [i_0] [i_5])));
                var_20 = 1;
            }
            arr_36 [i_0] [i_5] [i_5] = (((arr_12 [i_0] [i_5]) ? ((1991260246 ? -6853 : 7841853954905336412)) : (arr_31 [i_0] [i_0] [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 12;i_11 += 1)
                {
                    {
                        arr_41 [i_11] [i_10] [i_0] [i_0] [i_10] [i_0] = (arr_19 [i_0] [i_0]);
                        arr_42 [i_0] [i_10] [i_11 + 2] = ((1 ? (arr_40 [13] [7] [i_10 - 1] [7]) : var_0));
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            var_21 = (max(var_21, (arr_27 [i_12] [i_12] [i_0] [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 14;i_14 += 1)
                {
                    {
                        arr_52 [i_0] [i_0] [i_13] [i_13] = (((arr_13 [i_13 + 3] [i_13 - 1] [i_12]) / var_1));
                        arr_53 [i_0] [i_0] [i_12] [i_12] = arr_14 [i_12];
                        arr_54 [10] [i_12] [i_13] [i_13 + 3] [i_12] [i_12] |= (arr_8 [i_14 + 1] [1] [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_14]);
                    }
                }
            }
        }
        arr_55 [i_0] = var_13;
        var_22 = var_2;
        arr_56 [i_0] [11] &= (((arr_4 [i_0] [i_0] [i_0] [i_0]) ? var_13 : -96));
    }
    var_23 &= var_13;
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 23;i_16 += 1)
        {
            {
                arr_61 [i_15] [i_15] [i_15] = ((1 ? ((3716 >> (-24421 + 24426))) : -125));
                var_24 = var_5;
            }
        }
    }
    var_25 &= var_6;
    #pragma endscop
}
