/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min(((min(24905, var_5))), ((2910 >> (-2910 + 2941)))))) || var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, ((min(((max((var_8 - 2910), (var_6 - var_6)))), ((~(min(var_8, var_7)))))))));
                                var_12 ^= (((((2933 ? (min(4294967295, 12633373405846517879)) : ((min(var_6, 115)))))) ? (!var_4) : var_8));
                            }
                        }
                    }
                    arr_13 [0] = ((-((-((var_4 ? 3 : var_1))))));

                    for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_13 = ((((((min(var_0, (min(-2933, var_4))))) + 2147483647)) >> ((((((min(var_9, var_9))) ? (((min(var_5, var_5)))) : var_7)) - 184))));
                        arr_17 [i_0] [i_5] [7] = ((((var_6 ? var_3 : var_6))) ? 1 : (max(var_7, var_1)));

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            var_14 ^= ((1 ? var_3 : var_4));
                            var_15 += ((0 ? 1075102910005436637 : (var_2 && var_2)));
                            arr_20 [i_0] [i_2] |= ((var_1 ? var_5 : var_1));
                            var_16 = var_2;
                        }
                        /* vectorizable */
                        for (int i_7 = 4; i_7 < 14;i_7 += 1)
                        {
                            arr_24 [i_7 - 1] [i_5] [i_2] [i_1] [i_1] [i_5] [1] = var_7;
                            var_17 = ((var_6 ? var_5 : var_2));
                            arr_25 [5] [i_5 - 2] [2] [5] [i_5] = ((~(var_8 | var_3)));
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            arr_30 [i_0] [i_1] [i_2] [i_5 - 1] [i_8] &= ((~((140 ? (((min(2933, 1)))) : (max(var_0, var_9))))));
                            var_18 = ((((max(var_7, var_3))) ? 1 : (((((7025854182795194758 ? var_2 : var_6))) ? var_7 : (var_2 / var_4)))));
                            var_19 = ((((max((((var_3 ? var_2 : var_8))), ((11 ? var_6 : var_9))))) ? ((((max(var_3, var_5))))) : (var_2 + var_9)));
                        }
                    }
                    for (int i_9 = 3; i_9 < 16;i_9 += 1) /* same iter space */
                    {
                        arr_33 [14] [i_1 - 1] [15] [i_9 - 2] = (min(1, (min(var_5, var_0))));
                        arr_34 [i_0] [i_0] [i_2 - 2] [i_9 - 2] [i_1] &= (max(var_3, (min(var_6, (min(var_1, var_7))))));
                        var_20 = min(((((min(var_9, var_1))) ? ((var_2 ? var_1 : var_8)) : (((var_2 ? -2038 : var_2))))), (((!(var_1 - var_8)))));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_21 *= ((((max((min(var_1, 32761)), (min(var_9, -2911))))) ? (((var_6 ? var_4 : var_8))) : (((((var_0 >> (2933 - 2915)))) ? (max(var_0, 3414957897092452088)) : var_0))));
                            var_22 &= var_7;
                            var_23 = (max(var_23, ((max(1, (1905178179 == 32767))))));
                            arr_38 [i_10] = ((((min(((min(var_8, var_4))), (max(2910, 0))))) ? (max(((var_3 ? var_0 : var_3)), (var_6 & 1))) : ((((!((max(var_2, var_0)))))))));
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 0;i_13 += 1)
                        {
                            {
                                var_24 = ((((min(var_9, var_3))) && (((-6428491444077287589 ? var_5 : var_1)))));
                                arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((var_5 ? (((((max(14801482764152818986, var_0)) == (var_6 % var_8))))) : var_9));
                                var_25 ^= ((((max(var_5, (((var_9 || (-32767 - 1))))))) ? (min((min(var_2, var_7)), ((var_4 ? 130 : var_3)))) : (min(var_4, var_9))));
                            }
                        }
                    }
                    var_26 = ((-(((var_2 + var_9) ? var_3 : (min(var_8, var_9))))));
                    var_27 = (min(((max(var_4, (!2949)))), (((((var_9 ? var_0 : var_6))) ? ((var_3 ? var_4 : var_8)) : var_8))));
                    arr_49 [i_0] [i_0] [i_1] [i_0] = (min((((325766179 ? 1 : 169))), ((min(32767, 18052202767300479870)))));
                    arr_50 [12] [i_1] [i_11] [i_11] = var_9;
                }

                /* vectorizable */
                for (int i_14 = 2; i_14 < 16;i_14 += 1)
                {
                    var_28 = (min(var_28, var_3));
                    var_29 = (min(var_29, (((((var_8 ? var_6 : 32767))) ^ var_1))));
                    var_30 = (var_8 & var_2);
                }
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    arr_56 [i_0] [i_0] = (max((min((~1), (max(-2950, var_7)))), var_6));
                    arr_57 [i_0] [10] [i_0] = var_9;
                    arr_58 [i_0] [i_1 + 1] [i_1] [i_15] = ((var_4 ? (min(-var_1, (max(6428491444077287588, 394541306409071745)))) : (min(var_7, (max(var_7, var_3))))));
                }
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    arr_62 [i_0] [6] [i_1] [i_16] = (max((((130 ? var_5 : -4294967295))), (min(((min(32767, var_0))), ((var_8 ? var_9 : var_0))))));
                    arr_63 [i_0] [i_0] [i_1 + 1] [i_16] = max((max((min(var_3, var_6)), ((max(var_5, var_0))))), (((!(((var_1 ? var_7 : var_3)))))));
                }

                for (int i_17 = 1; i_17 < 13;i_17 += 1)
                {
                    var_31 = (max(var_31, ((min(var_0, var_8)))));
                    var_32 = ((((max(240, -2927))) ? ((14801482764152818986 ? 9028357571767184359 : 394541306409071745)) : var_1));
                    var_33 = (min(240, (max((var_1 / var_3), (1 + var_4)))));
                    arr_66 [i_17] [i_17] [i_17] [i_0] = (((((((min(var_8, 1))) ? var_5 : (0 % var_2)))) && ((!((min(var_8, var_4)))))));
                    var_34 = (3645261309556732629 < 394541306409071726);
                }
            }
        }
    }
    var_35 = var_7;
    #pragma endscop
}
