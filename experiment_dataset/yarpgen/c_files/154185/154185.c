/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (arr_1 [9]);
                var_13 *= var_2;
                arr_4 [i_0] [i_1] = (arr_2 [i_0] [i_1] [9]);

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_14 ^= (max(((min((!var_8), 41))), -2026917171309847615));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [1] [i_2] [i_1] = (max((max((arr_9 [i_0] [i_2] [i_2] [i_1] [i_4]), (var_0 % var_2))), -41));
                                arr_15 [i_1] = ((!((((arr_11 [i_1 - 1] [i_1] [i_3 + 1] [i_0 + 1] [i_1 - 1]) ? 41 : 69)))));
                                arr_16 [i_1] [i_1 - 1] [i_2] [6] [i_4] [i_2] = (((((var_10 ? (arr_9 [i_3 + 2] [i_3 + 3] [i_3] [i_1] [i_3 - 1]) : (arr_9 [i_3 + 3] [i_3 + 2] [i_3 + 3] [i_1] [i_3 + 2])))) ? (arr_9 [i_3 - 1] [i_3] [i_3 + 3] [i_1] [i_3 - 1]) : -var_9));
                                var_15 *= (arr_9 [i_0] [i_2] [i_2] [i_2] [i_3 - 1]);
                                arr_17 [5] [i_1 - 1] [i_1 - 1] [i_1] [i_4] = 17040415531436411038;
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 7;i_5 += 1)
                {
                    arr_20 [i_0] [0] [i_1] [i_5] |= (arr_19 [i_0] [i_0] [i_1] [i_0]);
                    var_16 = (max(var_16, ((((((var_6 + var_10) ? (arr_13 [i_1] [i_1 - 1] [i_1] [i_1] [i_1]) : (min(43867, 2890784417)))) - (arr_2 [i_0 - 2] [i_1] [7]))))));
                    arr_21 [i_1] [i_1] [i_5 + 1] = (max(var_3, ((((max((arr_11 [i_0] [i_1] [i_1] [i_5] [i_0]), (arr_7 [i_0] [i_1] [i_1])))) ? var_9 : (arr_5 [i_1])))));

                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        var_17 = (-1386521261 & 127);
                        var_18 = var_4;
                        arr_24 [i_1 - 1] [2] [i_6] [i_1] = var_7;
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 7;i_7 += 1)
                    {
                        arr_28 [i_0] [i_0] [i_5] [i_0] [i_0] [i_1] = ((+(((arr_6 [i_1] [i_5] [i_1]) / 60488))));
                        arr_29 [i_1] [i_1] = (arr_13 [i_0] [i_0] [i_5] [i_0] [i_7]);
                        var_19 = (min(var_19, (arr_5 [i_0])));
                        arr_30 [i_1] = ((var_5 ? (arr_11 [i_0 - 1] [i_1] [i_0 - 1] [i_5 + 3] [i_1]) : (arr_11 [i_0] [i_1] [i_0] [i_5 - 1] [i_0])));
                    }
                    for (int i_8 = 4; i_8 < 9;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_20 = var_5;
                            var_21 *= (((((var_10 / (arr_19 [i_1] [i_0] [i_5 + 3] [i_5 + 1])))) ? var_10 : (min((arr_19 [i_0 - 1] [i_8] [i_8] [i_5 + 1]), (arr_32 [i_0 + 1] [i_1] [i_5] [i_5 - 1] [i_0] [i_8 + 1])))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_22 ^= ((((((arr_23 [i_0] [i_10] [i_5] [6]) ? (arr_1 [i_0]) : (arr_11 [i_0] [i_8] [i_5 + 2] [i_8] [i_10])))) ? (arr_11 [8] [i_0] [8] [i_8] [i_10]) : (((arr_13 [i_0] [i_1 - 1] [5] [i_8] [5]) ? (arr_10 [i_0 - 2] [i_1 - 1] [i_8] [i_10]) : var_6))));
                            arr_38 [i_1] = (((arr_22 [4] [i_1] [i_1]) | (arr_22 [i_1] [i_1] [9])));
                        }
                        var_23 = (((((((arr_8 [i_5 + 3] [i_0] [i_1]) || (arr_8 [i_5 - 1] [9] [i_1]))))) != (((arr_8 [i_5 + 3] [i_5 + 3] [i_1]) ? (arr_8 [i_5 - 1] [i_0 + 1] [i_1]) : (arr_8 [i_5 + 1] [i_1 - 1] [i_1])))));
                    }
                }
            }
        }
    }
    var_24 = var_10;

    for (int i_11 = 3; i_11 < 21;i_11 += 1)
    {
        var_25 = (min((arr_40 [i_11]), (max(var_6, (arr_40 [i_11])))));
        arr_41 [i_11] = (((arr_39 [i_11 - 1] [i_11 + 2]) ? var_10 : 18446744073709551608));
    }
    var_26 *= (!3266104634398516483);
    var_27 = -var_0;
    #pragma endscop
}
