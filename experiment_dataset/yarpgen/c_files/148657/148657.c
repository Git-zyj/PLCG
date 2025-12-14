/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((max(((min(var_10, var_14)), 1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((((0 ? 1 : 9))) ? ((max(14138, 1))) : (1 && -1344169526)))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = (127 + 8991);
                                var_18 = (!0);
                                var_19 = ((!((var_9 != (arr_8 [i_3] [i_3 + 2] [i_3] [i_3])))));
                                var_20 = var_10;
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 10;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            var_21 = (1 > 1);
                            arr_18 [i_1] [i_1] [5] [i_2] [i_1] [i_6] [i_1] = (arr_9 [i_6] [7] [7] [i_5]);
                        }
                        arr_19 [i_0] [i_1] [i_2] [i_0] [i_5] = ((22586 ? 4294967295 : (((65 ? (arr_14 [i_0] [i_1]) : (arr_14 [5] [2]))))));
                        var_22 = (min(var_22, (834453664 != -107)));
                        var_23 ^= var_0;
                    }
                    for (int i_7 = 3; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        var_24 = (min(var_24, (arr_15 [i_2 - 1] [i_2 - 1] [i_7 - 1] [i_7 - 3] [i_7 - 3])));
                        arr_24 [i_0] [i_2] [i_2] [i_2] = ((~(2147483136 / -516724470)));

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 8;i_8 += 1)
                        {
                            var_25 ^= (~(((var_14 > (arr_23 [i_0] [i_1] [i_1] [i_1] [7])))));
                            arr_27 [i_1] [i_1] [i_2 - 1] [4] [i_7 - 2] [i_1] &= ((arr_2 [i_2 - 1]) ? 3989508464427563323 : var_13);
                            arr_28 [i_2] = (((((var_11 ? var_12 : -102))) != (arr_14 [i_0] [i_0])));
                            var_26 = (!var_2);
                        }
                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 8;i_9 += 1)
                        {
                            arr_31 [i_7] [i_2] [i_0] = (!43279);
                            var_27 = var_5;
                            var_28 -= (arr_10 [i_0] [i_0] [i_2] [i_7] [6]);
                            arr_32 [i_0] [i_7 + 1] [i_2 - 1] [i_7 - 1] [i_7 + 1] [i_1] [i_2] = arr_1 [i_7 + 1];
                        }
                        arr_33 [i_1] [i_2] = 22586;
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_29 *= 255;
                        arr_37 [i_2] = var_6;

                        for (int i_11 = 0; i_11 < 0;i_11 += 1)
                        {
                            arr_41 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_0] = (arr_13 [i_2] [i_2 - 1] [i_2 - 1] [i_10] [i_11 + 1]);
                            arr_42 [i_0] [i_2] [6] [i_10] [4] = ((-(~var_13)));
                            arr_43 [i_0] [i_2] [i_2 - 1] [i_10] [i_11] = var_0;
                            var_30 = arr_16 [i_0] [i_2] [i_2] [i_0];
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_31 = (min(var_31, (((~(arr_26 [i_0] [i_1] [9] [i_10] [i_12]))))));
                            var_32 = (min(var_32, (((((((((var_9 ? -97 : var_3))) ? (arr_36 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_10]) : var_7))) ? (((var_4 ? var_12 : (-102 || 1)))) : (((arr_25 [4] [i_1] [4] [4] [4]) ? (arr_35 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (((((arr_8 [i_12] [i_1] [i_2 - 1] [i_10]) && var_3)))))))))));
                            var_33 = 127;
                            arr_46 [i_12] [i_2] [i_12] [i_2] [5] [i_0] [i_12] = (((arr_34 [i_2] [5]) + (arr_9 [i_0] [i_2 - 1] [i_2] [i_10])));
                            arr_47 [i_2] [9] [i_10] [5] = var_5;
                        }

                        for (int i_13 = 1; i_13 < 9;i_13 += 1)
                        {
                            arr_51 [i_0] [i_2] = var_8;
                            var_34 ^= (1387795133 || var_6);
                            var_35 = (min(var_35, (((~(arr_12 [i_2 - 1]))))));
                        }
                        /* vectorizable */
                        for (int i_14 = 1; i_14 < 10;i_14 += 1)
                        {
                            var_36 += (arr_14 [i_14 - 1] [i_2]);
                            arr_55 [i_2] [i_2] [i_2] [i_2] [i_2 - 1] = (arr_21 [i_0]);
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            arr_58 [i_0] [i_0] [i_0] [i_0] [i_2] = (arr_25 [i_0] [i_0] [i_0] [i_10] [i_10]);
                            arr_59 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2] = (-97 & 72);
                        }
                    }
                }
            }
        }
    }
    var_37 = var_13;
    #pragma endscop
}
