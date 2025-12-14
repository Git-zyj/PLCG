/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [i_1] = ((((((arr_2 [i_1] [i_2]) - var_10))) ? ((-(((arr_1 [i_0] [i_2]) ? var_13 : var_1)))) : 22));
                    arr_8 [i_0] [i_1] [i_0] [i_2] = -248957201546697601;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 17;i_4 += 1)
            {
                {
                    var_17 = ((var_8 ? var_8 : (arr_1 [i_0] [i_3])));

                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        var_18 = 31770;
                        var_19 = 26242;
                        arr_16 [i_3] [i_5] [i_3] [i_3] = var_15;
                    }
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        var_20 = 14391850828271321566;
                        var_21 = var_0;
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_22 = arr_0 [i_4] [i_4];
                            var_23 = (((18446744073709551615 + var_9) ? var_7 : 31770));
                            var_24 = ((1 < ((~(arr_10 [i_0] [i_0])))));
                        }
                        var_25 &= ((var_10 < (arr_3 [i_7 + 2] [i_4 - 1])));

                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_26 = (min(var_26, 33766));
                            var_27 = (arr_0 [i_0] [16]);
                            arr_27 [i_0] [i_3] [i_0] [i_7 + 2] [i_9] = (arr_11 [i_0]);
                            arr_28 [1] [1] = (1 + 1);
                            var_28 = var_10;
                        }
                        var_29 = (arr_6 [i_3 + 2]);
                    }
                    var_30 = (0 << 1);
                }
            }
        }
        var_31 += (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_32 = (((!var_2) ? ((((var_14 % 33766) ^ var_3))) : (~var_6)));
                    var_33 = (arr_5 [i_0] [i_0] [i_10 + 1] [i_10 - 1]);
                }
            }
        }
    }
    for (int i_12 = 1; i_12 < 19;i_12 += 1)
    {
        var_34 = max(var_9, ((((((arr_34 [i_12] [14]) * var_0))) ? (arr_35 [i_12 + 1]) : 33766)));
        arr_36 [i_12] = (arr_34 [i_12] [i_12]);
    }
    for (int i_13 = 2; i_13 < 18;i_13 += 1)
    {
        var_35 = (arr_34 [i_13] [i_13]);
        var_36 = var_11;
    }
    for (int i_14 = 2; i_14 < 19;i_14 += 1)
    {
        arr_43 [i_14 + 2] [i_14] = 3028787347790323422;
        var_37 = (min(var_37, ((max(-25686, ((((((arr_42 [i_14] [i_14]) ? var_9 : 15417956725919228192))) ? var_8 : 1)))))));
    }
    /* LoopNest 2 */
    for (int i_15 = 1; i_15 < 1;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {
            {
                arr_48 [6] = (~((var_12 ? ((var_3 | (arr_45 [i_15]))) : -1800767215)));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        {
                            var_38 = ((+(((((-127 - 1) + 2147483647)) << (var_2 - 117)))));
                            arr_53 [i_18] [i_17] [i_17] [i_18] = var_15;
                            arr_54 [8] [i_16] [i_17] [i_18] = ((((max((var_11 - var_11), ((var_8 ? (arr_46 [i_17] [i_15 - 1]) : 12))))) ? (((!(arr_45 [i_15 - 1])))) : var_15));
                        }
                    }
                }
                arr_55 [i_15] [12] [i_16] = (((((4080 ? 7 : 1))) & (((arr_49 [i_15 - 1] [i_16] [i_15]) * (arr_50 [i_16])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_19 = 2; i_19 < 20;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 24;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 24;i_21 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 3; i_22 < 23;i_22 += 1)
                    {
                        for (int i_23 = 4; i_23 < 22;i_23 += 1)
                        {
                            {
                                var_39 = 12155390981740921200;
                                arr_71 [i_19 + 4] [i_21] [i_21] [i_22] [i_22] = (1855591763 / -6879074135954603756);
                                arr_72 [i_22] [9] [1] [i_21] [i_20] [i_22] = (max((((((arr_68 [i_19 + 2] [0] [i_22] [i_19 + 4]) ? var_2 : 3028787347790323411)) / (((max((arr_49 [i_20] [i_22] [i_22 + 1]), 65528)))))), (((-(arr_49 [i_23 - 2] [i_22] [i_19 + 2]))))));
                            }
                        }
                    }
                    var_40 = var_14;
                }
            }
        }
    }
    var_41 = ((((((var_13 ? var_4 : var_7)) ? var_0 : var_10))));
    #pragma endscop
}
