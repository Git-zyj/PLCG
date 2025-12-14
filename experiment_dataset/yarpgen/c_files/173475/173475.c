/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 2] [i_0] = var_11;
        arr_3 [i_0] [i_0 + 3] = ((((((max((arr_1 [i_0 - 1] [i_0]), 4397778075648))) ? (!4) : (max(var_5, (arr_0 [i_0 + 1]))))) < (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_13 = var_2;
                                var_14 = (((arr_17 [5] [3] [6] [i_5] [7] [10]) / -var_11));
                                arr_18 [4] &= ((var_8 ? var_8 : (arr_10 [i_2] [6] [0] [i_5])));
                                arr_19 [2] [i_5] [i_2] [12] [10] [i_5] = ((-(~var_6)));
                            }
                        }
                    }
                    arr_20 [11] [i_2] [6] [11] = (((arr_5 [i_1 + 2]) != (arr_1 [i_1] [4])));

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_24 [i_1] [11] [i_3] [1] = ((var_2 >> (((arr_17 [i_1] [i_1 + 2] [10] [1] [i_3 - 1] [i_3]) - 4850))));
                        arr_25 [6] = (((arr_21 [i_1] [i_2] [i_1 + 1] [8] [3]) ? (arr_21 [12] [6] [i_1 + 3] [i_3] [0]) : (arr_21 [5] [i_1] [i_1 - 2] [0] [3])));
                        var_15 += ((var_9 >= (var_8 % var_0)));

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_16 = var_6;
                            arr_28 [i_1] [11] [4] [i_6] = (((-4397778075628 ? 12953 : 0)));
                            var_17 ^= (((arr_16 [0] [i_1 - 2] [i_3] [i_3] [i_3 + 1]) & var_1));
                        }
                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            arr_33 [9] [6] [i_3 + 1] [9] [i_8] [9] = var_5;
                            var_18 = (max(var_18, (((var_12 ? var_2 : var_8)))));
                            var_19 -= var_2;
                            var_20 = (min(var_20, (~0)));
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            arr_38 [i_6] = arr_10 [i_1] [i_2] [i_1] [12];
                            var_21 = ((-(arr_34 [0] [i_3 + 1])));
                        }
                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            var_22 *= (((arr_39 [i_1] [5] [i_3 - 1] [i_10 + 3] [i_10] [i_10 - 1] [i_10]) ? (arr_39 [i_3] [3] [i_3 - 1] [10] [i_3] [i_10 - 1] [i_10]) : var_2));
                            arr_41 [6] [9] [6] [i_10] = var_3;
                            var_23 = (min(var_23, (-11162 ^ var_9)));
                        }
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        arr_44 [5] [i_11] [i_11] [i_3 - 1] [i_11] = arr_16 [i_11] [6] [2] [0] [i_11];
                        arr_45 [i_11] [2] [i_3] [10] [i_2] = ((var_10 / (arr_8 [i_1 - 2])));
                        var_24 = (((arr_35 [i_1] [i_3 - 1] [i_1] [7] [5]) ? (arr_35 [1] [i_3 + 1] [9] [2] [i_3 + 1]) : var_8));
                        var_25 = (arr_10 [2] [2] [i_3] [2]);
                        var_26 = (max(var_26, (arr_11 [8] [0] [i_3] [i_1] [i_3] [7])));
                    }
                    arr_46 [3] = var_12;
                }
            }
        }
        arr_47 [3] = ((~(arr_37 [i_1] [11] [11] [1] [i_1 - 1])));
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        arr_50 [4] [1] |= var_0;
        var_27 = (max(var_27, ((~((~(max(189, var_9))))))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 22;i_14 += 1)
            {
                {
                    var_28 = (min((((~(~32749)))), ((0 ? -4 : 8196165478241011390))));
                    arr_57 [0] [i_13] [1] = ((((max((arr_56 [19] [i_14 + 3] [i_14 - 1]), var_4))) >= ((2147483647 / (arr_49 [i_14 + 2])))));
                    arr_58 [20] [21] [20] = (((((~(arr_54 [i_12] [i_13])))) - ((((max(var_3, 593044130))) ? var_8 : (((arr_51 [i_13] [13]) / var_5))))));
                }
            }
        }
    }
    var_29 = var_4;
    var_30 ^= var_10;
    #pragma endscop
}
