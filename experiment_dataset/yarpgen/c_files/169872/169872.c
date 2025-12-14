/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_14 = (min(var_14, (arr_3 [i_0])));
                        var_15 = ((!(arr_10 [i_2] [i_2] [i_2] [i_1] [i_0] [i_2])));
                        var_16 = var_4;

                        for (int i_4 = 4; i_4 < 10;i_4 += 1) /* same iter space */
                        {
                            var_17 |= ((arr_2 [i_4 - 2] [i_1]) - (arr_2 [i_4 - 4] [i_1]));
                            arr_15 [i_0] [i_4] [i_0] [i_0] [i_0] = var_4;
                        }
                        for (int i_5 = 4; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_18 = (min(var_18, (arr_18 [i_0] [i_0] [i_0] [i_0])));
                            var_19 = ((~(arr_17 [i_3] [i_5 - 2] [i_2] [i_3] [i_3])));
                            var_20 = 1984467898;
                            var_21 = (min(var_21, (((!(-119 % -491015243))))));
                        }
                    }
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        var_22 = (-(((!(((184 ? -8477439844025284219 : -491015243)))))));
                        var_23 += -6992324245215636459;
                        var_24 = (arr_21 [i_0] [i_1] [i_1]);
                        var_25 = (((((~((20407 ? -23 : (arr_8 [i_0] [i_1] [i_1])))))) ? (((((!(arr_4 [i_1])))))) : ((665779879 ? 3629187416 : -2147483642))));
                        var_26 -= (max(((((((arr_2 [i_0] [i_0]) != (arr_3 [i_6])))) + (!-30))), ((+(((arr_2 [i_1] [i_2]) ? var_12 : var_4))))));
                    }
                    var_27 = ((var_4 ? (min(((max(var_13, (arr_7 [i_0] [i_0] [i_0] [i_2])))), (3936475425465553646 - 11246492838093325417))) : (arr_8 [i_0] [i_1] [i_2])));

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_28 = (max(var_28, (((-(arr_17 [i_0] [i_0] [i_0] [i_2] [i_7]))))));
                        var_29 = (arr_14 [i_0] [i_1]);
                    }
                }
            }
        }
        var_30 = ((+(((arr_8 [i_0] [i_0] [i_0]) / (arr_2 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 10;i_8 += 1)
    {
        var_31 = (max(var_31, (arr_24 [i_8])));
        var_32 = (((arr_26 [i_8 - 4]) ? (arr_26 [i_8 - 4]) : (arr_26 [i_8 - 1])));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        var_33 = (arr_28 [i_8] [i_10] [i_11]);
                        var_34 = (!-14310);
                    }
                }
            }
        }
        var_35 &= ((-(arr_29 [i_8])));
        var_36 |= (arr_28 [i_8] [i_8] [i_8]);
    }
    var_37 = (491015243 % var_9);
    var_38 = ((-((~(var_9 != var_6)))));

    /* vectorizable */
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        var_39 = (((arr_35 [i_12]) << (((arr_34 [i_12] [i_12]) - 14312225044682058778))));
        var_40 = (arr_34 [i_12] [i_12]);
    }
    for (int i_13 = 1; i_13 < 11;i_13 += 1)
    {
        var_41 -= ((-((((max((arr_27 [i_13] [i_13] [i_13]), var_6))) ? (((var_2 ? (arr_33 [i_13]) : var_13))) : ((var_5 ^ (arr_25 [i_13])))))));
        var_42 = (max(((-(arr_34 [i_13] [i_13]))), (arr_38 [i_13])));
        var_43 = (!10);

        /* vectorizable */
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            var_44 = (arr_33 [i_13]);

            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {

                for (int i_16 = 4; i_16 < 12;i_16 += 1)
                {
                    var_45 = (-9223372036854775807 - 1);
                    var_46 = (arr_35 [i_14]);
                }
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    var_47 -= ((18446744073709551615 + (arr_37 [i_13 - 1])));

                    for (int i_18 = 3; i_18 < 10;i_18 += 1) /* same iter space */
                    {
                        var_48 = (((arr_45 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18 + 2]) > var_11));
                        var_49 = (max(var_49, (((((var_8 % (arr_31 [i_13] [i_14] [i_15] [i_13]))) - (arr_32 [i_13]))))));
                    }
                    for (int i_19 = 3; i_19 < 10;i_19 += 1) /* same iter space */
                    {
                        var_50 = (min(var_50, (((!(arr_40 [i_13 - 1]))))));
                        var_51 -= var_9;
                        var_52 = (((arr_55 [i_19] [i_13] [i_15] [i_17] [i_19]) ? (arr_42 [i_13 + 2] [i_14] [i_13] [i_17]) : (arr_55 [i_13] [i_13] [i_13] [i_17] [i_19])));
                    }
                    for (int i_20 = 1; i_20 < 10;i_20 += 1) /* same iter space */
                    {
                        var_53 = (((arr_47 [i_13 + 2]) ? ((var_9 ? (arr_40 [i_14]) : var_7)) : (arr_25 [i_20 - 1])));
                        var_54 = ((((arr_37 [i_13]) > (arr_54 [i_13] [i_13] [i_13] [i_17] [i_13]))) ? (arr_31 [i_13] [i_14] [i_15] [i_17]) : (arr_51 [i_13] [i_13] [i_15] [i_20 + 3] [i_13] [i_13] [i_17]));
                    }
                    for (int i_21 = 1; i_21 < 10;i_21 += 1) /* same iter space */
                    {
                        var_55 = arr_43 [i_13];
                        var_56 = (((((arr_53 [i_13] [i_13] [i_14] [i_15] [i_17] [i_21]) ? 452199098 : (arr_59 [i_15] [i_17]))) != (((var_9 ? (arr_55 [i_14] [i_13] [i_15] [i_13] [i_21]) : var_3)))));
                        var_57 -= 0;
                        var_58 = ((var_13 ? var_8 : (arr_40 [i_13])));
                    }
                    arr_62 [i_17] [i_13] [i_15] = (-(((!(arr_35 [i_15])))));
                }
                var_59 = (arr_31 [i_13] [i_13 - 1] [i_14] [i_14]);
            }
        }
        /* LoopNest 3 */
        for (int i_22 = 2; i_22 < 12;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 13;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 13;i_24 += 1)
                {
                    {

                        for (int i_25 = 0; i_25 < 13;i_25 += 1) /* same iter space */
                        {
                            var_60 |= 1768706606;
                            arr_72 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((((1500070131 ? (arr_49 [i_13] [i_13] [i_13] [i_13]) : var_9)) < 32767));
                            var_61 = ((52539 ? (arr_48 [i_13] [i_13] [i_13] [i_13] [i_13 - 1]) : ((7771 ? (((229 ? 95 : 108))) : (1 ^ 452199098)))));
                        }
                        for (int i_26 = 0; i_26 < 13;i_26 += 1) /* same iter space */
                        {
                            var_62 = ((-((-(max(5189875979842556141, (arr_65 [i_26] [i_26] [i_13])))))));
                            var_63 = (arr_59 [i_13] [i_22]);
                        }
                        var_64 -= 18446744073709551615;
                    }
                }
            }
        }
    }

    for (int i_27 = 2; i_27 < 13;i_27 += 1)
    {
        var_65 = (min(var_65, ((min((((((~(arr_35 [i_27])))) - (~2305843009213693951))), (((96 ? 1644097400 : 96))))))));

        for (int i_28 = 0; i_28 < 16;i_28 += 1)
        {
            var_66 |= (max((arr_35 [i_27 + 3]), ((~(arr_35 [i_27 + 1])))));
            var_67 = (min(var_3, var_10));
        }
        /* LoopNest 2 */
        for (int i_29 = 1; i_29 < 14;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 16;i_30 += 1)
            {
                {
                    var_68 -= ((-((((var_4 / var_9) < (70 & 16415))))));
                    /* LoopNest 2 */
                    for (int i_31 = 0; i_31 < 16;i_31 += 1)
                    {
                        for (int i_32 = 0; i_32 < 16;i_32 += 1)
                        {
                            {
                                var_69 = ((+(((arr_84 [i_27] [i_30] [i_31] [i_31]) - (arr_77 [i_29 + 1])))));
                                arr_91 [i_31] [i_29] [i_30] [i_29] [i_29] = 2047;
                                var_70 = (max(var_70, (arr_82 [i_27])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
