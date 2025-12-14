/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_3 & var_8) != (var_8 / var_10))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (((var_13 ^ var_6) | (min(var_0, var_14))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_22 = var_4;
            var_23 = (((var_15 / var_3) ^ var_17));
            arr_5 [i_1] [i_0] [i_0] = ((var_3 || ((!(!var_8)))));
        }
        arr_6 [i_0] &= ((var_16 - -55) + ((var_6 + (-1 + var_17))));
        var_24 = (max(var_24, ((min(var_5, (var_9 * var_10))))));
        var_25 = var_9;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            var_26 = (~var_1);
            arr_11 [i_3] = var_12;
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_27 = (-1 + 241);
            var_28 = var_10;
            arr_15 [i_4] [i_2] = var_10;
            var_29 = (max(var_29, (var_4 / var_15)));
        }
        arr_16 [i_2] = var_16;
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        arr_25 [i_7] [i_6] [i_6] [i_2] = -var_15;
                        var_30 = var_12;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        arr_33 [i_2] [14] [i_9] [i_2] = (!var_0);
                        var_31 *= (!var_11);
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        arr_38 [i_2 - 2] [i_11] [i_8] [i_9] [i_11] = var_9;

                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            var_32 = (var_11 | var_11);
                            arr_42 [i_2] [i_9] [i_11] [i_11] [i_12] [i_12] = var_19;
                        }
                        for (int i_13 = 2; i_13 < 16;i_13 += 1)
                        {
                            var_33 = (var_13 != var_15);
                            var_34 ^= var_9;
                            arr_45 [i_11] [i_8] [i_9] [i_11] = (((-3343812992926958268 - 0) * var_17));
                            arr_46 [i_2 + 2] [i_11] [i_11] [i_2 + 3] [i_2 + 2] = var_1;
                        }
                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            arr_49 [8] [i_11] [i_9] [i_11] [i_11] [i_11] [i_14] = (var_4 / var_7);
                            arr_50 [i_11] [i_8] [i_8] [i_11] [i_14] = (var_2 >= var_8);
                            var_35 = (max(var_35, var_15));
                        }
                        var_36 = var_19;
                    }
                    for (int i_15 = 1; i_15 < 17;i_15 += 1)
                    {
                        arr_53 [i_2 + 1] [i_8] [i_9] [i_15] = (var_3 - var_7);
                        var_37 = var_8;
                    }
                    var_38 = var_16;
                    arr_54 [i_2] [i_2] [i_9] = ((var_13 * (!var_19)));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 4; i_17 < 15;i_17 += 1)
                        {
                            {
                                arr_59 [i_2 + 2] [1] [i_9] [i_9] [i_2 + 3] = ((var_16 + (var_9 - var_19)));
                                var_39 = (max(var_39, var_15));
                                arr_60 [i_2] [i_2 + 2] [i_2 + 2] [i_2] [i_2] [i_2 + 2] [i_2] = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_18 = 2; i_18 < 14;i_18 += 1)
    {
        arr_63 [4] [i_18] = (max(var_1, (65535 / 65535)));
        arr_64 [i_18] = var_6;

        for (int i_19 = 2; i_19 < 14;i_19 += 1)
        {
            var_40 = var_5;
            arr_68 [i_18 - 1] [i_18 - 1] = ((+(((var_18 - var_5) / var_18))));

            for (int i_20 = 3; i_20 < 14;i_20 += 1)
            {
                arr_71 [i_20] [i_20] [i_20] = var_7;
                var_41 = ((((var_16 >> (var_11 - 142))) >> (((var_4 / var_15) - 38715375197946524))));
            }
            for (int i_21 = 0; i_21 < 17;i_21 += 1)
            {

                for (int i_22 = 0; i_22 < 17;i_22 += 1)
                {
                    arr_76 [i_21] [i_21] = (max(var_17, ((((var_16 ^ var_14) & var_4)))));
                    var_42 = (min((var_5 % var_5), var_10));
                    var_43 = -var_2;
                    var_44 &= (-1 >= 1);
                }
                for (int i_23 = 0; i_23 < 17;i_23 += 1)
                {

                    for (int i_24 = 1; i_24 < 14;i_24 += 1)
                    {
                        arr_84 [0] [i_19] [i_21] [i_23] [i_24] = var_7;
                        arr_85 [i_18] [i_18] [i_18 - 1] [i_18] [i_18 + 2] [i_24] = var_4;
                    }
                    arr_86 [i_18] [i_18] [i_21] [i_23] [i_18] = var_16;
                }
                /* vectorizable */
                for (int i_25 = 0; i_25 < 17;i_25 += 1)
                {
                    arr_90 [i_19] [i_21] [i_25] = (var_6 || var_7);
                    arr_91 [i_25] [i_19] [i_18] = ((var_11 == ((var_14 << (var_17 - 16639601338233448250)))));
                    arr_92 [i_18] [i_19] [i_21] [i_18] [i_25] = var_11;
                }
                for (int i_26 = 2; i_26 < 15;i_26 += 1)
                {
                    var_45 = (5 >= 15);

                    /* vectorizable */
                    for (int i_27 = 4; i_27 < 14;i_27 += 1)
                    {
                        var_46 = var_0;
                        arr_99 [i_18 + 3] [1] [i_26] = (var_15 | var_2);
                        var_47 = (var_4 / var_5);
                    }
                }

                /* vectorizable */
                for (int i_28 = 0; i_28 < 17;i_28 += 1)
                {
                    arr_102 [i_19] [i_19] [i_19 + 2] [i_19] [i_19] [i_19 + 2] = (var_19 + var_9);
                    arr_103 [i_18 + 3] [i_18 + 3] [i_21] [i_18 + 3] = var_19;
                }
                for (int i_29 = 0; i_29 < 17;i_29 += 1)
                {
                    var_48 -= (min(var_5, (22963 - 0)));

                    for (int i_30 = 0; i_30 < 17;i_30 += 1)
                    {
                        var_49 = (((!15872) == (var_9 & 2016)));
                        arr_110 [i_21] [i_21] [i_19 - 2] = var_1;
                        arr_111 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [0] [i_29] [i_19 + 2] = (-19 > 255);
                        arr_112 [i_30] [i_18 + 2] [16] [i_19] [i_18 + 2] &= ((var_8 == ((min(var_5, var_8)))));
                    }
                    /* vectorizable */
                    for (int i_31 = 0; i_31 < 17;i_31 += 1)
                    {
                        arr_116 [i_18] [i_18] [i_19 - 1] [i_19 - 1] [i_29] [i_31] = var_14;
                        arr_117 [i_18] = var_7;
                        var_50 = ((1073741312 >> (-2006 + 2007)));
                        arr_118 [14] [14] [14] [10] [i_18] = (var_3 > var_19);
                    }
                    var_51 = var_3;
                }
                /* vectorizable */
                for (int i_32 = 0; i_32 < 17;i_32 += 1)
                {
                    var_52 &= ((var_11 ^ (1242925850 && 61157)));
                    var_53 = var_9;
                    var_54 = (min(var_54, ((((var_11 - var_18) + var_17)))));
                    var_55 = (min(var_55, (-2027 / var_15)));
                }
                var_56 = var_16;
                arr_121 [i_18] [i_19] [i_21] = var_5;
            }
        }
        for (int i_33 = 0; i_33 < 17;i_33 += 1)
        {
            var_57 = (((((var_13 | var_12) + 2147483647)) >> (((var_18 == var_0) + (var_17 && var_10)))));
            var_58 = (((max(var_1, var_6)) - (var_11 - var_7)));
        }
    }
    var_59 = var_11;
    var_60 = var_19;
    var_61 = var_2;
    #pragma endscop
}
