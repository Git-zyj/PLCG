/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((max(((var_3 ? var_13 : var_3)), ((30 ? -30 : 1)))), var_16));
    var_18 = (var_2 | var_5);

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 11;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        var_19 = ((var_15 ? var_0 : var_1));
                        var_20 = (max(var_20, (((!(((var_11 / (arr_2 [i_0 + 1])))))))));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_21 = (min(var_21, (!var_12)));
                        var_22 += var_2;
                        var_23 = (arr_0 [i_0]);
                        var_24 = (max(var_24, (var_14 & var_2)));
                        arr_16 [i_0] [i_0] [i_2 - 1] [4] = arr_3 [4] [i_1] [i_1];
                    }
                    var_25 = (var_0 && var_3);

                    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [3] [i_2] [i_0 + 1] [i_0 + 1] [i_0] = (((((var_5 ? (arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_0 [i_0])))) ? (((-(arr_17 [i_0])))) : (arr_9 [i_6])));
                        var_26 = ((~((var_9 ? var_7 : (arr_2 [i_0])))));
                        var_27 = (max(var_27, ((((var_6 ? (arr_14 [i_1] [i_1] [9] [i_1]) : var_10))))));
                        var_28 = (((arr_17 [i_0 - 1]) ? (arr_17 [i_0 - 1]) : (arr_17 [i_0 + 1])));
                        var_29 = var_7;
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                    {
                        var_30 = (((arr_5 [i_7]) ? var_13 : var_11));
                        arr_23 [i_1] [i_0] [i_1] [i_0] [i_0] = (arr_5 [i_3]);
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_31 ^= ((((var_13 ? var_1 : var_10)) & ((var_16 ? var_6 : var_6))));
                        arr_27 [7] [i_3] [i_0] [i_0 + 1] [i_0 + 1] = var_7;
                        var_32 = ((var_11 ? var_16 : var_6));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_31 [i_0] [i_0] [i_0] = (arr_11 [i_0 - 1] [i_0] [i_3 + 1]);
                        var_33 ^= ((~((var_4 & (arr_2 [i_2])))));
                    }
                    arr_32 [i_0 - 1] [i_0 - 1] [i_2 - 2] [i_0] = ((!(((var_16 ? var_1 : var_10)))));
                }
                for (int i_10 = 2; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    var_34 = var_5;
                    var_35 *= (~var_11);
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_36 = (((arr_20 [11] [i_0 - 1] [i_0]) ? (((var_16 ? var_9 : (arr_4 [i_0] [i_2 + 1] [i_12])))) : (((arr_29 [i_0]) ? (arr_7 [i_0] [i_1] [i_0]) : var_0))));
                            var_37 = (((arr_15 [i_0] [i_0 - 1] [i_0] [i_0]) ? var_6 : (arr_15 [i_0 + 1] [i_0 - 1] [i_2] [i_0])));
                        }
                    }
                }
                arr_40 [i_2 - 3] [i_0] [i_2 - 3] [i_2] = var_16;

                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    var_38 &= (((((2120413429 ? 1 : var_8))) ? 62 : var_10));

                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_39 = var_7;
                        var_40 = (((arr_21 [i_0] [i_1] [i_1] [11] [11] [11]) * var_6));
                        arr_48 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = ((!(arr_4 [i_0] [i_0 - 1] [i_0])));
                    }
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        var_41 *= var_14;
                        var_42 = ((((((var_7 ? var_10 : var_0)) + 9223372036854775807)) >> (arr_10 [i_0 + 1] [i_2 + 1])));
                        var_43 = var_12;
                    }
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        var_44 = (+-254);
                        var_45 = var_2;
                        arr_53 [0] [i_1] [i_1] [i_1] [i_1] &= (((arr_34 [i_13] [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0]) || (arr_37 [6] [8] [i_2] [8] [i_0 + 1])));
                    }
                }
            }
            for (int i_17 = 1; i_17 < 11;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 9;i_19 += 1)
                    {
                        {
                            arr_61 [i_18] [i_18 - 1] [i_18] [i_18 - 1] [i_0] [i_18] [i_18] = ((((((arr_10 [i_1] [i_17 + 1]) / (arr_3 [i_0] [i_18 - 1] [i_19])))) ? (~var_16) : (arr_41 [i_0 - 1] [i_17 + 1] [i_17] [i_18])));
                            var_46 = ((((var_5 ? (arr_46 [i_19 - 1] [i_18] [i_1]) : var_12))) && var_13);
                            arr_62 [5] [i_1] [i_1] [i_1] [i_0] [i_19] [i_19 - 1] = var_3;
                        }
                    }
                }
                var_47 = ((!(arr_44 [0] [7] [i_0] [i_0 + 1])));
            }
            var_48 = var_5;
            var_49 = (arr_45 [i_1] [i_0] [i_0] [i_0]);
            var_50 ^= (arr_29 [4]);
            var_51 = ((!(-21277 | 518725577)));
        }
        for (int i_20 = 0; i_20 < 12;i_20 += 1) /* same iter space */
        {
            arr_65 [i_0] = ((23 ? 1324105517 : var_15));
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 12;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 11;i_22 += 1)
                {
                    {
                        arr_72 [i_21] [i_21] [i_21] [i_0] = (((var_3 ? var_12 : (((arr_33 [i_0] [0] [1] [i_0]) ? var_0 : var_5)))));
                        var_52 = (arr_22 [i_0] [i_21] [i_21]);

                        /* vectorizable */
                        for (int i_23 = 0; i_23 < 12;i_23 += 1) /* same iter space */
                        {
                            var_53 = var_1;
                            arr_75 [i_0] [i_0] [i_21] [i_21] [i_21] [i_21] = (((arr_4 [i_0] [i_20] [i_0]) ? ((var_8 ? var_8 : (arr_59 [i_0] [i_0] [5] [i_0] [5] [i_0 + 1]))) : (var_6 + var_0)));
                            var_54 = var_1;
                        }
                        for (int i_24 = 0; i_24 < 12;i_24 += 1) /* same iter space */
                        {
                            arr_79 [i_20] [i_0] = var_9;
                            arr_80 [i_0] [i_20] [i_21] [i_21] [4] [i_0] = (arr_57 [i_0 - 1] [i_0] [2] [8] [i_24]);
                        }
                        /* vectorizable */
                        for (int i_25 = 0; i_25 < 12;i_25 += 1) /* same iter space */
                        {
                            var_55 = (min(var_55, (arr_9 [i_22 + 1])));
                            arr_83 [i_0] [i_0] [i_0] [i_0] = (~((var_12 ? 1 : 1)));
                            arr_84 [i_0] [i_0] [i_21] [i_22 - 1] [i_25] [i_22 - 1] = var_11;
                        }
                        for (int i_26 = 0; i_26 < 12;i_26 += 1) /* same iter space */
                        {
                            var_56 = (((((((var_9 ? var_8 : var_12)) + (((min((arr_9 [i_0]), var_1))))))) ? (((!(var_5 && var_7)))) : var_3));
                            arr_89 [0] [0] [i_0] [i_0] [i_0] = (arr_1 [i_0]);
                            arr_90 [i_26] [i_0] [i_0 + 1] [i_0] [i_0 + 1] = ((((!(arr_5 [i_22]))) ? -var_4 : ((((((max(var_7, var_4))) && (((var_7 ? (arr_17 [i_21]) : (arr_14 [i_0] [i_26] [1] [i_22]))))))))));
                        }
                        arr_91 [i_0] [i_0] [i_0] = var_0;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_27 = 0; i_27 < 12;i_27 += 1)
            {
                for (int i_28 = 3; i_28 < 11;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 12;i_29 += 1)
                    {
                        {
                            arr_99 [i_0] [i_20] = ((-var_13 ? (((arr_74 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1]) ? (arr_74 [i_0 + 1] [i_0 - 1] [i_0 + 1] [5] [5] [i_0] [i_0 - 1]) : (arr_74 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]))) : var_11));
                            var_57 = ((-((var_11 | (arr_25 [i_0 + 1])))));
                            var_58 = (min(6, (((arr_17 [i_0 + 1]) * (arr_12 [i_0] [i_0 + 1] [i_28 - 2] [i_27] [i_0 + 1] [i_0 + 1] [i_0])))));
                        }
                    }
                }
            }
        }
        arr_100 [i_0] = min(var_2, (arr_87 [i_0] [i_0] [i_0]));
    }
    var_59 = (min((~var_15), -var_5));
    #pragma endscop
}
