/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0 + 1]);
        arr_4 [i_0] = (!(!32745));
        var_11 -= var_0;
        var_12 *= ((var_1 ? ((((max(-334268475, (arr_1 [i_0 - 3]))) != ((32763 ? var_6 : var_4))))) : (!-121)));
    }
    var_13 |= ((!(~var_6)));
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            {
                var_14 = (max(var_14, (((~(((var_7 >= var_5) ? var_8 : var_4)))))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    arr_15 [i_1] = var_4;
                    var_15 = (((!var_4) ? (~var_3) : 127));
                    arr_16 [i_1] [i_1] [i_1 - 2] = ((var_8 ? (arr_8 [i_3]) : (arr_12 [i_1] [i_1] [i_1])));
                    arr_17 [i_3] [16] [i_3] [16] = (((arr_7 [i_1 + 1]) << (((arr_7 [i_1 + 4]) - 14501263993813026940))));
                    arr_18 [i_1] [i_1] [i_1] = ((((var_10 ? var_9 : var_4))) ? (!var_3) : (arr_14 [i_1 + 3]));
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_16 = (min(var_16, ((((((-var_2 & ((((var_7 || (arr_12 [i_1 + 1] [i_1] [i_1 + 3])))))))) ? (max(-18446744073709551612, var_2)) : (!-32745))))));
                    var_17 = ((~((~(26274 != 14744776707432071123)))));
                    arr_23 [i_2] [12] [i_2] = -var_0;
                    arr_24 [i_2] [i_2] [i_1] = (((-334268498 + 2147483647) << (9223372036854775807 - 9223372036854775807)));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 4; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            arr_29 [i_6] [9] [i_4] [i_2] [i_2] [i_6] = ((var_9 - (arr_19 [i_2 - 1] [i_2 - 1] [i_6])));
                            var_18 = var_8;
                        }
                        /* vectorizable */
                        for (int i_7 = 4; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_19 ^= var_5;
                            var_20 = var_0;
                            var_21 = (var_0 == 32748);
                        }
                        arr_33 [i_1] [i_1] [i_1] [i_1 + 1] = var_0;
                        arr_34 [i_5] [i_4] = (arr_28 [i_4] [i_2] [i_4] [i_4] [i_5] [i_5] [i_5]);
                        arr_35 [1] = ((32878 != (min(4294967295, 3269506579))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        arr_39 [i_1] = (334268481 % 1775397561);
                        var_22 = (((((var_8 << (var_10 - 1358282550)))) && (arr_5 [i_8])));
                        var_23 = (max(var_23, (var_1 != var_1)));
                        var_24 = (max(var_24, (((var_3 % (~var_8))))));
                    }
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    arr_43 [i_1] [i_9] = ((var_9 << (((((arr_27 [i_1] [i_2 + 1] [15]) ? var_10 : var_7)) - 1358282514))));
                    var_25 = (max(var_25, (-12 ^ 98)));
                    var_26 = (max(var_4, ((var_9 ? 8 : 3525268925))));
                    arr_44 [i_9] = ((0 <= ((-(arr_19 [i_1] [i_2 - 1] [i_1])))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    arr_47 [15] [15] [i_2] [i_1 + 4] = (arr_5 [i_1]);
                    var_27 = (min(var_27, -var_5));

                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            arr_54 [i_2] [12] [i_11] = ((var_0 % (arr_5 [i_1 + 1])));
                            arr_55 [i_11] [i_11] [i_12] [i_11] [i_10] [i_2] [i_1 - 2] &= (((var_3 ^ var_10) > (((var_5 << (16383 - 16381))))));
                            arr_56 [i_12] [i_11] [2] [i_1] [i_1] = ((!(arr_10 [i_1 - 1])));
                            arr_57 [i_12] [18] = var_6;
                        }
                        arr_58 [5] [i_2] [i_2 + 1] = ((((((arr_26 [i_1] [18] [i_1] [i_11]) % var_1))) | var_2));
                        var_28 = (min(var_28, (!var_0)));
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        arr_61 [i_1] [i_2] [i_13] = var_5;
                        var_29 = ((4294950927 ? (arr_59 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2]) : 1125899906842623));
                    }
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        var_30 += (((arr_5 [i_1 - 2]) >> (var_1 + 19686)));
                        var_31 ^= (arr_6 [i_1 - 2]);
                        var_32 = (min(var_32, (((-1352715749 + (var_0 < var_7))))));

                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            arr_66 [16] [i_15] [i_2 + 1] [i_10] [i_2] [i_2 + 1] [i_1] = 235;
                            arr_67 [i_1] [i_2 - 1] [i_10] [i_1] [i_15] = (arr_19 [i_1 + 3] [i_2 + 1] [i_2 - 1]);
                            var_33 = var_9;
                            var_34 = (!1);
                        }
                        arr_68 [i_1] [i_1] = 32718;
                    }

                    for (int i_16 = 0; i_16 < 20;i_16 += 1) /* same iter space */
                    {
                        var_35 = (min(var_35, 334268475));
                        var_36 = 36334152350910639;
                    }
                    for (int i_17 = 0; i_17 < 20;i_17 += 1) /* same iter space */
                    {
                        arr_75 [i_1 + 1] [i_1] [i_1] [i_1] |= (-334268475 ^ (arr_65 [i_1 - 2] [i_1 + 2] [i_1 + 1] [i_2 - 2] [i_17]));
                        var_37 = var_8;
                    }
                    for (int i_18 = 0; i_18 < 20;i_18 += 1) /* same iter space */
                    {
                        var_38 = (min(var_38, var_3));
                        var_39 *= ((-7 && (arr_32 [i_1 - 2] [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_1 - 1])));
                    }
                    for (int i_19 = 0; i_19 < 20;i_19 += 1) /* same iter space */
                    {
                        arr_81 [13] = ((2040683113 ? 4 : 0));
                        arr_82 [i_1] [i_1 + 3] [4] [i_1 + 2] = (144115188075855871 % var_1);
                        arr_83 [i_1 - 1] [i_2 - 2] [i_10] [i_19] &= ((!(arr_22 [i_2 - 2])));
                        arr_84 [19] = (2139095040 + 7507232248401570640);
                    }
                }
                arr_85 [i_2] [i_2] [i_1] = (max((var_7 % 27675), (!var_3)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 21;i_20 += 1)
    {
        for (int i_21 = 2; i_21 < 20;i_21 += 1)
        {
            {

                /* vectorizable */
                for (int i_22 = 0; i_22 < 21;i_22 += 1)
                {
                    var_40 = (((arr_89 [i_21 - 1] [i_21 - 1]) == var_3));
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 21;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 21;i_24 += 1)
                        {
                            {
                                arr_98 [i_20] [i_21] [i_20] [i_20] [i_23] [i_23] [i_21] = var_4;
                                arr_99 [i_23] [i_20] = -var_10;
                            }
                        }
                    }
                }
                for (int i_25 = 0; i_25 < 21;i_25 += 1)
                {
                    arr_104 [i_20] [10] [i_25] &= (((max(-4016381347608275853, (arr_94 [i_21 - 2] [i_21 - 1] [16] [16] [i_21 - 1] [i_21]))) - var_6));
                    arr_105 [i_20] = (((((var_10 <= (max(4294967281, var_10)))))) % 3157333486);
                }
                var_41 = (min(var_10, (arr_88 [i_20])));
            }
        }
    }
    #pragma endscop
}
