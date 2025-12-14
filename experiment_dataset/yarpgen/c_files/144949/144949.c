/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_2;

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_12 = min(32767, (14934 & 1));
        arr_3 [i_0] = ((((max(((min(880185582, 1))), (min(var_8, var_6))))) ? (((min(1, 32767)))) : (min(var_10, var_1))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_7 [i_1] = var_9;
        arr_8 [i_1] [i_1 + 1] = (((((((min(var_5, var_8))) * var_8))) ? ((var_10 / (max(var_6, var_6)))) : (min(((min(-880185595, 13745))), var_6))));
        arr_9 [i_1] = ((-(min(var_5, var_3))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] |= ((1 != (-2147483647 - 1)));
                            var_13 |= (max(9223372036854775807, ((min(-32767, 51763)))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_26 [i_7] [i_3] [i_3] [i_3] [i_3] [i_3] = var_7;
                            arr_27 [i_2] [i_3] [i_4] [i_7] [i_7] [i_4] [i_7] = var_8;
                            var_14 = var_2;
                            var_15 |= var_8;
                        }

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_30 [i_2] [i_3] [i_4] [i_5] [i_8] = (!880185582);
                            var_16 = (max(var_16, (((221012423 ? 1055893969 : 131071)))));
                            arr_31 [i_2] [i_3] [i_4] [i_5] [i_8] = (max(((min(var_5, var_7))), ((var_0 ? var_10 : var_4))));
                            var_17 = ((4 ? (-9223372036854775807 - 1) : -1353814792));
                        }
                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            var_18 = ((var_10 ? var_1 : (var_7 * var_1)));
                            arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = -var_5;
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_37 [i_3] [i_4] [6] = ((13745 ? 3239073327 : 3239073327));
                            var_19 = (!162);
                            var_20 = (min((((-2147483647 - 1) ? -221012426 : 3239073327)), ((min(-880185583, 19075)))));
                        }
                        arr_38 [i_2] [i_2] [i_2] [i_2] = ((~((1702091965 ? 65535 : 12066122122417307409))));
                        var_21 = ((var_2 ? (!var_4) : -var_2));
                    }
                }
            }
        }
        var_22 = (((~134217664) || (~-8835142595504266922)));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {
                        arr_48 [i_2] [i_2] [i_2] [i_2] [i_12] = (((((-(min(var_10, var_4))))) ? (min((((var_0 ? var_2 : var_0))), ((var_0 ? var_9 : var_1)))) : (min((~var_4), var_9))));
                        var_23 &= (min((var_6 % var_4), -var_3));
                    }
                }
            }
        }
    }
    var_24 = (min((max((max(var_9, var_1)), (~var_6))), var_6));
    var_25 |= (min(((((min(var_3, var_3))) ? var_10 : (max(237, -2675593458401638047)))), ((~(max(var_3, var_6))))));
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 0;i_14 += 1)
    {
        for (int i_15 = 4; i_15 < 17;i_15 += 1)
        {
            {
                var_26 &= (((!var_8) ? -66 : (min(var_9, var_7))));

                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {

                    /* vectorizable */
                    for (int i_17 = 1; i_17 < 17;i_17 += 1)
                    {
                        arr_61 [i_16] = ((2048 ? 880185582 : -221012415));
                        var_27 |= (1 ? 4294967276 : -2675593458401638047);
                        var_28 |= -var_10;
                    }
                    /* vectorizable */
                    for (int i_18 = 3; i_18 < 14;i_18 += 1)
                    {
                        arr_65 [i_14] [i_15] [i_16] [i_16] = ((var_5 ? var_2 : var_2));
                        arr_66 [i_16] [i_16] [i_15] [i_16] [i_18] [16] = var_4;
                    }
                    arr_67 [i_14] [i_14] [i_16] [i_16] = min(var_9, var_10);
                    arr_68 [i_14 + 1] [i_16] = ((((max(-880185583, 9868))) ? 65533 : (+-0)));
                    var_29 |= ((((4323455642275676160 ? 120 : -1)) == ((max(5140, -25098)))));
                }
                for (int i_19 = 3; i_19 < 16;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 18;i_20 += 1)
                    {
                        var_30 |= ((-1 ^ (max(-1, (((-1 ? 67 : 66)))))));
                        arr_73 [i_14] [i_19] = (((var_3 & var_2) + ((-(max(var_6, var_9))))));
                        arr_74 [6] [i_19] [i_19] [i_20] = ((((-((1 ? 1 : 72))))) ? (min(var_4, ((var_2 ? var_7 : var_10)))) : (((var_8 ? var_7 : var_5))));

                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 18;i_21 += 1)
                        {
                            var_31 = ((var_3 ? (((939419508 ? -26 : 165))) : var_10));
                            var_32 = (max(var_32, (((var_10 ? var_6 : var_2)))));
                            arr_79 [i_19] [i_15] [i_19 + 2] [i_19 + 2] [i_20] [i_21] = (var_7 + var_3);
                        }
                        var_33 = (~5730663474433371714);
                    }
                    var_34 = ((((min(var_9, var_0))) ? ((max(var_5, var_8))) : (!var_6)));
                }
                for (int i_22 = 1; i_22 < 16;i_22 += 1)
                {
                    arr_83 [i_14] [3] [i_22] &= var_8;
                    var_35 = (max(var_35, var_5));
                    arr_84 [i_22] [i_15] [i_15 - 4] [i_14] = ((((var_2 ? var_10 : var_8)) + (max((min(var_10, var_0)), (!221012417)))));
                }
            }
        }
    }
    #pragma endscop
}
