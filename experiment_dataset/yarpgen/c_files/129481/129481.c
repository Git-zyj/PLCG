/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = ((-(((-3595 - var_3) ? 113 : (arr_3 [5] [i_0] [12])))));
                var_18 = (((((var_2 + var_12) / var_3)) | 130));
                var_19 = var_10;
                var_20 = (max(((-69 ? (arr_2 [i_1 - 1]) : ((-1991217938 ? var_0 : var_15)))), ((-var_1 ? (arr_3 [i_1 - 2] [i_1 - 2] [i_1 - 3]) : var_9))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 = (((222 ^ 115) >> (16606 - 16600)));
                                var_22 = (arr_5 [i_1] [i_4 + 1]);
                            }
                        }
                    }
                    var_23 += (arr_12 [i_0] [6] [i_2 - 1]);
                }
                for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_24 = ((7761 & 1403433543) ? -52 : ((((((min(-31167, -54))) + 2147483647)) << (((max(var_12, (arr_16 [i_0] [i_0]))) - 1891575055022422068)))));
                                var_25 = (arr_18 [i_1] [i_1]);
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_26 = ((var_0 != ((((var_5 ? var_12 : 1)) / (154 * 30146)))));
                        var_27 = (min(var_27, ((((!1) ? ((64190 / (((arr_9 [i_0] [7]) << (var_14 - 202))))) : (arr_2 [i_0]))))));
                    }
                    var_28 = -37;
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_29 = (min(((~(arr_16 [i_9] [i_9]))), ((var_0 ^ ((max(154, var_13)))))));
                                var_30 = var_16;
                            }
                        }
                    }
                }
                for (int i_11 = 2; i_11 < 13;i_11 += 1) /* same iter space */
                {
                    var_31 = ((((var_10 ? 65 : ((var_6 - (arr_10 [i_0] [i_1] [i_0] [i_0])))))) ? var_7 : (((max((max(var_0, var_5)), (arr_25 [2] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_32 |= ((!((!(arr_20 [4] [i_11] [i_11] [i_0])))));
                                var_33 ^= (max((((((1 ? 66 : 24159)) * var_11))), 2601995632));
                            }
                        }
                    }
                }
            }
        }
    }
    var_34 = var_5;
    var_35 = (~var_4);
    var_36 |= ((+(((~var_10) | (var_7 || -1489747658)))));
    #pragma endscop
}
