/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((((var_8 ? var_8 : var_13))) ? ((1 ? var_3 : var_7)) : var_8)), var_2));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 &= var_13;
                    var_16 = (min(var_1, (max((arr_3 [i_0 - 1]), var_13))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [i_1] = (arr_9 [3] [3]);
                        var_17 = (max(var_17, 1));
                        var_18 = (max(var_18, (arr_4 [11])));
                        var_19 = var_8;
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_15 [i_1] [0] = ((((((1 & var_10) | var_2))) ? ((min(1, (arr_14 [i_0] [i_0] [i_2] [i_4] [i_0] [i_0 - 1])))) : ((-(1 / var_10)))));

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_20 = (max(var_20, 1));
                            var_21 += (min((arr_16 [i_4] [i_0 + 1] [i_0 + 1]), var_0));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_20 [i_1] [8] [i_2] [8] = ((1 && (arr_4 [6])));
                        var_22 -= ((1 & (((arr_19 [10] [i_2] [i_2] [i_6] [2] [i_0]) ? (arr_13 [1] [i_1] [i_0] [i_1] [i_0]) : (arr_19 [i_0] [i_2] [i_0] [i_0] [0] [i_6])))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_23 [i_1] [i_1] = (((arr_6 [1] [i_1] [i_1] [i_1]) > var_9));
                        var_23 = (max(var_23, var_1));
                        var_24 = (min(var_24, (((((var_5 ? 1 : (((arr_10 [7] [7]) ? (arr_5 [i_0] [i_0] [i_2]) : (arr_19 [4] [i_2] [i_2] [12] [i_7] [8])))))) + (arr_6 [i_0 + 1] [i_0] [i_0 + 1] [i_1])))));
                        var_25 = (~var_13);
                        arr_24 [i_0] [i_1] [i_0] [4] [i_0] = 1;
                    }
                }
            }
        }
        var_26 = (max(var_26, ((min((((!((!(arr_10 [1] [i_0])))))), 34339)))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_27 [1] = (max((~var_7), (arr_26 [i_8])));
        var_27 &= var_2;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_28 = var_11;

        for (int i_10 = 3; i_10 < 17;i_10 += 1)
        {
            arr_33 [i_9] = ((-(arr_25 [13])));
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_29 = 1;
                            arr_42 [12] [i_9] [i_9] [i_9] [i_9] = (max((((((arr_40 [i_9] [i_11] [i_9] [i_13]) ? -3312 : var_13)) & -var_9)), (arr_30 [i_12] [i_11] [i_9])));
                            var_30 = var_1;
                            var_31 = var_9;
                        }
                    }
                }
            }
            var_32 -= (((min(((var_9 ? var_3 : var_6)), 1)) >> var_1));
            arr_43 [i_9] = (arr_40 [i_9] [i_9] [i_9] [i_9]);
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 0;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        {
                            var_33 = (max(var_33, ((min(((((~var_11) ? (~-8393244211938113309) : 1))), ((((-3691 > (arr_26 [i_16]))) ? var_0 : var_1)))))));
                            arr_53 [i_9] [10] [i_9] [i_9] [i_16] = var_9;
                        }
                    }
                }
            }
        }
        for (int i_17 = 3; i_17 < 17;i_17 += 1)
        {
            arr_57 [i_9] [i_9] = (min((((var_13 ? (((1 ? 1 : -71))) : (min(var_8, (arr_29 [i_9])))))), ((var_7 ? (~var_7) : (min((arr_54 [i_17] [i_9] [i_9]), (arr_32 [i_9])))))));
            var_34 = max((((arr_39 [14] [i_9] [i_17 + 1] [17]) ? var_2 : (arr_39 [i_9] [i_9] [i_17 + 1] [i_17]))), ((max(40920, (arr_39 [i_9] [i_9] [i_17 - 2] [i_17 + 1])))));

            for (int i_18 = 2; i_18 < 15;i_18 += 1)
            {
                var_35 = var_13;
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 18;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 18;i_20 += 1)
                    {
                        {
                            arr_64 [i_9] [i_9] = (min((((((((arr_39 [15] [i_9] [10] [15]) ? 1 : var_11))) ? var_9 : var_4))), (min((arr_60 [i_9] [i_9] [i_9]), var_12))));
                            arr_65 [i_9] [0] [i_17 + 1] [i_9] = arr_31 [1] [i_17 - 3] [i_17 - 3];
                            arr_66 [i_9] [i_17 - 3] [i_18 + 3] [i_18] [i_19] [i_19] [i_9] = 3693;
                            var_36 = (max(((min((arr_54 [i_17] [i_9] [i_18 + 1]), var_4))), ((-(arr_54 [i_17] [i_9] [i_18 + 2])))));
                        }
                    }
                }
                arr_67 [i_9] [i_17] [i_9] = (arr_63 [i_9] [i_17 - 1] [i_17] [i_9]);
            }
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                arr_70 [i_9] [7] = (arr_63 [i_21] [i_21] [i_21] [i_9]);

                /* vectorizable */
                for (int i_22 = 0; i_22 < 18;i_22 += 1)
                {
                    arr_73 [1] [16] [i_21] [14] &= (arr_71 [1] [i_21] [12] [i_9]);
                    var_37 += (((arr_55 [12] [12] [i_21]) ? (!6) : ((~(arr_32 [10])))));
                    arr_74 [i_9] [i_9] [i_21] [i_9] = var_12;
                    arr_75 [i_9] [i_9] [i_21] [i_22] [i_9] = (--1);
                }
                arr_76 [i_9] [i_9] = ((!((min(var_7, var_10)))));
            }
            for (int i_23 = 3; i_23 < 15;i_23 += 1)
            {
                var_38 = ((((max(-3693, ((-(arr_56 [i_23])))))) != var_3));
                var_39 = ((1 ? 40920 : (arr_61 [i_9] [i_9] [i_17] [i_23])));
                var_40 = (((((~(arr_58 [i_23 - 1] [i_23 - 3] [i_23 - 1])))) ? ((~(!1))) : ((-(arr_28 [i_23])))));
            }
        }
        /* vectorizable */
        for (int i_24 = 0; i_24 < 18;i_24 += 1)
        {
            arr_83 [i_9] = (((arr_41 [0] [i_9] [i_24] [i_24] [9]) != var_2));
            arr_84 [i_9] = 1;
        }
    }
    /* LoopNest 3 */
    for (int i_25 = 4; i_25 < 11;i_25 += 1)
    {
        for (int i_26 = 2; i_26 < 11;i_26 += 1)
        {
            for (int i_27 = 0; i_27 < 12;i_27 += 1)
            {
                {
                    var_41 ^= (min(((!(arr_60 [i_25] [i_26 + 1] [i_25]))), (1 != 1)));
                    arr_96 [1] [i_25] = (1 * var_11);
                }
            }
        }
    }
    #pragma endscop
}
