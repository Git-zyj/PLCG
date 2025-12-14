/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_2] = max((var_4 - var_5), (((arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1]) >= (arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                    arr_8 [i_0] [i_0] [i_0] = (((arr_6 [i_0] [i_0] [i_0]) ^ (arr_6 [i_1 - 1] [i_0] [i_0])));
                }
            }
        }
        var_12 *= (((arr_0 [i_0]) / (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_13 *= 1;
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_14 = 0;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_15 *= ((arr_10 [i_5]) > 1);
                            arr_20 [i_4] [i_4] [i_4] [i_3] = ((1 ? 1 : 1));
                        }
                    }
                }
            }
            arr_21 [1] [i_4] = (min((!1), 1));
            arr_22 [i_3] [i_4] = 1;
            var_16 *= (~var_6);
        }
        arr_23 [i_3 + 1] [1] = 1;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] = var_6;
        var_17 = (1 != 1);
    }

    /* vectorizable */
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_18 -= ((var_11 << ((((arr_31 [1] [1] [i_11]) < var_4)))));
                var_19 = ((arr_33 [i_10]) || var_4);
                var_20 = var_2;
            }
            var_21 = (max(var_21, var_8));
            var_22 = (min(var_22, var_11));
            var_23 = arr_29 [i_9 - 1] [i_9 - 1];
            arr_35 [i_9] [i_9] = ((-(arr_34 [1] [i_9 - 1] [i_9 - 1])));
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            arr_38 [i_9] = (!(arr_36 [i_9] [i_12]));
            var_24 = (max(var_24, (var_5 * -var_11)));
            var_25 = var_5;
            var_26 *= (var_0 == (((arr_30 [i_9 - 1]) ? 1 : (arr_33 [1]))));
        }
        for (int i_13 = 0; i_13 < 0;i_13 += 1)
        {
            var_27 = (min(var_27, ((!(arr_41 [i_13 + 1] [i_13 + 1] [i_9 - 1])))));
            var_28 = ((1 ? (((arr_33 [i_13]) & var_10)) : ((var_7 * (arr_32 [i_9 - 1])))));
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        arr_47 [i_9] [i_13 + 1] [i_14 - 1] [i_9] [i_15] = (((arr_45 [i_15] [i_15] [i_14] [i_13 + 1] [i_9 - 1]) > var_4));
                        var_29 -= ((var_2 << (arr_42 [i_9 - 1] [1] [i_15])));
                    }
                }
            }
        }
        var_30 = (min(var_30, (((((1 * (arr_29 [i_9 - 1] [i_9]))) * (arr_32 [i_9 - 1]))))));
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        arr_51 [i_16] [i_16] = arr_43 [1] [i_16] [i_16];
        var_31 = ((arr_42 [i_16] [i_16] [i_16]) >= (((arr_42 [i_16] [i_16] [i_16]) ? var_8 : (arr_42 [i_16] [i_16] [i_16]))));

        for (int i_17 = 0; i_17 < 0;i_17 += 1)
        {
            arr_55 [i_16] [i_17 + 1] = (max(((-(arr_29 [i_17 + 1] [i_17 + 1]))), (arr_48 [i_17 + 1])));
            var_32 *= arr_39 [i_16];
            var_33 = ((-(arr_45 [i_16] [i_17] [i_16] [i_17 + 1] [i_16])));
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    {
                        var_34 &= (((arr_29 [i_16] [i_17 + 1]) >> 1));
                        var_35 = arr_44 [i_16] [i_17 + 1] [i_16];
                    }
                }
            }
            var_36 = (max(var_36, ((min((arr_46 [1] [i_17 + 1] [i_17] [i_17 + 1]), (var_5 << var_0))))));
        }
        for (int i_20 = 0; i_20 < 0;i_20 += 1)
        {
            arr_63 [i_16] [i_16] = (max(((1 >> ((1 ? 1 : 1)))), 1));
            var_37 *= 0;
        }
    }
    for (int i_21 = 1; i_21 < 1;i_21 += 1)
    {
        var_38 = (min(var_38, (arr_46 [1] [i_21 - 1] [i_21 - 1] [i_21 - 1])));

        for (int i_22 = 1; i_22 < 1;i_22 += 1)
        {
            var_39 = (max(var_39, (((var_1 ? (((arr_45 [i_22 - 1] [i_21 - 1] [i_22 - 1] [i_22 - 1] [i_21 - 1]) ? (arr_34 [i_22 - 1] [i_22 - 1] [i_22]) : (arr_59 [1] [i_22] [i_21] [i_21]))) : ((-var_10 * (arr_43 [i_21 - 1] [i_22] [1]))))))));
            var_40 &= arr_31 [1] [1] [1];
            var_41 = (((1 * 1) * (((min(1, 0))))));
        }
        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {

            for (int i_24 = 0; i_24 < 0;i_24 += 1)
            {
                var_42 *= (max(((((((arr_29 [i_21] [i_23]) * var_4))) ? (arr_42 [i_23] [1] [i_23]) : ((min((arr_61 [i_23] [i_23]), (arr_46 [1] [i_23] [i_23] [1])))))), (min(((1 ? var_9 : var_1)), (arr_37 [i_21] [1])))));
                arr_72 [i_21] [i_23] [i_24 + 1] [i_23] = arr_43 [1] [i_23] [1];
            }
            for (int i_25 = 0; i_25 < 1;i_25 += 1)
            {
                arr_76 [i_23] = var_8;
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 1;i_27 += 1)
                    {
                        {
                            var_43 = (min(var_43, (arr_56 [i_27] [1] [1] [i_23])));
                            var_44 *= (var_10 * var_3);
                        }
                    }
                }
                var_45 = ((1 ? 1 : 1));
            }
            /* LoopNest 2 */
            for (int i_28 = 0; i_28 < 1;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 1;i_29 += 1)
                {
                    {
                        arr_88 [i_29] [i_28] [i_23] [i_21 - 1] = var_2;
                        var_46 = max(var_0, (((var_6 ? 1 : 0))));
                        var_47 = ((1 ? (!var_5) : (((arr_84 [i_21 - 1]) / (arr_50 [i_21 - 1])))));

                        /* vectorizable */
                        for (int i_30 = 0; i_30 < 1;i_30 += 1)
                        {
                            arr_91 [i_21 - 1] [i_21 - 1] [i_21] [i_28] [1] [i_29] = ((1 ? (arr_49 [i_21 - 1]) : 1));
                            arr_92 [i_23] = var_10;
                            var_48 = var_5;
                            arr_93 [i_30] [i_21 - 1] [i_28] [i_21 - 1] [i_23] [i_21 - 1] = (((~var_1) ? (~var_4) : (arr_71 [i_21] [i_23] [i_28] [i_23])));
                            var_49 = (max(var_49, var_6));
                        }
                        /* vectorizable */
                        for (int i_31 = 0; i_31 < 1;i_31 += 1)
                        {
                            var_50 = (1 % var_5);
                            var_51 = arr_53 [i_21 - 1];
                            var_52 = (-1 >= (arr_85 [i_21] [i_21 - 1] [i_23]));
                            var_53 *= 1;
                            var_54 *= (((!1) ? ((-(arr_59 [i_21] [1] [i_29] [i_31]))) : var_4));
                        }
                    }
                }
            }
        }
        for (int i_32 = 0; i_32 < 1;i_32 += 1)
        {
            /* LoopNest 2 */
            for (int i_33 = 0; i_33 < 1;i_33 += 1)
            {
                for (int i_34 = 1; i_34 < 1;i_34 += 1)
                {
                    {
                        var_55 = ((((~(0 / 1))) * ((min(var_2, (min((arr_84 [i_34 - 1]), 1)))))));
                        arr_104 [i_34 - 1] [i_34] [i_34] [i_21 - 1] = 1;
                    }
                }
            }
            var_56 = (max((arr_64 [i_32] [i_21 - 1]), ((var_1 ? 1 : (arr_64 [i_32] [i_21])))));
        }
        var_57 = 1;
        var_58 = (min(var_58, ((((arr_79 [1] [1] [i_21] [i_21] [i_21 - 1]) * var_11)))));
    }
    var_59 = (((max(var_5, var_8))) >= (((((var_9 ? var_9 : 1))) ? 1 : var_9)));
    var_60 = ((((((var_5 * var_11) - (var_10 * var_9)))) ? var_7 : (((((var_10 ? var_11 : var_0))) ? 1 : var_2))));
    #pragma endscop
}
