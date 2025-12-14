/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_1, (((-2147483647 - 1) ? 5562357338182904547 : -5562357338182904548))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = var_3;
                    var_17 = ((var_7 ? (min((var_10 << var_7), (arr_0 [i_0] [i_2]))) : (arr_6 [8] [i_1])));

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_18 ^= (arr_10 [i_1] [i_1 - 1] [i_1] [i_2] [i_3 - 2]);
                        var_19 += ((-(arr_7 [13] [i_2] [i_3 - 2])));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_20 = (arr_4 [i_0 + 4] [i_1 + 1] [i_1 + 1]);
                            var_21 -= (max((((arr_2 [i_0 + 4]) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 + 1]))), ((5562357338182904547 ? 49152 : (arr_4 [5] [2] [i_4])))));
                            arr_13 [i_4] [i_3] [i_2] [i_1] = ((((arr_8 [i_1 + 1] [i_1 - 1]) ? var_6 : var_11)) / 25994);
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_22 = (max((((arr_0 [i_0 + 1] [i_0 - 2]) ? var_4 : (arr_0 [i_0 + 1] [i_0 + 1]))), (!127)));
                            var_23 ^= arr_5 [i_2] [i_1] [5];
                            var_24 = (max(var_24, (arr_10 [i_0] [2] [i_0 + 3] [i_3 - 2] [12])));
                            var_25 = ((((((((var_5 ? var_9 : var_13))) ? (arr_8 [i_0 + 4] [i_1 + 1]) : (arr_15 [i_2] [i_3 - 1])))) ? (arr_7 [i_0 + 4] [i_5] [i_2]) : ((-(arr_14 [i_0] [i_0 - 2] [i_0 + 4] [i_0 - 2] [i_0 + 4] [i_0] [13])))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [10] [i_2] [i_2] [9] &= (arr_1 [i_0 - 2]);
                        var_26 = (9966416478638204001 * -1616453192);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_27 *= 21;

                        for (int i_8 = 4; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, ((((((var_4 ? 1616453192 : (arr_24 [i_0] [i_0] [11] [i_8])))) ? (-8347 & 95) : var_8)))));
                            var_29 = (min(var_29, ((-5562357338182904548 ? (arr_20 [i_0] [i_1 + 1] [i_0 + 4] [i_7]) : var_7))));
                            arr_25 [i_0] [i_0] [i_7] [i_0] [i_0] = var_11;
                            var_30 = (arr_20 [8] [i_1] [i_2] [i_7]);
                        }
                        for (int i_9 = 4; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_31 |= (((arr_2 [i_0 + 3]) ? (arr_27 [i_0 + 3] [13] [i_9 + 2] [i_9] [i_9]) : 58563));
                            var_32 = (min(var_32, (arr_14 [10] [i_1] [i_1] [i_2] [i_7] [i_9 + 1] [i_9])));
                            arr_28 [i_7] [i_7] [i_2] [i_1] [i_7] = ((!(arr_12 [i_9 - 4] [i_9] [9] [i_9 + 2] [i_9])));
                            var_33 ^= (arr_11 [i_0 + 2] [i_1] [i_2] [12] [i_0]);
                            var_34 = var_7;
                        }
                        for (int i_10 = 4; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_35 = (((arr_10 [i_1 - 1] [i_1 + 1] [i_7] [i_10] [i_10 + 2]) == (arr_10 [i_1 - 1] [i_10 + 2] [i_10 - 1] [i_10] [i_10 - 3])));
                            var_36 = var_10;
                            var_37 = ((1 ? -5562357338182904547 : 65535));
                        }
                        for (int i_11 = 4; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            var_38 = (((arr_11 [i_0 + 1] [i_1 - 1] [i_1 + 1] [i_7] [i_7]) ? var_8 : (arr_11 [i_0 - 1] [i_1 - 1] [i_1] [13] [i_1])));
                            arr_34 [i_7] [i_2] [i_7] [i_11] = (-2026573876 & 39523);
                        }
                    }
                    for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                    {
                        arr_37 [i_0] [i_1] [i_2] [i_12] = (((((((((arr_1 [i_0]) ? (arr_32 [i_0] [i_0] [i_1] [i_2] [1]) : (arr_32 [i_0] [i_0] [i_0] [i_0] [12])))) ? (arr_16 [i_0] [i_1] [i_2] [i_12]) : ((-(arr_9 [i_0] [i_1] [i_2])))))) ? (((((arr_5 [i_0] [i_1 - 1] [i_12]) + 2147483647)) << (((arr_21 [i_0 + 1] [i_0] [i_0 - 2] [i_0] [i_0 + 1]) - 25485)))) : ((-2026573895 ? 1732760855 : -2026573875))));
                        var_39 = (min(1732760868, ((((var_14 && (arr_26 [i_0] [i_1] [i_2] [i_12] [i_0]))) ? (arr_33 [i_0] [i_1]) : (arr_31 [i_1 - 1] [i_0 - 1])))));
                        var_40 = ((arr_23 [i_1]) ? (arr_15 [7] [i_1 + 1]) : 58563);
                        arr_38 [i_0] [i_12] [i_2] = (((((var_0 ? (arr_2 [i_1 - 1]) : var_0))) ? ((((-98 ? 1504629469200914261 : -1616453192)) - (arr_36 [i_0 + 4] [i_0 + 4] [i_0] [i_0]))) : var_1));
                    }
                }
            }
        }
    }
    #pragma endscop
}
