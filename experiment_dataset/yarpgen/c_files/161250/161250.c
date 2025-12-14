/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = ((var_7 - ((((!var_10) && var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (!var_4);
                arr_7 [i_0] [i_1 - 3] = var_15;

                /* vectorizable */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    var_20 = var_6;
                    var_21 = (var_4 >= var_9);

                    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        var_22 = var_0;
                        arr_13 [i_0] [i_2 - 3] [i_1 - 1] [i_0] = var_14;
                        arr_14 [i_0] [i_1 - 2] [i_2] [20] [2] = (var_17 != var_14);
                        arr_15 [5] [i_0] [i_0] [i_0] = var_4;
                        var_23 *= (!var_9);
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_24 = (max(var_24, (((var_14 || (!var_2))))));
                        var_25 = var_15;
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_26 += (6825 == 67108863);
                        var_27 = var_6;
                        arr_20 [i_0] [18] [14] [14] [i_0] = (var_16 + var_5);
                        var_28 = (!-var_8);

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_24 [i_0] [12] [i_2 - 2] [i_0] [i_6] = (((!var_14) <= var_16));
                            var_29 = var_4;
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_27 [i_1] [20] [i_0] [i_1] [i_0] = (((var_11 << (var_3 - 33226))));
                            arr_28 [i_0] [2] [i_2] [2] [15] = var_11;
                        }
                        for (int i_8 = 3; i_8 < 18;i_8 += 1) /* same iter space */
                        {
                            var_30 += (((var_2 * var_4) / var_14));
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (5670 ^ 47656);
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [4] = var_17;
                            arr_34 [i_0] [i_1] [i_2] [i_5] [i_0] [i_8] = (((var_16 - var_4) >> (((~var_13) + 178))));
                        }
                        for (int i_9 = 3; i_9 < 18;i_9 += 1) /* same iter space */
                        {
                            arr_37 [i_9] [i_0] [i_2] [i_0] [i_0] = var_4;
                            var_31 = var_7;
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            {
                                arr_46 [i_0] [3] [i_10] [i_0] [i_11] [i_12] = (-5676 % var_7);
                                var_32 = (((!-var_15) | (((((((var_4 + 2147483647) << (((var_4 + 3882) - 2))))) && var_10)))));
                            }
                        }
                    }
                    arr_47 [i_0] [i_0] = var_3;
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 18;i_14 += 1)
                        {
                            {
                                arr_54 [i_0] [i_13] [i_10] [i_10] [i_1] [1] [i_0] = ((var_12 == (((~var_7) * var_4))));
                                var_33 = (var_4 + var_10);
                                var_34 = var_9;
                                arr_55 [i_0] [i_0] [5] [i_0] [i_0] [i_0] = ((var_17 ^ ((((var_4 ^ var_7) ^ var_8)))));
                            }
                        }
                    }
                }
                for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
                {
                    arr_58 [i_0] = var_6;
                    arr_59 [i_0] [i_0] [0] [1] = var_8;
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 20;i_16 += 1)
                    {
                        for (int i_17 = 3; i_17 < 20;i_17 += 1)
                        {
                            {
                                var_35 = ((((((~(~var_0))) + 2147483647)) >> (var_3 - 33224)));
                                var_36 = (max(var_36, (((var_16 * (((!var_12) ^ (~var_14))))))));
                                arr_65 [10] [1] [i_0] [i_1] [10] [i_0] [i_17] = ((((~(var_13 & var_7))) != var_16));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
