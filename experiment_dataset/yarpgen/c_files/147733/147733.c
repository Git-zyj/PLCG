/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_13 ? var_4 : ((var_1 + ((max(var_5, var_12))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_15 = (max(var_15, (arr_7 [i_0] [i_0 + 1] [i_0])));
                        arr_9 [i_0 - 1] [i_3] [i_2] = ((var_4 < (arr_4 [i_0 + 1])));
                        arr_10 [i_0] [i_0] [i_2] [i_0] [i_0] [i_1] = ((-(arr_7 [i_2] [i_1] [i_1])));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_16 = (arr_6 [i_0] [i_5]);
                arr_17 [i_0 - 1] [i_4] [i_5] = (var_10 ? (arr_3 [i_5] [i_0 + 1] [i_0 + 1]) : var_10);
            }
            var_17 = (((arr_14 [i_0 + 1] [i_0 - 1] [i_0 - 1]) * (arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_18 = (arr_20 [i_0 - 1]);

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    arr_27 [i_0] [i_6] [i_7] = arr_3 [15] [i_6] [i_0];
                    arr_28 [i_7] [i_7] = (arr_16 [i_0 + 1]);
                    var_19 = var_10;
                }
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    var_20 *= (arr_12 [i_0]);
                    arr_32 [i_0] [i_0] [i_0] [i_7] = (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : var_6));
                    var_21 = (((arr_21 [3] [i_0]) ? var_9 : var_2));
                    var_22 = (((arr_11 [i_0]) ? (arr_24 [i_0] [i_6] [20] [20] [i_6] [i_0]) : var_7));
                    var_23 = (((arr_11 [i_0 - 1]) >= (arr_5 [i_0 + 1] [i_9 - 1])));
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        arr_39 [i_0] [i_6] [i_0] [i_10] [i_11] [i_6] [8] |= ((((((arr_1 [i_0]) ? var_12 : var_6))) - (arr_11 [i_10])));
                        var_24 -= (arr_37 [14] [i_7] [i_7] [14] [i_7]);
                    }
                    var_25 = var_9;
                    var_26 ^= (var_8 & var_3);
                    var_27 = (arr_0 [i_7] [1]);
                    arr_40 [i_7] [i_7] = (arr_8 [4] [i_6] [21] [i_6]);
                }
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    arr_43 [i_12] [i_7] [i_7] [i_0] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                    var_28 = (((arr_26 [i_0 - 1]) ? (arr_26 [i_0 + 1]) : (arr_26 [i_0 + 1])));
                    var_29 = var_7;
                    var_30 = (var_10 * (arr_6 [i_0 - 1] [i_0 + 1]));
                }
            }
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                arr_48 [i_0] [i_0] [i_13] [i_0] = var_6;
                var_31 = (max(var_31, (((var_7 << (((arr_0 [17] [17]) - 3760168351567583475)))))));
            }
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                var_32 *= ((!(~var_13)));
                var_33 = ((var_3 ? var_9 : (arr_45 [i_0 - 1] [12] [6])));
                var_34 = (((arr_24 [i_0 + 1] [i_6] [i_14] [i_14] [i_14] [i_6]) & (arr_24 [i_0 + 1] [i_6] [i_0] [i_6] [1] [16])));
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    {
                        var_35 = (!var_8);

                        for (int i_17 = 0; i_17 < 24;i_17 += 1)
                        {
                            arr_59 [i_15] [i_15] [i_6] [i_0] = ((var_3 ? (((arr_35 [i_0] [2] [19] [i_0]) ? (arr_19 [i_17]) : var_7)) : (arr_26 [i_0 - 1])));
                            var_36 = (!var_9);
                            var_37 += (arr_19 [i_0]);
                        }
                        for (int i_18 = 1; i_18 < 23;i_18 += 1)
                        {
                            var_38 = (max(var_38, ((((arr_21 [i_0 - 1] [21]) & (arr_57 [i_18 + 1] [i_0 - 1] [i_18] [i_18] [i_6] [i_0 - 1] [i_0 - 1]))))));
                            var_39 = (((arr_15 [i_18 - 1] [i_18] [i_0 + 1]) / (arr_15 [i_18 - 1] [i_6] [i_0 - 1])));
                            var_40 += (((var_13 ? (arr_60 [i_15] [i_15] [i_15] [i_15] [i_18 + 1] [i_15]) : (arr_0 [i_0] [i_6]))));
                        }
                        for (int i_19 = 0; i_19 < 24;i_19 += 1)
                        {
                            arr_65 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0] = (var_3 ? (arr_41 [i_0] [i_0] [i_0] [i_0 - 1] [i_0]) : (arr_60 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 1] [15]));
                            arr_66 [i_15] [i_15] [i_15] = (arr_15 [i_0 + 1] [18] [i_15]);
                        }
                        var_41 = ((var_7 ? var_6 : (arr_26 [i_0 + 1])));
                        var_42 = (arr_8 [i_6] [i_0 - 1] [i_0] [i_0]);
                    }
                }
            }
        }
        var_43 = (max(var_43, (arr_38 [i_0] [7] [i_0] [i_0] [i_0])));

        for (int i_20 = 0; i_20 < 24;i_20 += 1)
        {
            var_44 = ((arr_25 [i_0 + 1]) ? (arr_25 [i_0 + 1]) : var_7);
            var_45 &= ((((((arr_50 [3] [i_20] [3]) ? var_7 : var_6))) ? var_5 : ((((arr_19 [i_0 + 1]) ? var_0 : (arr_58 [i_0] [i_20] [i_20] [i_0] [i_0] [i_20] [16]))))));
        }
        for (int i_21 = 0; i_21 < 24;i_21 += 1)
        {
            arr_73 [i_21] [i_21] = var_4;
            var_46 = (arr_24 [i_21] [i_21] [i_21] [22] [i_0 - 1] [22]);
            var_47 = (((((var_10 + (arr_58 [i_0] [3] [i_0] [i_0 + 1] [i_21] [15] [i_21])))) ? (arr_71 [i_0 - 1] [i_21]) : (arr_5 [i_21] [i_21])));
            var_48 = ((((arr_13 [i_0]) ? (arr_31 [i_21] [i_21]) : var_3)));
        }
        var_49 = ((var_3 >= (arr_72 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_22 = 1; i_22 < 23;i_22 += 1) /* same iter space */
    {
        var_50 ^= ((var_1 ? (arr_38 [i_22 + 1] [i_22 - 1] [i_22 - 1] [i_22] [i_22 + 1]) : (arr_38 [i_22] [i_22] [i_22 - 1] [i_22] [i_22 - 1])));
        arr_76 [i_22 + 1] [i_22 + 1] = var_4;
    }
    for (int i_23 = 1; i_23 < 23;i_23 += 1) /* same iter space */
    {

        for (int i_24 = 2; i_24 < 22;i_24 += 1) /* same iter space */
        {
            arr_83 [i_24] = (arr_45 [i_24] [i_24] [1]);
            /* LoopNest 3 */
            for (int i_25 = 1; i_25 < 20;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 24;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 24;i_27 += 1)
                    {
                        {
                            var_51 = (min(((var_2 ? (((min(var_10, (arr_85 [7] [7] [i_25] [7]))))) : var_0)), (((var_9 << (((arr_42 [i_23 - 1] [21] [i_27] [i_26]) - 22829)))))));
                            var_52 = (min(var_52, var_11));
                        }
                    }
                }
            }
            var_53 *= (max(((max((arr_69 [i_23 + 1]), (arr_81 [i_23] [i_23] [i_24 + 1])))), (((~var_11) ? (max(var_12, var_4)) : (arr_18 [i_23 - 1] [i_24 - 1])))));
            var_54 = (min(var_54, (((((var_7 ? (((arr_37 [7] [i_23 - 1] [i_24] [i_24] [i_24]) ? (arr_50 [i_23] [i_23] [i_23]) : (arr_91 [i_23] [i_23] [i_23] [7] [i_23] [i_23]))) : ((max((arr_75 [12]), var_8))))) < var_11)))));
        }
        /* vectorizable */
        for (int i_28 = 2; i_28 < 22;i_28 += 1) /* same iter space */
        {
            arr_95 [i_28] = ((!(arr_75 [i_23 + 1])));
            var_55 = var_9;
        }
        var_56 = (max(var_5, ((var_12 ? (arr_13 [i_23]) : (arr_29 [i_23 - 1])))));
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 24;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 24;i_30 += 1)
            {
                {
                    var_57 = var_3;
                    var_58 = ((((((arr_5 [i_23 - 1] [i_23 - 1]) ? (arr_5 [i_23 - 1] [i_23 - 1]) : var_10))) ? (arr_44 [i_23] [i_23 + 1]) : var_8));
                    arr_101 [i_23] [12] [i_29] [i_30] = (max(((((var_13 ? var_5 : (arr_5 [i_30] [i_23 - 1]))) + (((var_4 ? (arr_78 [i_29]) : var_7))))), var_11));
                    /* LoopNest 2 */
                    for (int i_31 = 0; i_31 < 24;i_31 += 1)
                    {
                        for (int i_32 = 0; i_32 < 24;i_32 += 1)
                        {
                            {
                                arr_107 [i_29] [3] [i_29] [i_29] [i_29] [i_29] [i_29] = (arr_41 [i_23] [i_32] [16] [i_31] [i_23 + 1]);
                                var_59 = (max(var_59, (((!((((arr_99 [i_30]) & (arr_50 [i_23] [i_29] [i_31])))))))));
                            }
                        }
                    }
                    arr_108 [i_23] [i_23] [i_23 - 1] = (max((((!(arr_80 [7] [i_29])))), (max(var_9, (arr_25 [i_23 - 1])))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_33 = 0; i_33 < 12;i_33 += 1)
    {
        var_60 = (arr_29 [i_33]);
        /* LoopNest 2 */
        for (int i_34 = 0; i_34 < 12;i_34 += 1)
        {
            for (int i_35 = 0; i_35 < 12;i_35 += 1)
            {
                {
                    arr_118 [6] [i_35] [i_33] = (((arr_100 [i_33] [i_33] [i_33]) >= (arr_46 [i_35] [i_34] [i_34] [i_33])));
                    var_61 = (((arr_23 [i_33] [i_33]) ? (arr_13 [i_33]) : var_3));
                }
            }
        }
        var_62 = (min(var_62, var_8));
        /* LoopNest 3 */
        for (int i_36 = 0; i_36 < 12;i_36 += 1)
        {
            for (int i_37 = 0; i_37 < 12;i_37 += 1)
            {
                for (int i_38 = 0; i_38 < 12;i_38 += 1)
                {
                    {
                        arr_126 [i_33] [i_36] [i_38] [i_33] [i_37] = (arr_55 [i_33] [i_33]);
                        var_63 *= (((arr_86 [i_33] [i_36] [i_36]) >= (var_6 | var_7)));
                        var_64 *= (arr_71 [i_33] [i_36]);
                        arr_127 [i_33] [i_33] [i_33] [i_37] = var_6;
                    }
                }
            }
        }
    }
    #pragma endscop
}
