/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [12] &= (((((!18446744073709551592) && (arr_8 [i_0] [i_2 - 3] [10] [i_3]))) ? var_1 : (((arr_1 [i_4 + 2]) ? ((max((arr_12 [i_0] [i_0] [i_0] [i_0] [4]), (arr_11 [i_2] [i_2])))) : (arr_3 [i_2])))));
                                var_19 = (max(var_19, (arr_6 [i_1 - 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((max(var_5, (~-793698142))))));
                                arr_23 [i_1] [i_1] = (((((((-3 / (arr_17 [2] [2] [i_1] [i_1] [i_5] [i_6])))) ? ((max(var_4, 65534))) : ((-(arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))))) >= (max(var_17, 0))));
                                arr_24 [i_6] [i_1] [i_2 + 1] [i_1] [i_1] [i_0] = (((max(((var_10 < (arr_1 [11]))), ((!(arr_10 [i_0] [4] [4] [i_6]))))) ? (max((min(65528, 0)), (var_7 || 153))) : ((max(4291662958, (arr_19 [i_6 + 2] [i_2 + 1] [i_2 + 1] [i_1 + 2] [i_1]))))));
                                var_21 = ((((!(arr_14 [i_6] [i_5] [i_2] [i_0] [i_0]))) ? (((arr_8 [i_0] [0] [i_1] [i_2 - 4]) - 232)) : 74));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_30 [i_0] [i_1] [i_1] [i_2] [i_7 + 1] [i_8] = var_9;
                                var_22 = (max(var_22, (((((max((arr_12 [i_0] [i_1] [i_2 - 3] [i_0] [i_8]), (max((arr_0 [i_0] [i_2]), (arr_25 [1] [4] [i_8] [i_7])))))) ? (((arr_9 [i_2] [i_7] [i_8] [i_8 + 2] [i_8]) + (arr_20 [i_8] [i_8] [i_8 - 1] [10] [8] [i_8 + 2]))) : 7575)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_23 ^= (arr_10 [i_0] [i_1 - 1] [i_9 - 1] [i_9]);
                                var_24 = (max(var_24, (((-(0 - 23411))))));
                                arr_35 [i_1] [i_2] [9] = (arr_0 [2] [i_1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 11;i_12 += 1)
                        {
                            {
                                var_25 |= (!(((var_1 + 18446744073709551606) >= (~0))));
                                arr_40 [i_0] [i_1] [i_0] [i_1] [i_12] [i_12] [i_1] = (~(((arr_28 [i_2]) ? (!-21096) : (arr_12 [4] [i_1] [i_1 - 1] [i_2 + 2] [i_1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 1; i_13 < 18;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 21;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 19;i_17 += 1)
                        {
                            {
                                var_26 = (((((5273 % (((arr_42 [i_13 + 2]) - var_16))))) ? var_2 : (((((25 ? var_10 : var_4)) == var_10)))));
                                var_27 = ((+((((arr_52 [i_13] [i_13 - 1]) >= var_7)))));
                                arr_54 [i_13] [13] [i_13] [i_13] [i_13] = 5255;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 20;i_19 += 1)
                        {
                            {
                                var_28 += 88;
                                var_29 -= -127;
                                var_30 *= (((((-5273 ? var_4 : var_10)) + (arr_44 [i_14] [i_18] [i_19]))) != var_16);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 3; i_20 < 21;i_20 += 1)
                    {
                        for (int i_21 = 1; i_21 < 21;i_21 += 1)
                        {
                            {
                                var_31 |= ((((((arr_62 [i_13 + 3] [i_14] [i_13 + 3] [i_13] [i_13] [i_13] [i_13]) << (arr_62 [i_13 - 1] [0] [i_13] [i_20] [16] [i_21 - 1] [i_21])))) || ((!(var_14 / -5266)))));
                                var_32 = ((((((var_17 | var_13) >> (((arr_48 [i_13 - 1] [i_15 - 1] [i_20 + 1] [i_21 + 1]) - 675))))) ? (~var_10) : ((min(((2011255234 << (((((arr_51 [i_13 + 3]) + 30578)) - 1)))), ((~(arr_41 [i_13]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 22;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 22;i_23 += 1)
                        {
                            {
                                arr_74 [i_13] [i_14] [i_14] [i_13] [i_23] = ((((((arr_64 [i_13 + 2] [i_13]) ? var_11 : (arr_64 [i_13 - 1] [i_13])))) ? (arr_64 [i_13 - 1] [i_13]) : (((arr_64 [i_13 + 2] [i_13]) ? var_17 : -9))));
                                arr_75 [i_15] [i_13] = ((-1647557799 ? (((arr_71 [i_13] [i_13] [i_13 + 2] [i_15 - 1] [i_15 - 1]) - var_9)) : (arr_50 [i_23] [i_14])));
                                var_33 = (min(var_33, (arr_69 [i_15])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
