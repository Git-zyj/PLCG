/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_11 = (min(var_11, (!1)));
            arr_6 [i_0] [i_0] = ((~(arr_5 [i_0])));
            var_12 = ((12505 ? (((53019 > (arr_3 [i_1] [i_1] [i_0])))) : (((364965847083644651 > (arr_0 [i_0]))))));

            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_13 = (arr_0 [i_0]);
                            var_14 &= ((-((9223372036854775807 ? var_2 : (arr_0 [i_3])))));
                            var_15 = (min(var_15, ((((arr_4 [i_3] [i_3]) ? (arr_9 [i_3] [i_2] [i_2] [i_3]) : (arr_9 [i_3] [i_2 + 3] [i_1] [i_3]))))));
                        }
                    }
                }
                var_16 = (arr_2 [i_0] [10]);
                var_17 = (var_6 ? (arr_8 [i_2 - 2] [i_2 - 2] [i_2] [i_2]) : (arr_11 [i_0] [i_0] [i_1] [i_0]));
            }
        }
        var_18 = (5076 ? (max(1795, 364965847083644651)) : (((((arr_1 [i_0]) > var_4)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_19 = 0;
        arr_16 [1] = -11991;
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 15;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_6] [i_7] = ((!((((arr_20 [i_5] [i_6] [i_7]) ? -16823 : (arr_7 [i_5] [i_6 + 1] [i_6]))))));
                    arr_24 [i_7] [i_6] [i_5] = 11990;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_20 = (arr_21 [i_6 - 1] [i_7 + 1] [i_6 - 1]);
                                var_21 = (arr_8 [i_8] [i_5] [i_6] [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 2; i_10 < 13;i_10 += 1)
    {
        var_22 = (min((max((((-2147483640 > (arr_0 [2])))), (max(60617, 146)))), (arr_5 [1])));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 13;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            var_23 = ((~(((arr_14 [i_10]) ? (arr_20 [i_12] [i_12] [i_12]) : (~232)))));
                            var_24 = (min(var_24, (arr_30 [i_10])));
                            arr_42 [i_12] [i_13] [i_12] [i_12] = ((!(arr_19 [i_10 - 1])));
                            var_25 = arr_12 [i_13];
                        }
                        var_26 = (max((arr_2 [i_13] [i_13]), 0));
                        var_27 = max(var_2, (arr_38 [i_10] [i_10] [i_12] [7] [i_12]));
                    }
                }
            }
        }
        var_28 = ((-(arr_0 [0])));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 11;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    {
                        arr_50 [i_10] [i_16] [12] [i_17] [1] [7] = (+-9223372036854775799);
                        var_29 = (min(var_29, (((min((arr_45 [i_10] [i_15] [i_16 + 1]), var_3))))));

                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            var_30 += (((arr_52 [i_10 - 2] [6] [i_16 - 1]) ? ((-(arr_52 [i_10 - 2] [12] [i_16 - 2]))) : (arr_52 [i_10 - 2] [11] [i_16 + 2])));
                            arr_53 [i_18] [i_17] [13] [4] [4] = ((((max(8391066792138874331, -11982))) ? ((((arr_20 [i_16 - 2] [i_18] [15]) ? (arr_20 [i_16 + 1] [i_16 + 1] [i_18]) : 6835))) : (arr_20 [i_16 + 1] [3] [3])));
                            arr_54 [i_15] [i_16] [i_17] [i_18] = ((((arr_31 [i_16 - 2] [i_16] [i_16]) ? 12505 : 11970)));
                            arr_55 [11] [11] [6] [i_17] [6] [i_17] = (((((arr_17 [i_15] [i_16 - 2]) > var_8)) ? ((((min(29171, 6835))) ? (arr_45 [i_16 - 1] [i_10 + 1] [i_10 - 1]) : (~3471161314))) : ((((arr_2 [i_15] [i_17]) ? ((((arr_8 [i_18] [i_16] [i_15] [1]) > -11971))) : (((arr_49 [i_18] [i_15] [i_16]) ? var_9 : 11955)))))));
                            var_31 = arr_31 [i_17] [i_16 - 2] [i_15];
                        }
                        for (int i_19 = 2; i_19 < 13;i_19 += 1)
                        {
                            var_32 = var_2;
                            var_33 = (-32767 - 1);
                            var_34 = ((max(7027968792264257662, 9533997413010498995)));
                            var_35 = var_1;
                        }

                        /* vectorizable */
                        for (int i_20 = 0; i_20 < 14;i_20 += 1)
                        {
                            var_36 = (-31329 > 1);
                            var_37 = 53019;
                        }
                        arr_61 [i_17] |= ((!((min(-735947724, (((arr_0 [i_15]) ? 18446744073709551605 : var_3)))))));
                    }
                }
            }
        }
    }
    var_38 = (max(var_0, (!-11959)));
    var_39 = (max(var_39, var_3));
    #pragma endscop
}
