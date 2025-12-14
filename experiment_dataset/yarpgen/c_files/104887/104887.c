/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((~(~var_2)))) > (max(-12124, var_4))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0 + 1] [2] |= 1;

                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {
                    var_12 = (max(var_12, (((-(arr_7 [i_0] [i_0] [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_13 = (~(arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3]));
                                var_14 = ((~((~(((var_0 >= (arr_5 [i_0 - 1] [2]))))))));
                                arr_14 [i_0] = (4757513734720511419 > var_0);
                                var_15 ^= (max(((~(~var_6))), 1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 |= var_1;

    for (int i_5 = 4; i_5 < 16;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_22 [17] |= var_10;
                    arr_23 [i_6] [i_6] &= (((~var_1) || ((min((arr_19 [i_5] [i_5 - 1] [i_7]), (arr_19 [i_5 + 1] [i_5 - 3] [i_7]))))));
                    var_17 = (min(var_17, ((((((-(arr_15 [i_5 - 2] [1])))) ? (~var_4) : var_4)))));
                }
            }
        }
        arr_24 [i_5] = (((((var_1 ? var_5 : (max((arr_15 [i_5] [i_5]), (arr_19 [i_5] [14] [i_5])))))) ? ((max(var_3, var_8))) : 160));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            {
                arr_31 [i_8] = ((~((max(32, (arr_17 [7]))))));
                var_18 -= (arr_15 [i_9] [i_8]);

                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 7;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_19 = (((((!(arr_39 [i_12 - 1])))) > ((max(1, 32)))));
                                var_20 = -0;
                            }
                        }
                    }

                    for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                    {
                        arr_42 [i_8] [i_8] [i_8] [i_8] [i_10] = (arr_20 [i_8] [i_9] [i_9] [i_13]);
                        arr_43 [i_8] [i_9] [i_10] [i_13] [i_10] = var_0;
                    }
                    for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                    {
                        var_21 = ((-(arr_38 [i_14] [i_14] [i_14])));

                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            var_22 = ((var_0 ? (var_1 + -32747) : ((max(var_3, var_2)))));
                            var_23 -= ((!(-32 ^ 23)));
                            arr_50 [i_10] [i_10] = var_5;
                        }
                        for (int i_16 = 4; i_16 < 10;i_16 += 1)
                        {
                            arr_53 [i_8] [i_14] [i_10] [i_14] [i_10] [i_10] [i_10] = ((!(arr_48 [7] [7] [i_9] [i_10] [i_10] [i_14] [i_16])));
                            arr_54 [i_8] [i_9] [i_10] [i_16] = ((!(((-(arr_41 [i_10]))))));
                        }
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            arr_58 [i_10] [i_8] [i_9] [i_10] [i_14] [1] [i_17] = var_8;
                            var_24 = ((!(((var_1 ? var_5 : 67553994410557440)))));
                            arr_59 [i_10] [i_10] [i_10] [i_14] [i_8] = ((var_5 >> (((!((max(var_5, 32747))))))));
                            var_25 = ((~((-(arr_18 [i_9] [i_17])))));
                        }
                        for (int i_18 = 0; i_18 < 11;i_18 += 1)
                        {
                            var_26 += ((arr_19 [i_8] [i_10] [i_10]) ? -1 : (min((((arr_41 [i_9]) & 5380918319123686004)), var_9)));
                            arr_62 [2] [2] [i_10] [2] [2] [i_9] = ((!((max((arr_25 [i_9]), (var_4 % 13))))));
                        }

                        for (int i_19 = 0; i_19 < 11;i_19 += 1)
                        {
                            arr_65 [7] [i_10] [i_19] [i_19] [i_10] = (((~6099781590403544632) ? (((((2731936902 ? (arr_21 [i_8] [16] [i_10] [16]) : var_1))) ? var_2 : var_4)) : var_5));
                            arr_66 [i_10] [i_9] [i_10] [3] [i_19] = (((((var_10 ? -9223372036854775791 : (arr_44 [i_8] [i_9] [i_10])))) ^ ((max((16934 || var_3), (arr_32 [i_19]))))));
                            arr_67 [i_10] [i_10] = 0;
                            arr_68 [i_8] [i_8] [i_10] [i_14] [i_14] [i_10] [1] = ((-((-(max(var_10, var_9))))));
                        }
                        for (int i_20 = 0; i_20 < 1;i_20 += 1)
                        {
                            arr_72 [i_10] [8] [i_10] [i_14] [i_20] = (-(arr_35 [i_20] [i_10]));
                            arr_73 [i_10] = ((!(((-(((arr_18 [i_20] [i_8]) ? var_10 : var_10)))))));
                            var_27 = min((((-(arr_39 [i_8])))), 4611686018427387904);
                        }
                        for (int i_21 = 0; i_21 < 11;i_21 += 1)
                        {
                            arr_76 [i_10] [6] [i_10] [i_10] = ((~(max(var_10, var_9))));
                            var_28 = (min(65535, ((var_4 ? (arr_39 [i_10]) : (arr_37 [7] [i_10] [7] [i_14] [i_21])))));
                            var_29 = ((111 ? var_10 : 0));
                            arr_77 [i_21] [i_10] [i_8] [i_10] [i_21] [i_9] [i_21] = ((-((+(((arr_27 [3] [i_9] [i_14]) ? var_3 : 10674))))));
                        }
                        var_30 -= ((~(max(((var_1 ? var_9 : var_0)), (arr_47 [i_8] [i_9] [i_9] [i_10] [i_10] [i_14])))));
                        arr_78 [i_8] [i_8] [5] [i_8] [i_14] [i_10] = -144;
                    }
                }
            }
        }
    }
    #pragma endscop
}
