/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (var_7 % var_11);
            arr_5 [i_0] = (arr_1 [i_0 + 3]);
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_13 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 2] = (arr_9 [i_0 + 3] [i_0 - 1] [i_0 + 2] [i_0 + 1]);
                        arr_14 [i_0] [i_2 + 1] [i_0] [i_4] = (((arr_11 [i_0] [i_2] [i_3] [i_4]) ? (arr_1 [i_0]) : (arr_1 [3])));
                    }
                }
            }
            var_18 = (min(var_18, ((((arr_1 [i_2]) ? var_6 : (arr_7 [i_0] [i_2 - 1] [8]))))));
            var_19 = -var_16;
            var_20 = (min(var_20, var_12));
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_21 -= (~var_6);
                            var_22 = (max(var_22, (((!(~var_3))))));
                            arr_26 [i_0 + 2] [i_0] [i_6] [i_7] [12] = var_13;
                            var_23 = -var_9;
                        }
                    }
                }
            }
            arr_27 [i_0] [i_5] = -var_14;
        }

        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
        {
            arr_30 [i_0] [15] = 3572790942;
            var_24 = (~var_12);
        }
        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
        {
            arr_33 [i_0] = (-(arr_1 [i_0 + 3]));
            arr_34 [i_0] = (((arr_19 [i_0 + 1] [i_10] [i_0 + 3] [i_0]) ? (arr_19 [i_0 - 1] [i_0 - 1] [i_10] [i_0]) : (arr_19 [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_0])));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 15;i_13 += 1)
                    {
                        {
                            var_25 = ((var_17 ? var_17 : (arr_15 [i_0] [i_0 - 1])));
                            var_26 = (min(var_26, (((var_13 ? var_5 : (var_9 - var_14))))));
                            arr_41 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = (((arr_7 [i_0] [3] [i_0 + 1]) ? (arr_7 [i_0] [i_0] [i_0 - 1]) : var_16));
                            var_27 ^= (arr_11 [i_0] [i_0 + 2] [i_0 + 2] [i_13 + 1]);
                            arr_42 [i_0] [i_10] [i_0] [i_11] [i_12] [i_12] [i_13 - 1] = (((((arr_3 [i_0]) ? var_17 : 1668037571)) > var_4));
                        }
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 2; i_15 < 15;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {
                    {
                        var_28 = (max(var_28, (((var_17 ? var_17 : var_13)))));

                        for (int i_17 = 0; i_17 < 16;i_17 += 1)
                        {
                            arr_53 [i_0] = var_13;
                            var_29 = ((var_16 ? (var_17 && var_4) : (((arr_48 [i_0] [i_0] [i_15] [i_0]) ? (arr_23 [i_15] [i_16] [i_17]) : var_8))));
                        }
                        for (int i_18 = 2; i_18 < 13;i_18 += 1)
                        {
                            var_30 = 18446744073709551608;
                            arr_56 [i_0] [i_15] = (((arr_47 [i_0]) + var_5));
                        }
                    }
                }
            }
            var_31 = (arr_48 [i_0] [i_0] [i_14] [i_14]);
        }
        var_32 = -var_8;
    }
    var_33 = (var_4 <= var_0);
    #pragma endscop
}
