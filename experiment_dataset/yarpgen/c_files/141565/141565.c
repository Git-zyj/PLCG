/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((0 >= 238), (((var_1 ? var_5 : var_16)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = 1;
                        var_18 = (min(((max(238, ((((arr_5 [i_0]) >= var_6)))))), (((var_10 > 102) ? ((var_2 ? (arr_5 [i_0]) : var_9)) : (211 / var_13)))));
                        arr_11 [i_0] = ((((((1 * var_5) ? (arr_3 [i_2]) : (max(var_14, 9))))) ? (((arr_3 [i_3 - 1]) & var_1)) : ((max(238, (arr_3 [8]))))));
                    }
                }
            }
        }
        var_19 = (arr_6 [i_0] [i_0] [i_0] [17] [1]);
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_20 &= ((972 ? ((min(44, ((var_10 ? var_12 : var_7))))) : 639190138));
        var_21 = (((arr_0 [i_4] [i_4]) ? (((arr_3 [i_4]) ? var_2 : (arr_3 [i_4]))) : ((((var_6 ? 238 : var_12)) ^ var_11))));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_22 *= ((((((3655777158 % var_14) == (((~(arr_7 [i_5] [6] [i_6] [i_7]))))))) >> ((((max((min(var_8, var_3)), ((min(0, var_0)))))) - 115))));
                    var_23 = (min(var_23, ((max((((((var_3 ? (arr_7 [i_5] [0] [i_7] [10]) : var_16))) ? (234 >= var_16) : (963 != var_5))), ((min((arr_3 [i_6 + 2]), (arr_12 [i_6 + 2])))))))));
                    var_24 = (((max(-1031498384, ((max(var_4, var_8))))) > var_16));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_30 [i_5] [i_5] = ((((((max((arr_19 [2] [i_9] [i_8] [i_5]), var_2))) ^ var_1)) >> ((((255 >= var_10) != 1)))));
                                var_25 = (min(((var_14 * (arr_22 [i_5] [i_5]))), ((var_16 ? 974 : var_0))));
                                var_26 += max((-973 == var_2), ((639190138 ? 21 : (9792 + var_13))));
                                var_27 = (min(var_27, ((((249 | 18213) ? ((1031498376 ? 130 : 248)) : var_0)))));
                                var_28 = 1;
                            }
                        }
                    }

                    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        var_29 = (((arr_24 [15] [1] [i_8]) ? (var_3 | 1) : (arr_24 [i_5] [i_5] [i_5])));
                        var_30 |= (((var_15 ? 1 : 88)) == (arr_28 [i_5] [i_8] [i_8] [i_8] [0] [i_5] [i_12]));
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                    {
                        arr_38 [i_5] [i_8] [i_8] [i_5] [i_5] = ((((((arr_7 [1] [i_5] [3] [i_13]) ? (arr_1 [i_5]) : var_14))) ? (var_15 | var_5) : (var_3 ^ var_8)));
                        var_31 = (min(var_31, var_13));
                    }
                    for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
                    {
                        var_32 = (min(var_32, (((((max((arr_2 [i_5] [i_5] [i_5]), 1))) >= (((arr_2 [12] [i_8] [i_9]) / (arr_7 [0] [i_8] [i_9] [i_14]))))))));
                        var_33 = (max(6572, (((((var_14 ? var_12 : 30854))) ? (0 || 268434432) : 5))));
                        var_34 = 1;
                    }
                    for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
                    {
                        var_35 = (min(((max(var_12, var_6))), -1));
                        var_36 = (((((-(arr_4 [i_5])))) ? ((min((arr_33 [i_5] [i_8] [i_5] [i_15]), (arr_33 [i_5] [i_8] [i_5] [i_15])))) : var_0));
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 1;i_17 += 1)
                        {
                            {
                                var_37 = var_3;
                                var_38 = ((((((arr_35 [i_17 - 1] [18] [i_17 - 1] [i_17 - 1] [i_17] [i_5]) ? -84 : var_10))) ? (arr_35 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 - 1] [18] [i_5]) : ((max(1, 15)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 17;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 17;i_19 += 1)
                        {
                            {
                                var_39 = ((var_3 ? (((((min(1, 3))) > -18544))) : (max(var_10, (0 + -9657)))));
                                arr_56 [i_5] [i_5] [i_9] [i_18] [i_9] = 1;
                            }
                        }
                    }
                }
            }
        }

        for (int i_20 = 0; i_20 < 19;i_20 += 1) /* same iter space */
        {
            var_40 = (((arr_46 [1] [i_20] [i_5] [i_5] [1]) ? (((arr_24 [i_5] [i_5] [i_5]) ? (arr_46 [4] [i_20] [i_5] [i_5] [i_5]) : 9657)) : (((arr_46 [i_20] [i_20] [i_5] [i_5] [i_5]) ^ (arr_46 [i_20] [i_20] [i_5] [i_5] [i_5])))));
            var_41 = (min(var_41, (((1 ? ((((max(var_14, var_10))) ? ((1 ? (arr_0 [i_20] [i_5]) : var_16)) : ((var_6 ? var_1 : (arr_17 [1] [i_20] [1]))))) : 6572)))));
            var_42 = (((((min(var_0, (arr_48 [i_5] [i_5] [i_20] [i_20] [i_20])))) >= -51)) || var_12);
            var_43 = (min(var_43, var_7));
        }
        for (int i_21 = 0; i_21 < 19;i_21 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 19;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 19;i_23 += 1)
                {
                    {
                        var_44 = (max(var_9, (((((0 ? 28 : var_15))) ? (arr_37 [11] [11]) : (arr_60 [i_5])))));
                        var_45 = (arr_45 [i_5] [i_5] [i_21] [i_22] [i_23]);
                    }
                }
            }
            var_46 = (min(var_46, ((max((((1 || var_7) % var_12)), 38)))));
        }
        /* vectorizable */
        for (int i_24 = 1; i_24 < 1;i_24 += 1)
        {

            for (int i_25 = 0; i_25 < 19;i_25 += 1)
            {

                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    var_47 = (!var_14);
                    var_48 = 58974;
                    var_49 = ((71 << (-9669 + 9680)));
                    var_50 = ((var_16 ? 1 : ((var_13 ? var_14 : 1024))));
                }
                for (int i_27 = 0; i_27 < 19;i_27 += 1)
                {
                    arr_77 [i_5] [i_24] [i_5] [i_27] = (((arr_40 [i_24 - 1] [i_5]) ? (arr_40 [i_24 - 1] [i_5]) : var_15));
                    arr_78 [i_5] [i_25] [i_24] [i_5] [i_5] = 156;
                    var_51 *= (((-26387 <= var_16) >> (-127 - 1)));
                    var_52 -= ((0 ? 0 : var_1));
                    var_53 = ((1 >= (arr_43 [1] [i_24 - 1] [i_24 - 1] [i_24 - 1])));
                }
                for (int i_28 = 1; i_28 < 15;i_28 += 1)
                {
                    var_54 += (arr_47 [i_5] [i_5] [1] [i_24 - 1] [i_24] [i_28 - 1]);
                    var_55 = ((var_0 ? var_2 : 0));
                    var_56 = (min(var_56, 1));
                    arr_82 [6] &= (((arr_75 [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_24 - 1]) / -38));
                }
                var_57 = (min(var_57, (((76 ? (arr_24 [1] [i_24 - 1] [16]) : ((180 ? 1073741696 : 179)))))));
                var_58 = -var_0;
                /* LoopNest 2 */
                for (int i_29 = 1; i_29 < 17;i_29 += 1)
                {
                    for (int i_30 = 2; i_30 < 18;i_30 += 1)
                    {
                        {
                            arr_89 [i_5] [i_24] [i_25] = var_16;
                            var_59 *= ((var_5 ? (~32309) : 0));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 1;i_31 += 1)
                {
                    for (int i_32 = 0; i_32 < 19;i_32 += 1)
                    {
                        {
                            var_60 -= (arr_25 [i_5] [4] [i_32] [i_5]);
                            var_61 = (min(var_61, (arr_70 [i_32] [i_31])));
                            var_62 = var_5;
                        }
                    }
                }
            }
            var_63 = (min(var_63, (((1 ? var_5 : ((0 ? (arr_29 [i_24 - 1] [1] [13] [i_5] [13] [5]) : var_8)))))));
            var_64 += ((var_13 ? var_5 : (arr_73 [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_24 - 1])));
            arr_96 [i_5] [i_5] = ((var_6 ? (arr_44 [i_5] [i_5] [i_24] [17]) : var_16));
        }
        arr_97 [i_5] = ((((((0 ? 0 : (arr_2 [i_5] [1] [11])))) ? ((max(-9655, 1))) : (arr_94 [i_5] [1] [1] [i_5] [i_5] [i_5]))) + ((min(1, 1))));
    }
    for (int i_33 = 3; i_33 < 18;i_33 += 1)
    {
        /* LoopNest 2 */
        for (int i_34 = 2; i_34 < 18;i_34 += 1)
        {
            for (int i_35 = 4; i_35 < 18;i_35 += 1)
            {
                {
                    var_65 *= 1;
                    arr_104 [i_35] [i_33] = 136;

                    /* vectorizable */
                    for (int i_36 = 0; i_36 < 1;i_36 += 1)
                    {
                        var_66 = (!-1);
                        var_67 *= (arr_74 [i_33] [i_35]);
                        var_68 = (min(var_68, 0));
                    }
                    var_69 = (arr_40 [i_33 - 3] [i_33]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_37 = 4; i_37 < 18;i_37 += 1)
        {
            for (int i_38 = 1; i_38 < 18;i_38 += 1)
            {
                {
                    var_70 = ((((arr_98 [i_37 + 1]) ? var_12 : var_5)));
                    var_71 = (((((~((7908 ? (arr_58 [i_33] [i_33] [i_38]) : var_0))))) ? (arr_70 [5] [i_33 + 1]) : (((arr_87 [i_37] [i_38] [i_33] [i_33] [i_37]) | (arr_90 [i_33])))));
                    var_72 = ((((((arr_79 [i_38 + 1] [8] [i_38 - 1] [i_37 - 3]) % 32365))) ? (((arr_79 [i_37] [i_37] [i_38 + 1] [i_33]) ? 21 : 1)) : (arr_55 [i_33] [4] [i_38 + 1] [i_37] [i_33] [i_33] [i_33])));
                }
            }
        }
    }
    #pragma endscop
}
