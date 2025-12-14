/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_3, var_2));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_19 ^= ((!((min(((var_0 ? var_0 : (arr_2 [i_0]))), (var_6 + var_15))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 ^= (min(((max((arr_7 [i_2] [i_2] [i_0]), var_14))), (min(var_17, (((var_4 ? 1 : (arr_6 [i_2] [i_1]))))))));
                    arr_8 [i_0 + 1] [i_0] [i_2] [16] = (arr_4 [i_0]);
                    var_21 = ((!((max(var_5, (arr_2 [i_0 + 4]))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_22 = (max(var_22, var_4));
                        var_23 *= (arr_0 [i_2]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_24 = ((var_3 ? (arr_9 [i_0] [i_1] [i_0] [i_4] [i_4] [i_4]) : var_17));
                        var_25 = var_11;
                    }
                }
            }
        }
        var_26 = (max(var_26, ((((((((arr_13 [i_0] [i_0] [20] [i_0] [i_0] [i_0]) ? var_13 : (arr_13 [i_0] [i_0 + 1] [0] [i_0] [i_0] [i_0])))) | (arr_1 [16]))) != ((-(max(var_9, var_16))))))));
        var_27 = (min(var_27, var_3));
        arr_14 [i_0] = (max((arr_12 [i_0] [i_0] [i_0] [i_0 + 3] [i_0 + 3] [i_0]), var_3));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        var_28 &= var_11;
        arr_17 [i_5] = (arr_3 [i_5] [i_5] [i_5]);
        var_29 ^= ((!(arr_6 [i_5] [i_5])));

        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    var_30 = (var_14 <= var_0);
                    arr_26 [i_5] [i_5] [i_7] [i_8] = var_13;
                    var_31 = ((((arr_10 [13] [i_7] [19] [i_6] [18] [i_5]) | var_15)));
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    var_32 += ((var_6 << (30266 - 30257)));
                    var_33 = var_0;
                    arr_29 [i_5] [i_5] [i_6 + 2] [i_7] [i_7] [i_5] = var_14;
                }

                for (int i_10 = 1; i_10 < 21;i_10 += 1) /* same iter space */
                {
                    var_34 = (arr_24 [i_10 + 3] [i_7] [i_7] [12] [i_5]);
                    var_35 = var_5;
                    arr_32 [i_5] [i_6 - 1] [i_6] [i_7] [i_10] = var_2;
                }
                for (int i_11 = 1; i_11 < 21;i_11 += 1) /* same iter space */
                {
                    var_36 = -4294967293;
                    var_37 = (var_17 != -83);
                }
                for (int i_12 = 1; i_12 < 21;i_12 += 1) /* same iter space */
                {
                    var_38 = var_11;

                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        var_39 = (min(var_39, var_7));
                        var_40 = (((((var_6 ? 32764 : var_16))) ? (arr_24 [i_5] [i_6] [i_7] [1] [i_7]) : (arr_19 [i_5] [i_6 + 1] [i_7])));
                        arr_42 [i_5] [i_13] [3] [i_7] [i_6 - 3] [i_5] = (arr_16 [i_5]);
                    }
                    for (int i_14 = 1; i_14 < 22;i_14 += 1)
                    {
                        var_41 = ((arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) / ((var_2 ? (arr_27 [i_5] [8] [i_6] [i_7] [17] [i_14]) : var_0)));
                        arr_46 [i_5] [i_6] [i_5] [4] [i_14] = (!var_14);
                        var_42 *= (arr_24 [i_5] [i_6 - 1] [i_7] [i_12 + 1] [i_14 + 1]);
                    }
                    arr_47 [i_5] [i_5] [i_5] [i_5] [i_7] [3] = ((!(((var_4 ? var_17 : (arr_4 [i_5]))))));
                    var_43 ^= (arr_20 [1] [19]);
                }
                for (int i_15 = 1; i_15 < 21;i_15 += 1) /* same iter space */
                {
                    arr_50 [i_5] = ((-(arr_24 [i_5] [i_5] [i_5] [i_7] [i_15])));
                    var_44 = (!var_10);
                    var_45 = (!var_15);
                }
            }
            arr_51 [i_5] [i_5] = (arr_49 [i_5] [i_5] [i_5] [i_5] [i_6] [i_6]);

            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    arr_56 [i_5] [i_16] [1] [i_5] [i_5] = ((23929 >> (54 - 28)));
                    var_46 = (arr_43 [i_17] [i_5] [i_5] [i_5]);
                    arr_57 [i_6] [i_5] = (((arr_16 [i_5]) ? (arr_16 [i_5]) : (arr_16 [i_5])));
                }
                var_47 = var_10;
                var_48 ^= (((arr_9 [i_5] [i_5] [i_5] [i_5] [i_6 - 2] [i_6 - 2]) ? var_2 : var_14));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 24;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 23;i_19 += 1)
                    {
                        {
                            var_49 = (arr_7 [i_6 - 1] [i_5] [11]);
                            var_50 = (arr_59 [i_5]);
                            var_51 = (max(var_51, var_9));
                            arr_62 [i_19] [i_19] [2] [i_18] [i_5] [i_5] = ((!(arr_33 [i_19 - 1] [i_5] [i_5] [15])));
                        }
                    }
                }
                var_52 = 35270;
            }
        }
        for (int i_20 = 2; i_20 < 23;i_20 += 1)
        {
            var_53 = (-83 % var_9);
            arr_66 [i_5] [10] = ((((((arr_58 [i_20 - 1] [i_5] [2]) / var_1))) ? (!19391) : (arr_7 [i_5] [i_5] [i_5])));
            var_54 = (((arr_2 [i_5]) ? var_13 : var_12));
            var_55 = (arr_35 [i_20] [i_20] [i_20 + 1] [7] [i_20 + 1]);
        }
    }
    for (int i_21 = 0; i_21 < 24;i_21 += 1) /* same iter space */
    {
        var_56 = (min(41606, (arr_59 [i_21])));
        var_57 |= var_0;
        var_58 = (((arr_1 [i_21]) ? var_13 : (min(var_2, (((var_1 | (arr_53 [i_21] [i_21] [i_21] [i_21]))))))));
    }
    /* LoopNest 3 */
    for (int i_22 = 0; i_22 < 12;i_22 += 1)
    {
        for (int i_23 = 3; i_23 < 10;i_23 += 1)
        {
            for (int i_24 = 1; i_24 < 10;i_24 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_25 = 0; i_25 < 12;i_25 += 1)
                    {
                        var_59 = (max(var_59, ((((arr_28 [i_24] [i_25]) | (arr_7 [i_25] [i_25] [i_22]))))));

                        for (int i_26 = 0; i_26 < 12;i_26 += 1)
                        {
                            var_60 = var_7;
                            var_61 = var_8;
                            var_62 = -32762;
                            var_63 *= (((10 | (arr_31 [i_25] [i_25] [i_24] [i_25]))));
                            arr_84 [i_23] [i_22] [i_25] [i_26] = var_0;
                        }
                        arr_85 [i_22] [i_22] [9] [i_24 + 1] [i_25] = arr_5 [i_25] [15] [i_22];
                    }
                    /* vectorizable */
                    for (int i_27 = 1; i_27 < 9;i_27 += 1)
                    {
                        var_64 = ((!(((var_16 ? var_8 : var_7)))));
                        var_65 *= var_3;
                        var_66 = 1;
                        var_67 = var_13;
                        var_68 = ((~((var_14 ? var_2 : var_12))));
                    }
                    for (int i_28 = 1; i_28 < 11;i_28 += 1)
                    {
                        arr_91 [i_22] = (min(var_0, (arr_12 [i_22] [i_28] [i_28 + 1] [i_24 + 1] [i_23 - 3] [i_22])));
                        var_69 = (arr_33 [8] [i_22] [19] [i_28]);
                        var_70 = (min((arr_4 [i_22]), var_8));
                    }
                    for (int i_29 = 0; i_29 < 12;i_29 += 1)
                    {

                        /* vectorizable */
                        for (int i_30 = 2; i_30 < 11;i_30 += 1)
                        {
                            var_71 *= (arr_27 [i_24] [i_23 - 3] [i_24] [i_29] [i_30] [i_24]);
                            var_72 |= var_4;
                        }
                        var_73 = (arr_55 [i_22] [i_29] [i_22] [21]);
                        arr_96 [i_22] [i_22] [i_29] = (max((((arr_25 [i_22] [9] [i_24 - 1] [11] [i_29] [9]) >> (var_3 - 11990466156884175899))), ((-((max(var_6, var_6)))))));

                        for (int i_31 = 0; i_31 < 12;i_31 += 1)
                        {
                            var_74 *= ((var_13 || (arr_73 [i_22] [i_29] [i_22])));
                            var_75 = ((((arr_72 [i_23] [i_24] [i_24]) < 0)));
                            arr_101 [i_22] = (max(((((!(arr_39 [i_22] [i_29] [i_22] [i_24 + 1] [i_22] [i_22] [i_22]))) ? var_17 : -var_6)), (((((((arr_45 [i_22] [i_22] [i_22] [i_22] [i_22]) ? (arr_49 [i_22] [17] [i_22] [6] [i_29] [11]) : (arr_53 [i_22] [i_22] [1] [i_29])))) || ((((arr_6 [i_23] [i_23]) ? var_17 : var_7))))))));
                            arr_102 [i_22] [i_23 + 1] [i_23 + 1] [i_22] [i_29] [i_29] [i_22] = var_15;
                        }
                        /* vectorizable */
                        for (int i_32 = 0; i_32 < 12;i_32 += 1)
                        {
                            var_76 = ((var_10 ? var_11 : (((var_11 ? var_7 : var_16)))));
                            var_77 = arr_88 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22];
                        }
                        for (int i_33 = 0; i_33 < 12;i_33 += 1) /* same iter space */
                        {
                            var_78 = (max((min((arr_39 [i_22] [i_22] [i_22] [i_24 - 1] [9] [i_29] [i_33]), (var_9 % var_16))), ((((var_5 && var_12) != 1)))));
                            var_79 = (arr_49 [i_22] [i_23 + 2] [i_22] [i_24] [i_29] [i_33]);
                            var_80 = 3544121065346630400;
                        }
                        for (int i_34 = 0; i_34 < 12;i_34 += 1) /* same iter space */
                        {
                            var_81 = 15;
                            arr_112 [i_34] [i_22] [i_24 + 1] [i_22] [i_22] = (min((arr_48 [i_22] [i_22]), -11733));
                            var_82 *= var_15;
                            var_83 = (min((!var_12), (((arr_105 [i_34] [i_22] [i_24 + 2] [i_22] [i_22]) ? -7052 : (arr_70 [i_22])))));
                        }
                    }
                    var_84 ^= ((!((!((min(var_4, var_8)))))));
                    var_85 = (max(var_85, (arr_104 [i_23])));
                    var_86 = ((arr_36 [i_23 - 2] [i_23 - 2] [i_24 - 1]) ? (min(var_2, var_3)) : (var_4 & 2574010636));
                    arr_113 [6] [i_23] [6] &= (((!var_7) <= ((var_15 / ((var_13 ? var_0 : var_12))))));
                }
            }
        }
    }
    #pragma endscop
}
