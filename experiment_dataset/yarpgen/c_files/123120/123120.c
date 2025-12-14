/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_11));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = (((~var_13) < ((var_13 + ((var_1 ? var_4 : var_2))))));
        var_18 = var_7;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_19 = (((~var_13) ? (var_12 % var_9) : (!var_10)));

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_20 *= ((-0 != ((var_7 ? -117 : 0))));
                            var_21 = (max(var_21, (((-9223372036854775806 ? 2 : -32758)))));
                            var_22 = (((!var_13) ? ((var_10 ? var_6 : var_14)) : (((var_11 ? var_9 : var_5)))));
                            arr_13 [i_2] [i_4] = (((((255 ? 245 : 1))) ? ((var_9 ? var_12 : var_2)) : var_8));
                        }
                    }
                }
                arr_14 [i_2] [i_0] [i_0] = ((var_12 ? var_1 : var_10));

                for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, (-var_14 - var_8)));
                    var_24 = ((-(var_10 % var_1)));
                    var_25 *= ((var_2 ? (var_12 / var_2) : (var_7 * var_15)));
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    var_26 = (max(var_26, var_14));
                    var_27 = (((((var_13 ? var_6 : var_10))) ? ((var_10 ? var_4 : var_5)) : var_15));
                    var_28 += (((((var_2 ? var_14 : var_10))) ? -var_10 : var_8));
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_29 = (max(var_29, ((((!var_10) ? (((48 ? 15 : 127))) : ((var_3 ? var_13 : var_14)))))));
                    var_30 = var_9;
                }
            }

            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                arr_23 [i_0] [i_0] [i_8] [i_8] = 48;
                arr_24 [i_8] [i_1] [i_8] = (((((var_3 ? var_4 : var_2))) ? -var_10 : var_8));
                arr_25 [i_8] [i_1] [i_8] = ((((var_12 ? var_2 : var_12)) >= var_2));
            }
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                var_31 = (min(var_31, (~var_1)));
                var_32 = (min(var_32, ((((var_1 ? var_1 : var_6))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            arr_34 [i_0] [i_1] [8] [2] [i_1] [10] &= (((var_1 < var_10) ? -var_7 : ((var_12 ? var_1 : var_10))));
                            arr_35 [i_9] = (((((var_1 ? var_3 : var_2))) ? var_11 : var_10));
                            arr_36 [i_9] [1] = (((((var_1 ? var_4 : var_7))) ? ((var_6 ? var_12 : var_2)) : (var_4 <= var_1)));
                            arr_37 [i_0] [i_0] [i_9] [i_0] [i_11] [i_1] [i_1] &= ((((var_5 ? var_12 : var_4)) % ((var_6 ? var_9 : var_1))));
                            var_33 -= (((((var_11 ? var_4 : var_15))) ? var_15 : (((var_4 ? var_8 : var_12)))));
                        }
                    }
                }
                var_34 = -var_5;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 8;i_13 += 1)
                    {
                        {
                            arr_42 [i_0] [i_0] [i_0] [8] [i_0] [i_9] = (-var_14 == var_0);
                            var_35 = ((((var_7 ? var_2 : var_15))) ? ((var_3 ? var_1 : var_8)) : ((var_5 ? var_15 : var_11)));
                        }
                    }
                }
            }
            for (int i_14 = 3; i_14 < 7;i_14 += 1)
            {

                for (int i_15 = 1; i_15 < 8;i_15 += 1)
                {
                    arr_50 [i_0] [i_14] [i_0] [i_0] = ((!(((var_13 ? var_2 : var_15)))));
                    var_36 = (min(var_36, (((~(!var_14))))));
                }

                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    arr_53 [i_16] [i_14] = (~var_10);
                    arr_54 [i_14] = ((!(~var_6)));
                }
            }
            arr_55 [i_0] [i_1] = (((((var_5 ? var_11 : var_7))) * ((var_12 ? var_1 : var_15))));
        }
        for (int i_17 = 2; i_17 < 10;i_17 += 1)
        {

            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {

                for (int i_19 = 0; i_19 < 11;i_19 += 1) /* same iter space */
                {
                    var_37 += (((((-var_2 ? ((var_0 ? var_4 : var_15)) : var_2))) ? ((((!(!var_10))))) : var_3));
                    var_38 = ((-101 ? (~-1) : (((~432345564227567616) ? ((31457280 ? 245 : -6)) : 1))));
                    arr_62 [i_0] [i_0] [i_0] [i_17] [i_18] [6] &= (((((-((var_1 ? var_12 : var_6))))) ? (((var_4 ? var_3 : var_12))) : var_0));
                }
                /* vectorizable */
                for (int i_20 = 0; i_20 < 11;i_20 += 1) /* same iter space */
                {

                    for (int i_21 = 0; i_21 < 11;i_21 += 1)
                    {
                        var_39 = (max(var_39, (((var_0 ? (!var_8) : var_5)))));
                        var_40 = (max(var_40, (((!(((var_2 ? var_11 : var_13))))))));
                        var_41 = (~var_11);
                        var_42 *= ((var_8 == (var_3 * var_5)));
                    }
                    for (int i_22 = 0; i_22 < 11;i_22 += 1)
                    {
                        var_43 = (max(var_43, ((((((var_7 ? var_3 : var_10))) ? -var_6 : (((var_1 ? var_12 : var_12))))))));
                        var_44 = ((~(~64)));
                        var_45 -= ((((var_9 ? var_5 : var_2)) % ((var_5 ? var_8 : var_12))));
                        arr_72 [i_18] [i_18] = ((var_4 && var_9) ? ((var_8 ? var_8 : var_10)) : (!var_6));
                    }
                    arr_73 [i_0] [i_17] [i_18] [i_18] = ((-127 ? 0 : 126));
                }
                var_46 += (var_14 ? ((var_6 ? var_13 : ((var_15 ? var_9 : var_6)))) : var_11);
                var_47 = var_13;
            }
            var_48 = var_14;
        }
        arr_74 [i_0] [i_0] = (!(((~((var_4 ? var_6 : var_14))))));
    }
    var_49 += (((!(((var_2 >> (var_1 - 11589824515960845882)))))));
    #pragma endscop
}
