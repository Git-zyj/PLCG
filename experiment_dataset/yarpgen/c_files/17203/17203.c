/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((max(-var_17, var_3)), (max((var_17 | var_14), var_2))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_20 = 62280;
                var_21 = var_14;
            }
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                arr_9 [i_0] [1] = (((arr_1 [i_1]) ? (arr_1 [i_0]) : (arr_1 [i_0 - 2])));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_15 [i_4] [8] [6] [14] [i_1] = 234;
                            var_22 = (max(var_22, (((((var_7 + 2147483647) >> (((arr_7 [i_0] [7] [i_4] [13]) - 226))))))));
                        }
                    }
                }
            }
            arr_16 [i_1] [14] [i_0] = ((((arr_14 [i_0] [i_0] [1] [i_1] [i_1] [i_1]) ? 11879 : 47477)));
            arr_17 [5] [i_1] = ((247 * (arr_4 [i_0 - 1] [i_0 - 2])));
        }
        arr_18 [i_0] = (!1);
        var_23 = (229389065 / 2934052818707402904);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_24 |= (((((44 / (arr_20 [i_6])))) ? 1452687644 : (234 / 1)));
        var_25 = (~var_3);
        arr_21 [i_6] &= ((21 ? (arr_20 [i_6]) : (arr_20 [i_6])));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        arr_24 [i_7] = 0;
        var_26 = (max(var_26, ((((arr_20 [i_7 - 1]) ? (arr_20 [i_7 + 2]) : (arr_20 [i_7 + 2]))))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 7;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_31 [1] [i_7] [i_7] [i_7] = (((arr_0 [i_8] [i_7]) <= 3149));
                    var_27 += (arr_19 [i_7 + 2] [i_7]);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 9;i_11 += 1)
                        {
                            {
                                var_28 = ((1 ? (arr_34 [1] [i_8] [4] [i_8]) : (arr_34 [i_7] [i_9] [2] [i_11 + 1])));
                                var_29 = (!4264410554411275103);
                            }
                        }
                    }

                    for (int i_12 = 1; i_12 < 8;i_12 += 1)
                    {
                        arr_40 [3] [i_7] = ((-6750 * (!211)));
                        arr_41 [2] [8] [i_9] [0] &= ((~(arr_2 [3])));
                        var_30 = -1016364428910387278;
                        arr_42 [i_7] [i_8] [i_9] [i_7] [i_8] [i_7] = (arr_19 [i_8 + 3] [i_8]);
                        var_31 = ((0 ? (arr_19 [i_8 + 4] [i_7 + 1]) : (arr_34 [i_8 + 2] [4] [i_8] [i_8])));
                    }
                    for (int i_13 = 4; i_13 < 8;i_13 += 1)
                    {
                        var_32 ^= arr_43 [i_7] [4] [i_8] [i_9] [i_9] [i_13];
                        arr_45 [i_7] [i_9] [0] [i_7] = (arr_38 [i_7] [i_9] [i_13]);
                        arr_46 [i_7] [i_8] [i_7] [i_9] [i_9] [i_13] = (arr_30 [i_13] [i_9] [i_8] [i_7]);
                    }
                    for (int i_14 = 2; i_14 < 8;i_14 += 1)
                    {

                        for (int i_15 = 1; i_15 < 10;i_15 += 1)
                        {
                            var_33 = (min(var_33, (arr_26 [i_15 - 1] [i_8 + 4])));
                            arr_53 [i_7] [i_7] [i_9] [i_14] [7] = (arr_25 [7] [i_9] [i_7]);
                            arr_54 [6] [i_8] [i_8] [i_8] [i_8] [i_8] [i_7] = (arr_26 [i_9] [i_14 + 3]);
                        }
                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            var_34 = (min(var_34, 243));
                            arr_58 [i_8] [i_8] [9] [1] [i_8] [i_7] = ((1 ? (arr_26 [i_8 - 1] [i_7 + 2]) : var_17));
                            arr_59 [i_7] [i_7] [i_9] [i_14] [i_16] = (((arr_36 [i_9]) && (arr_50 [i_7])));
                            var_35 = (min(var_35, var_10));
                            var_36 = (arr_14 [8] [i_8] [i_9] [2] [i_7] [i_8]);
                        }
                        var_37 = ((!(arr_22 [i_8])));
                    }
                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        var_38 = (arr_32 [i_7 - 1] [i_9]);
                        arr_62 [i_7] [i_8] [i_9] [i_17] [i_17] = var_10;
                        var_39 = (~0);
                    }
                    var_40 = 0;
                }
            }
        }
        arr_63 [i_7] = (((arr_20 [i_7]) ? var_2 : (arr_57 [i_7 + 2] [i_7 - 1] [i_7 + 1] [i_7] [i_7 + 1])));
        arr_64 [i_7] = var_9;
    }
    /* LoopNest 3 */
    for (int i_18 = 1; i_18 < 11;i_18 += 1)
    {
        for (int i_19 = 1; i_19 < 11;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 12;i_20 += 1)
            {
                {
                    arr_72 [i_18] [i_19] [i_18] [2] = ((var_1 % ((247 ? var_16 : (((51 ? var_15 : 243)))))));
                    var_41 = var_16;
                    var_42 = (~5);
                    var_43 &= 24;
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 12;i_22 += 1)
                        {
                            {
                                var_44 = (max(var_44, (((min(1, 16804941583117110680))))));
                                var_45 *= ((!(arr_75 [i_18 - 1] [i_18 + 1] [i_18] [i_18] [8])));
                                arr_78 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
