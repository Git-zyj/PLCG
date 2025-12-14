/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, -3981340038605164023));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((((((-2 ? var_10 : 131))) ? var_8 : 223)))));
                    arr_8 [i_0] [i_1] [i_2] = ((var_6 ? ((((var_12 ? var_3 : var_0)) >> ((((var_7 ? var_11 : var_9)) - 209)))) : ((var_9 ? var_5 : var_2))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] = (((var_1 ? var_15 : var_11)));
                                arr_16 [i_0] = var_5;
                                var_19 = (min(var_19, (((((((var_3 ? var_1 : var_11)) ? ((32756 ? 127 : 65535)) : ((var_15 ? var_3 : var_12)))))))));
                                var_20 += (!var_5);
                                var_21 |= ((~((var_12 & ((var_0 ? var_6 : var_16))))));
                            }
                        }
                    }
                }
            }
        }
        var_22 ^= (!var_13);
        arr_17 [i_0] = (((((var_10 ? var_10 : var_9))) ? var_8 : (!var_2)));
        var_23 = (((var_6 ? var_1 : var_12)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_20 [21] = (83 != 32);
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_24 *= ((var_6 << (var_13 - 64326)));
                    arr_25 [i_5] [i_5] [i_7] [5] = var_2;
                    arr_26 [12] = var_13;
                    var_25 = ((36377 << (61 - 50)));
                }
            }
        }

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            arr_31 [i_5] [i_5] [9] = ((var_2 ? (var_4 - var_9) : (~var_7)));
            arr_32 [i_5] [i_8] = var_0;
            var_26 = var_9;
            var_27 = ((var_8 ? var_14 : var_16));
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            var_28 = ((-var_15 ? var_9 : var_15));

            for (int i_10 = 3; i_10 < 19;i_10 += 1)
            {

                for (int i_11 = 3; i_11 < 20;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_29 *= (((var_14 == var_5) && (!-32083)));
                        var_30 *= var_5;
                    }
                    arr_43 [i_10] = ((-((87 ? -8727 : 114))));
                    var_31 |= ((var_5 ? var_9 : var_11));

                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        arr_47 [i_9] [i_5] [i_10] [i_11 - 2] [i_10] = var_13;
                        var_32 = (max(var_32, (((1 ? 38 : (32752 & var_14))))));
                    }
                }
                var_33 = (127 != var_15);
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 4; i_15 < 20;i_15 += 1)
                    {
                        {
                            var_34 = (!var_14);
                            arr_53 [i_10] = ((var_16 ? var_9 : var_5));
                            arr_54 [i_5] [i_10] [i_10] [13] [i_14] [i_15] = (~var_16);
                        }
                    }
                }
            }
            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                arr_59 [i_16] = ((var_16 ? -127 : 14379209477031012950));
                var_35 -= (~24477);
                var_36 *= var_13;
            }
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                var_37 = var_14;
                var_38 = ((-var_2 ? ((var_4 ? var_8 : var_7)) : (~var_9)));

                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    var_39 = (((((var_6 ? var_7 : var_13))) ? (var_3 - var_1) : var_14));
                    var_40 = (min(var_40, (36 == 226)));
                    arr_64 [i_5] = (var_13 && var_1);
                    var_41 = var_5;
                }
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    arr_67 [i_5] [i_9] [i_9] [i_17] [i_17] [i_19] = (29683 * var_0);
                    var_42 = 0;
                    arr_68 [i_19] [i_17] [i_9] [i_5] = (~var_4);
                    arr_69 [i_5] [i_5] [i_5] [i_5] [i_5] = ((var_11 ? 116 : (~14736715190122210874)));
                }
            }
            var_43 = (((var_8 ? var_3 : var_5)));
        }
        var_44 = (max(var_44, ((((var_3 | var_4) << (((~var_1) + 18701)))))));
        var_45 = (min(var_45, (((var_9 ? ((var_1 ? var_4 : var_8)) : var_9)))));
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 10;i_20 += 1)
    {
        var_46 = (!var_6);

        for (int i_21 = 0; i_21 < 10;i_21 += 1)
        {

            for (int i_22 = 0; i_22 < 10;i_22 += 1)
            {
                arr_77 [i_20] [i_20] [i_21] [i_22] = ((var_7 ? var_10 : var_10));
                var_47 |= var_11;
            }
            for (int i_23 = 0; i_23 < 10;i_23 += 1)
            {
                var_48 = (max(var_48, ((((-9599 ? var_3 : 19923))))));
                var_49 = ((var_5 ? var_6 : ((var_1 ? var_11 : var_8))));

                for (int i_24 = 0; i_24 < 10;i_24 += 1)
                {
                    var_50 = ((!(!93)));
                    var_51 = ((var_8 ? var_7 : var_6));

                    for (int i_25 = 0; i_25 < 10;i_25 += 1)
                    {
                        var_52 = (max(var_52, (var_12 < var_1)));
                        arr_86 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] = var_10;
                    }
                    for (int i_26 = 0; i_26 < 10;i_26 += 1)
                    {
                        arr_89 [i_26] [i_24] [i_23] [i_21] [i_20] = (((~var_13) ^ var_16));
                        var_53 = var_7;
                        var_54 = ((var_12 ? var_9 : var_4));
                    }
                    for (int i_27 = 0; i_27 < 10;i_27 += 1)
                    {
                        arr_94 [i_20] [i_21] [i_23] [i_24] [i_27] = (((((var_4 ? var_12 : var_15))) ? ((var_14 ? var_9 : var_16)) : var_12));
                        var_55 = var_5;
                    }
                    for (int i_28 = 0; i_28 < 10;i_28 += 1)
                    {
                        var_56 -= var_3;
                        var_57 = (~var_10);
                        arr_99 [i_28] [i_28] [i_28] [0] = var_14;
                    }
                    var_58 = (((!var_15) % 18));
                }
                for (int i_29 = 0; i_29 < 10;i_29 += 1)
                {
                    var_59 += (var_4 || var_5);
                    arr_102 [i_20] [i_20] [i_20] [i_20] [i_20] = (var_5 != -var_2);
                    arr_103 [i_29] [i_21] [2] = (~var_5);
                }
            }
            var_60 = (!var_5);
            arr_104 [i_20] [i_21] = ((var_13 > ((var_9 ? var_16 : var_2))));
        }
        for (int i_30 = 0; i_30 < 10;i_30 += 1)
        {
            var_61 -= (((((var_4 ? var_3 : var_11))) ? var_11 : var_15));
            var_62 = -var_7;
        }
        var_63 = var_1;
    }
    var_64 = (((var_1 ? ((var_4 ? var_16 : var_9)) : -var_8)));
    #pragma endscop
}
