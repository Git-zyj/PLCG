/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_12 = (min(var_12, (7 && 32767)));
                            var_13 = (max(var_13, var_1));
                            var_14 = (max(var_14, (arr_10 [i_0] [i_1] [i_3] [6] [i_1])));
                            var_15 = (min(var_15, var_7));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_18 [2] [i_1] [10] [i_5] &= var_9;
                            var_16 = 1;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 3; i_6 < 9;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_33 [i_6] [i_7] [i_7] [i_7] [i_7] [5] [i_7] = (((((var_1 ? var_10 : ((max((arr_5 [i_6] [i_7]), 4199870315)))))) ? ((8 ? 18446744073709551613 : 4929868489386359567)) : ((((var_10 ? var_5 : var_11))))));
                                arr_34 [0] [i_7] [i_8] [i_9 - 2] [i_10] |= 13516875584323192064;
                                var_17 *= ((max((arr_23 [i_8]), (arr_14 [i_6 - 3] [i_9] [i_9 + 1]))));
                            }
                        }
                    }
                    var_18 = (1 ? 4929868489386359567 : (((((((arr_19 [i_8]) ? 4929868489386359567 : var_11)) < (arr_4 [i_6]))))));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_19 = var_11;
                                var_20 -= (((150 ? 4 : (((arr_32 [i_6] [i_7] [0] [i_6] [i_11] [i_8]) ? (arr_26 [i_6] [i_12]) : 1)))));
                                var_21 = ((28 >> (234 - 224)));
                                var_22 = ((-(!15)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 3; i_13 < 9;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 0;i_17 += 1)
                        {
                            {
                                var_23 = (max(var_23, (((((+((25 ? (arr_46 [i_13] [i_15]) : var_0)))) << (min((arr_2 [i_13] [i_14]), (max(var_1, var_4)))))))));
                                var_24 = var_6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 12;i_19 += 1)
                        {
                            {
                                arr_58 [i_13] [i_13] [i_15] [11] = ((33 ? (arr_14 [i_13] [i_13] [3]) : (((((((arr_50 [i_13] [10]) >> (arr_54 [i_18] [i_14] [i_13] [i_18])))) || 1)))));
                                var_25 = 1;
                                var_26 ^= (((var_9 && 1) + (((max(247, var_8))))));
                                var_27 = (max(var_27, 1334828025651278538));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 12;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 12;i_21 += 1)
                        {
                            {
                                var_28 = (((arr_41 [i_13]) ? (arr_14 [i_13 - 3] [i_13] [i_13 - 2]) : (((arr_14 [i_13 - 3] [i_13] [i_13 - 3]) - (arr_41 [i_13])))));
                                var_29 = ((127 ? 1 : 6957240338847849092));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
