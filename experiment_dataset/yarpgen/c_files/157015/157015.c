/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((((1 || 1) ? var_4 : var_4)));
    var_13 = ((1 ? -10355 : 8973412055047172020));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_14 -= (arr_0 [4]);
        var_15 = -6838;
        arr_3 [i_0] [i_0] = (var_0 * var_10);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (arr_5 [14] [i_1 - 1])));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                {

                    for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_17 |= var_8;
                        var_18 = (max(var_18, ((((arr_12 [i_2 + 4] [i_2 + 3] [4] [2] [i_2] [i_2 + 4]) ? (arr_12 [i_2 + 1] [i_2 + 2] [i_2] [12] [20] [i_2 + 1]) : (arr_12 [i_2 + 2] [i_2 + 1] [i_2] [10] [i_2] [i_2 + 2]))))));
                    }
                    for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, var_7));
                        var_20 = var_0;
                    }
                    for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        arr_18 [i_2] [i_3] [i_2] [i_2] = 3;
                        var_21 = (max(var_21, ((((arr_14 [10] [20] [i_3 + 1] [10]) ? var_8 : (arr_14 [1] [12] [i_3 + 1] [1]))))));
                    }
                    for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_22 = -1;
                            var_23 = (min(var_23, ((((arr_25 [4] [i_8] [0] [i_2] [0] [i_1] [i_1]) ? 4139153582 : var_9)))));
                        }
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_24 = (~var_9);
                            arr_29 [i_9] [i_2] [i_3] [i_2] [i_1] = ((0 ? 1 : 1));
                            var_25 ^= 1;
                            var_26 = (min(var_26, (arr_23 [i_9] [12] [8] [20] [i_2] [i_1] [i_1])));
                            var_27 = ((var_0 ? (((arr_7 [i_2]) ? var_7 : var_11)) : -1238119512));
                        }
                        var_28 = var_7;
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_29 = -var_6;
                                arr_36 [5] [i_10] [i_10] [i_2] [1] [i_2] [i_1] = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        var_30 -= ((min((arr_6 [16]), (arr_26 [i_12] [12] [i_12] [i_12] [12] [i_12]))));
        arr_41 [i_12] = 1;

        /* vectorizable */
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            var_31 &= (!-102);
            var_32 = (max(var_32, (((1 ? (arr_2 [14] [20]) : (arr_19 [18]))))));
            arr_45 [i_12] = (((var_3 | 17837271070200390835) & (arr_4 [i_13])));
            /* LoopNest 3 */
            for (int i_14 = 4; i_14 < 13;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 11;i_16 += 1)
                    {
                        {
                            var_33 ^= var_6;
                            var_34 = (((var_8 ? 1 : var_0)));
                            var_35 |= (arr_12 [16] [i_16] [i_16] [0] [i_16 + 1] [i_16 + 4]);
                            var_36 = (1 || 609473003509160780);
                        }
                    }
                }
            }

            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                var_37 = (max(var_37, (((151 ? (arr_53 [4]) : (arr_53 [10]))))));

                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {

                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        arr_61 [1] [14] [i_12] [i_18] [6] [1] = 58;
                        var_38 = (min(var_38, (4523844827353414262 == -34)));
                        var_39 = (min(var_39, (arr_8 [14] [14] [i_13])));
                    }
                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        var_40 ^= ((var_6 / (arr_54 [i_20] [1] [1] [i_12])));
                        arr_65 [i_20] [2] [12] [i_13] [1] |= 1445474448;
                        arr_66 [i_12] [13] [1] [i_12] [0] [i_12] = (arr_12 [22] [i_13] [0] [i_12] [i_13] [i_13]);
                        var_41 -= ((~((var_11 ? var_8 : (arr_6 [12])))));
                    }
                    for (int i_21 = 0; i_21 < 15;i_21 += 1)
                    {
                        var_42 = (min(var_42, ((((arr_42 [i_18] [0] [i_12]) ? (1 == var_7) : (arr_14 [2] [i_13] [i_13] [i_13]))))));
                        arr_69 [i_12] [i_13] [4] = var_2;
                        var_43 = (!-1238119512);
                        var_44 = 4465619169020212586;
                        var_45 = var_1;
                    }
                    var_46 -= (((arr_57 [8] [i_13] [10] [i_13]) ? (arr_17 [6]) : (arr_17 [20])));
                }
                for (int i_22 = 0; i_22 < 15;i_22 += 1)
                {

                    for (int i_23 = 0; i_23 < 15;i_23 += 1) /* same iter space */
                    {
                        var_47 = ((var_10 > (arr_74 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [9])));
                        var_48 = (min(var_48, var_9));
                        var_49 ^= (arr_43 [i_12] [2]);
                        var_50 = var_8;
                    }
                    for (int i_24 = 0; i_24 < 15;i_24 += 1) /* same iter space */
                    {
                        var_51 ^= (((arr_62 [12] [i_22] [12]) ? 1 : (var_8 & var_4)));
                        var_52 &= var_1;
                        var_53 = (max(var_53, (((!(arr_71 [i_13] [i_13] [i_13] [1] [i_13]))))));
                    }
                    for (int i_25 = 0; i_25 < 15;i_25 += 1) /* same iter space */
                    {
                        var_54 = 1;
                        var_55 += ((60170 & (28532 & -28532)));
                        var_56 -= 17837271070200390835;
                        var_57 = (max(var_57, ((!(arr_52 [i_25] [i_22] [10] [i_13] [10] [14] [i_12])))));
                    }
                    for (int i_26 = 0; i_26 < 15;i_26 += 1) /* same iter space */
                    {
                        var_58 += (arr_31 [i_13] [i_13] [i_13] [i_13] [i_13]);
                        arr_82 [i_12] [i_26] [i_26] [0] = 466947679296341621;
                        var_59 &= var_0;
                        arr_83 [i_12] [10] [3] [i_12] [i_12] [i_12] [i_12] = ((-(arr_57 [2] [i_12] [i_12] [i_12])));
                    }
                    var_60 += (((arr_80 [i_12] [i_12] [9] [0] [i_12]) || (arr_7 [6])));
                }
                for (int i_27 = 0; i_27 < 15;i_27 += 1)
                {
                    var_61 |= ((5366 ? (~9223372036854775807) : (arr_80 [1] [i_13] [i_13] [i_13] [i_13])));
                    arr_87 [i_12] [i_12] [i_12] = 1;
                }
                for (int i_28 = 0; i_28 < 15;i_28 += 1)
                {
                    var_62 = var_9;
                    arr_90 [i_13] [i_13] [i_12] [i_13] [5] [i_13] = var_11;
                }
            }
            for (int i_29 = 0; i_29 < 15;i_29 += 1)
            {
                var_63 = (min(var_63, 32704));
                var_64 = (min(var_64, (arr_44 [i_29] [i_29] [2])));
            }
        }
        /* vectorizable */
        for (int i_30 = 1; i_30 < 14;i_30 += 1) /* same iter space */
        {
            arr_95 [14] [14] &= (arr_49 [8]);
            var_65 ^= (-28530 && -2305843009213693952);
            arr_96 [i_12] = (((arr_68 [i_30 + 1] [i_12] [i_30] [i_30 - 1] [i_30] [i_30]) ? -111 : (arr_48 [i_12] [2] [9] [i_30])));
        }
        /* vectorizable */
        for (int i_31 = 1; i_31 < 14;i_31 += 1) /* same iter space */
        {
            var_66 = (arr_57 [i_31] [i_12] [i_12] [i_12]);
            arr_99 [2] [i_12] [i_12] = var_5;
            var_67 = (1 / var_7);
            var_68 += -110;
        }
        for (int i_32 = 1; i_32 < 14;i_32 += 1) /* same iter space */
        {
            arr_104 [i_12] [i_12] = (arr_38 [i_12] [i_12]);
            var_69 = (~1504477193603068965);
        }
        var_70 = -24971;
    }
    var_71 = ((1238119512 ? var_2 : 1));
    #pragma endscop
}
