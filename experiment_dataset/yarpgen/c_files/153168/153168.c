/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_13 ? var_11 : var_15));
    var_21 = ((max((max(-1, -16)), -8667011630471077880)) - ((((((15360 ? 58895072 : 15360)) != var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_22 = (((min(var_3, 1)) ? -9223372036854775807 : (max(var_12, var_17))));
                        var_23 = 84;
                    }
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_24 = ((max(var_17, -26197)));
                            arr_15 [i_5] [i_4 - 1] [i_5] [i_5] [i_1] [i_0] = (((((511 & (max(393841159595830823, 0))))) ? ((var_14 ? var_9 : (((var_9 ? var_18 : var_18))))) : (max((min(7931374701731422104, var_5)), (((-28 ? 1 : -28)))))));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (-20 ? (-9223372036854775807 - 1) : 181);
                            var_25 = (max(((128 ? 1 : -10638)), var_8));
                            var_26 = ((-5 ? 2106964483 : -16));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_27 += var_2;
                            var_28 += ((var_10 ? (max(1, ((1 ? (arr_0 [i_1] [i_1]) : var_12)))) : (max(((var_17 ? 243 : 123)), ((max(var_14, (arr_8 [i_7] [i_4] [i_2] [i_1]))))))));
                            var_29 = ((var_15 ? (!-15353) : -89));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_30 = (min(var_1, ((var_4 ? (max(var_5, var_7)) : (24 - 90)))));
                            var_31 -= ((var_7 ? ((max(13, 1))) : var_3));
                            var_32 = ((((((15924 ? -15 : 14)))) ? 6 : ((min(var_10, 65534)))));
                        }

                        for (int i_9 = 2; i_9 < 13;i_9 += 1)
                        {
                            var_33 |= ((((((var_16 ? 241 : var_1)))) ? var_13 : var_14));
                            arr_31 [i_0] [i_1] [i_9] [i_9] [i_9] = var_3;
                            var_34 = (max(var_34, (((((-(min(-126, var_10)))) <= (((max(-15360, var_4)))))))));
                        }
                        arr_32 [i_0] [i_1] [i_2] [i_4] = (((max(var_16, (arr_5 [i_1] [i_1] [i_1]))) < (((+((var_1 ? (arr_26 [i_0] [6] [6] [i_2] [i_2] [i_4]) : var_1)))))));
                        arr_33 [i_0] [i_0] [i_1] [i_2] [i_4] = (((-91 + -106) ? 0 : 15924));
                    }
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        var_35 = (max(var_35, (max(39, (arr_11 [i_10] [i_10] [i_10] [i_2 - 1] [i_2])))));

                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            var_36 = (min(var_36, ((((arr_36 [i_2 - 1] [i_10 + 2] [i_11 + 1] [i_11] [i_2 - 1] [i_11] [i_11]) ? -16 : (arr_36 [i_2 - 1] [i_10 + 1] [i_11 + 1] [i_10 + 1] [i_10 + 1] [i_11 + 2] [i_11]))))));
                            var_37 = 19;
                            arr_38 [i_0] [i_1] [i_1] [i_10 + 2] [i_11] = -123;
                            arr_39 [i_0] |= (((arr_5 [i_11] [i_11 + 2] [i_2 - 1]) & ((var_15 | (arr_17 [i_0] [i_0] [i_2 - 1] [i_0] [i_10] [i_10])))));
                        }
                    }
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        arr_42 [i_0] [i_1] [i_0] [i_2 - 1] [i_12] [i_12] = var_17;
                        var_38 = ((((((!var_10) ? ((((var_14 && (arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] [i_2] [i_12]))))) : var_19))) ? (max(var_0, (((var_17 < (arr_27 [i_12] [i_2] [i_2] [i_0] [i_1] [i_0])))))) : (min(var_11, ((var_1 << (var_1 - 154)))))));
                    }

                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        var_39 = ((-((((((arr_19 [i_0] [i_0] [i_2] [i_13] [i_2] [i_1]) / var_7))) ? ((max(var_18, var_13))) : var_18))));

                        for (int i_14 = 2; i_14 < 13;i_14 += 1)
                        {
                            var_40 += (((((4088 ? 244 : -1))) ? (~-78) : var_14));
                            var_41 = var_1;
                            var_42 = ((((-9223372036854775791 ? 18 : var_2)) + (-123 / -27)));
                        }
                        var_43 &= max(var_8, var_14);

                        /* vectorizable */
                        for (int i_15 = 2; i_15 < 12;i_15 += 1)
                        {
                            var_44 = (min(var_44, (((var_8 ? 237 : (arr_34 [i_0] [i_0] [i_2] [i_13] [i_15 - 2]))))));
                            arr_50 [i_2] [i_13] [i_15 + 2] = (-99 ? var_4 : var_7);
                            var_45 = (227 ? (17 & var_12) : (((arr_16 [i_1] [i_1] [i_13]) ? var_10 : 34674)));
                        }
                        var_46 = ((((((var_7 ? 27369 : var_9)))) ? ((((-31618 ? 10 : 191)))) : (min(var_18, -227))));
                    }
                }
            }
        }
    }
    var_47 = -4675731920522582827;
    #pragma endscop
}
