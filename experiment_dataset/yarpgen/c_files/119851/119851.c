/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_14 -= (--26002);
                    var_15 = 3821711546;
                    arr_8 [2] [i_2] [i_2] = ((((((65525 * (arr_5 [i_0] [i_0])))) ? (65525 > 65531) : (((!(arr_4 [12])))))));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    var_16 -= (43194 == -23177);
                    var_17 = 1128573401067474035;
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_18 = (max(var_18, 58123));
                                arr_17 [i_1] [i_4] [i_1] [i_1] [i_1] [i_1] = -0;
                                arr_18 [i_0] [i_3] [i_3] [i_4] [i_4] = ((((var_5 ? var_3 : var_12)) ^ (((58134 ? (-127 - 1) : 38455)))));
                            }
                        }
                    }

                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        var_19 = 3196446875;
                        var_20 = (max(var_20, (((8026 ? 3301212705 : 57510)))));
                        arr_21 [i_0] [4] [i_6] [i_0] [i_0] = ((((min(-4762678817628578795, 57510))) ? ((((((arr_11 [i_6 + 3] [6] [i_1] [i_0]) - 25676)) << (9586180523519965121 < var_8)))) : (~-3455087722430678554)));
                        var_21 = (((5719 ? (var_5 + 43194) : 22357)));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_22 = ((var_4 ? var_12 : (arr_20 [17] [i_1] [i_1])));
                        arr_24 [i_0] [i_1] = ((var_7 ? 0 : 61369));

                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            var_23 = ((((-17221 ? 62382 : var_12)) & (arr_26 [20])));
                            arr_27 [i_0] [i_1] [2] [i_7] &= 0;
                            var_24 = (arr_14 [i_8] [i_7] [i_8] [i_0 - 2] [i_0 - 2]);
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_25 = (((arr_4 [i_0 + 1]) ? (((arr_23 [i_0 - 2] [i_1] [i_3] [i_7] [i_3]) ? 2147483647 : var_7)) : var_1));
                            var_26 = (!var_9);
                            var_27 = (max(var_27, ((((arr_19 [i_0 - 2] [i_0] [i_0 + 1]) + -1)))));
                        }
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                    {
                        var_28 = (((var_1 & var_8) - var_4));
                        var_29 = (((~1986128767) >> (-var_7 - 870616744)));
                        arr_34 [i_10] [i_3] [i_0] = (((min(var_2, var_2))));
                    }
                    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        arr_38 [i_0 + 1] [i_0 + 1] [i_1] [i_3] [9] [i_11] = ((!(((var_6 * 126) <= (arr_20 [i_0] [i_1] [i_11])))));
                        var_30 = -115;
                    }

                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {

                        /* vectorizable */
                        for (int i_13 = 3; i_13 < 21;i_13 += 1)
                        {
                            var_31 += (((((arr_30 [i_0 + 1]) ? (arr_39 [i_0] [i_0 + 1] [i_0 - 1] [i_0]) : 2642005470)) + 1687436046881118058));
                            var_32 = 17254;
                            var_33 = -21131;
                            var_34 = (min(var_34, var_0));
                        }
                        var_35 = (((((~8891663633753681159) + 9223372036854775807)) >> (((((128 ? 496756356 : 57509))) ? var_4 : (arr_40 [i_0 - 2] [i_1])))));
                        var_36 = (max(1687436046881118063, 538800889));
                        var_37 *= ((+(((arr_3 [i_0 - 2]) ? var_7 : 32))));
                    }
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
                {
                    var_38 = (min(var_38, (!var_4)));

                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        var_39 *= 123;

                        for (int i_16 = 0; i_16 < 22;i_16 += 1)
                        {
                            var_40 = (~59791);
                            var_41 = -14;
                        }

                        for (int i_17 = 3; i_17 < 18;i_17 += 1) /* same iter space */
                        {
                            var_42 = 65535;
                            var_43 *= (((~26101) || (((var_10 << (var_9 - 5718110019453440378))))));
                        }
                        for (int i_18 = 3; i_18 < 18;i_18 += 1) /* same iter space */
                        {
                            var_44 = ((var_7 ? var_0 : var_11));
                            var_45 = var_0;
                        }
                    }
                }
                arr_56 [i_0] [6] = 4212312382;
                var_46 = (2562020732 / 192);
            }
        }
    }
    var_47 = 9223372036854775807;
    var_48 = ((((3301212705 ? 4212312380 : 934852263))));
    #pragma endscop
}
