/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_4 ? var_9 : var_4));
    var_14 = var_1;
    var_15 = max(((((((var_6 ? var_5 : var_0))) || var_5))), ((((var_7 ? var_1 : var_10)) * (!var_11))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 += (((!var_6) ? var_6 : ((var_7 ? var_11 : var_2))));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            arr_14 [i_4] = (!-var_6);
                            var_17 = var_11;
                        }
                        for (int i_5 = 4; i_5 < 9;i_5 += 1)
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] = (var_9 * var_0);
                            var_18 = (min(var_18, var_4));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_19 += (~var_2);
                            var_20 = (min(var_20, (((!((((var_2 + 2147483647) << (((var_11 + 2963372067462094793) - 23))))))))));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_21 = (min(var_21, (((var_7 ? var_3 : (~var_0))))));
                            arr_26 [i_0] [i_0] [i_1 + 3] [i_2] [i_3] [i_7] [1] = var_2;
                            var_22 = (min(var_22, ((((((var_7 ? var_7 : var_0))) ? -var_8 : ((var_5 >> (var_2 + 141))))))));
                            var_23 = (((var_12 / var_8) ? ((var_3 ? var_5 : var_10)) : (((var_4 ? var_0 : var_6)))));
                        }
                        var_24 |= (((((var_0 ? var_0 : var_7))) ? (((var_0 ? var_2 : var_3))) : ((var_4 ? var_8 : var_10))));
                        var_25 = (((((var_12 ? var_4 : var_0))) ? var_1 : var_2));
                    }
                }
            }
            var_26 = (var_4 * var_6);
            /* LoopNest 2 */
            for (int i_8 = 4; i_8 < 9;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 10;i_9 += 1)
                {
                    {
                        var_27 *= (var_12 || var_12);
                        var_28 = ((!(((var_7 ? var_7 : var_7)))));
                        var_29 *= (((~var_12) ? (var_7 < var_10) : ((var_1 ? var_11 : var_11))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {

                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        var_30 = ((((var_9 ? var_3 : var_6))) / ((var_11 ? var_4 : var_5)));
                        arr_41 [i_12] [i_0] [10] [i_12] = (((var_9 ? var_11 : var_10)));
                    }
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        var_31 = ((var_7 ? var_10 : var_6));
                        var_32 = var_2;
                    }
                    var_33 *= -480744390;
                    var_34 = (min(var_34, (((~((var_6 ? var_9 : var_12)))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 9;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                {
                    var_35 = (min(var_35, (-var_7 && var_10)));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 12;i_17 += 1)
                        {
                            {
                                var_36 = (var_10 < var_2);
                                var_37 |= (((var_7 && var_3) * ((var_10 ? var_3 : var_8))));
                            }
                        }
                    }
                    var_38 = var_5;
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 12;i_18 += 1)
    {
        arr_58 [i_18] = (((~var_2) || (((var_1 ? var_10 : var_8)))));
        var_39 = (((var_8 || (((var_11 ? var_1 : var_4))))));

        for (int i_19 = 0; i_19 < 12;i_19 += 1)
        {
            var_40 = (((((var_11 ? var_10 : var_11))) ? -var_5 : (((var_6 ? var_4 : var_6)))));
            arr_61 [i_18] = ((((((var_6 && var_9) ? ((var_3 ? var_0 : var_9)) : ((max(var_8, var_11)))))) ? (~var_4) : (max(var_3, -var_9))));
        }
        for (int i_20 = 0; i_20 < 12;i_20 += 1)
        {
            var_41 = (max(var_3, ((~((var_6 ? var_5 : var_10))))));
            arr_64 [1] [i_20] = (((((((max(var_12, var_5))) ? var_8 : (var_6 || var_3)))) ? (min(((var_8 ? var_12 : var_5)), -var_11)) : ((min((var_5 && var_12), var_1)))));
        }
    }
    for (int i_21 = 3; i_21 < 8;i_21 += 1)
    {
        arr_67 [i_21] = ((((-var_12 && (((var_7 ? var_0 : var_12)))))));
        var_42 ^= (var_12 ? (((var_7 ? var_9 : var_0))) : (((((var_9 ? var_6 : var_7))) ? var_5 : (~var_0))));
    }
    #pragma endscop
}
