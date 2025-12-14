/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (!((((var_4 ? var_7 : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 7;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_1] = ((((~(~var_4))) >= ((~(~94)))));
                    arr_10 [i_0] = (((((var_4 ? var_2 : (var_3 ^ var_4)))) ? (((~8) * (!var_1))) : (((~var_10) ? var_7 : (var_8 <= var_3)))));
                    arr_11 [i_0] = (!1);
                    arr_12 [i_0] [i_0] [9] = (!(!var_8));
                    var_12 = (((!(var_9 > var_7))));
                }
                for (int i_3 = 2; i_3 < 7;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_13 = ((var_9 | var_0) ? ((var_1 + (var_10 > var_0))) : (((var_1 ? var_4 : var_4))));
                                arr_21 [i_4] [i_3 + 2] [i_4] [i_4] [i_3 + 2] = ((((var_7 ? var_1 : var_6)) + (((((var_7 ? var_2 : var_8)) & (~var_7))))));
                            }
                        }
                    }
                    var_14 += (((!var_0) - (var_10 * var_5)));
                    arr_22 [i_0] [2] [i_3] = ((~(~var_2)));
                    arr_23 [6] [i_1 + 2] = (!var_1);
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_32 [i_1] [i_1] [i_6] [i_7] [i_1] [i_7] = (!3);
                        var_15 = (max(var_15, (((((((var_6 ? var_10 : var_6)) * var_10)) > var_5)))));
                        var_16 -= ((((~((var_7 ? var_8 : var_1)))) | (var_3 <= var_0)));
                        var_17 += var_1;
                    }
                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        arr_35 [i_1] [i_1 + 2] [i_6] [i_1] = ((~(0 || 76)));

                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_38 [3] &= ((!(~var_6)));
                            var_18 = ((var_10 >= (var_2 || var_9)));
                            var_19 += (((!var_3) % var_8));
                        }
                        for (int i_10 = 2; i_10 < 7;i_10 += 1)
                        {
                            arr_42 [i_0] [i_1] [i_1] [i_0] [i_10] = (~var_9);
                            var_20 = ((0 ? (~var_2) : 240));
                            arr_43 [i_0] [i_1] [1] [i_8 - 2] [i_10] &= ((!(256 - 0)));
                            arr_44 [i_0] |= (~var_4);
                        }
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            arr_47 [i_8 - 2] [i_8 - 2] [i_0] [i_0] = ((var_5 >> (var_3 != var_5)));
                            var_21 = (min(var_21, var_6));
                            var_22 = (((var_6 | var_0) ? var_7 : (var_1 + var_4)));
                        }
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            var_23 = var_10;
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_10 < (var_5 > var_6)));
                        }
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_24 = (!1881700891);

                        /* vectorizable */
                        for (int i_14 = 1; i_14 < 9;i_14 += 1)
                        {
                            arr_59 [i_0] [i_1] = (!var_3);
                            var_25 = (var_0 | var_0);
                            arr_60 [i_0] [i_1] [i_6] = (((var_3 % var_4) ? var_1 : var_9));
                        }
                        for (int i_15 = 2; i_15 < 7;i_15 += 1)
                        {
                            var_26 = (min(var_26, var_1));
                            var_27 = (max(var_27, var_2));
                            var_28 -= ((112 >> (((((-2147483647 - 1) - -2147483642)) + 11))));
                        }
                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
                        {
                            arr_67 [i_6] [i_16] [i_6] [i_16] [i_0] = ((!var_5) <= var_2);
                            var_29 = var_9;
                            var_30 -= ((~(~16256)));
                            var_31 = var_6;
                            arr_68 [i_0] [i_1 + 1] [i_6] [i_6] [i_16] = var_0;
                        }
                        for (int i_17 = 0; i_17 < 10;i_17 += 1) /* same iter space */
                        {
                            var_32 += (var_8 ? (((var_5 ? var_9 : var_10))) : ((var_3 ? var_0 : var_8)));
                            arr_72 [i_0] [i_0] [9] [i_17] [i_0] = ((((var_5 | (!var_2))) * (!var_5)));
                            var_33 = (((var_1 % var_4) ? ((((!(!var_8))))) : (var_10 / var_4)));
                            var_34 = (!15485);
                            var_35 = (min(var_35, (((!(var_2 - var_2))))));
                        }
                    }

                    /* vectorizable */
                    for (int i_18 = 1; i_18 < 9;i_18 += 1) /* same iter space */
                    {
                        var_36 = ((~(var_5 <= var_2)));
                        arr_76 [i_0] [i_0] = (((((var_8 ? var_5 : var_8))) || var_4));
                        arr_77 [i_0] [i_1] [i_0] [i_0] = (~var_7);
                    }
                    for (int i_19 = 1; i_19 < 9;i_19 += 1) /* same iter space */
                    {
                        var_37 = ((((var_0 >= (((var_5 ? var_3 : var_10)))))));
                        var_38 = (((1 <= 128) ? (((var_5 / var_0) & var_9)) : (~var_2)));
                        var_39 = ((((((var_10 / var_3) ? (var_3 / var_8) : var_3))) ? (var_6 + var_7) : (((!var_7) - var_9))));
                        arr_80 [i_1] = (((((var_5 ? var_10 : var_8)) < (32739 != 9))));
                        var_40 &= (!var_3);
                    }
                    for (int i_20 = 1; i_20 < 9;i_20 += 1) /* same iter space */
                    {

                        for (int i_21 = 0; i_21 < 0;i_21 += 1) /* same iter space */
                        {
                            arr_87 [i_21] = ((~((var_0 ? (var_3 / var_2) : (var_4 / var_8)))));
                            var_41 = var_2;
                        }
                        /* vectorizable */
                        for (int i_22 = 0; i_22 < 0;i_22 += 1) /* same iter space */
                        {
                            arr_91 [i_0] [8] [i_6] [i_20 + 1] [i_20] [i_22] [0] |= (!var_1);
                            var_42 -= var_10;
                            var_43 = ((-122 ? -1 : 2841074428736373702));
                        }
                        for (int i_23 = 0; i_23 < 10;i_23 += 1)
                        {
                            arr_96 [i_0] [i_0] &= var_5;
                            arr_97 [i_20] [i_20 + 1] [i_20] [i_20] [i_20] [i_20] = (((57 % 4294967295) ^ 391014226013116066));
                            var_44 |= ((var_5 <= ((~((var_6 ? var_5 : var_2))))));
                            arr_98 [i_1 - 1] = ((~(!121)));
                        }
                        var_45 = (max(var_45, var_9));
                    }
                    arr_99 [i_0] [i_0] [i_0] [i_0] = (!4558679050882853935);
                }
                var_46 = var_2;
                var_47 = (((!var_3) > var_4));
                var_48 = ((!(0 - -5897431727652531663)));
            }
        }
    }
    var_49 = (max(var_49, (!var_2)));
    var_50 = ((~(!30064771072)));
    #pragma endscop
}
