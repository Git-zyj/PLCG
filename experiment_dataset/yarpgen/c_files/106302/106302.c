/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_21 = (min(var_21, ((((((32767 - (~-32767)))) ? (var_10 != var_8) : var_8)))));
                            arr_10 [i_0] [i_0] [i_3] [i_3] [i_0] = (arr_9 [i_0] [i_3]);
                            arr_11 [i_0] [i_3] = (arr_8 [i_0] [i_0] [i_3] [i_0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_18 [i_4] [i_4] [i_4] [i_4] [1] = (((((arr_14 [i_0] [6] [i_5]) ? (arr_4 [i_0] [i_0] [i_0]) : ((var_10 - (arr_7 [1] [3] [i_4] [3]))))) << (arr_16 [i_0] [i_1] [i_4 - 1])));
                            var_22 = ((var_8 + (arr_1 [i_1] [i_0])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 3; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_27 [i_0] [i_1] [i_1] [2] [i_6] [12] [i_7] = var_4;
                                var_23 = (min(var_23, (arr_17 [i_0] [i_1] [i_0] [i_1])));
                            }
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_24 *= (min((min((max((arr_26 [i_9] [i_9] [4] [i_9] [i_9]), var_12)), var_10)), ((((((32756 ? (arr_16 [i_0] [i_0] [i_9]) : 2490935813))) ? ((max((arr_6 [6] [6] [i_11 + 3]), var_17))) : (arr_23 [i_0] [i_0] [i_9]))))));
                                var_25 = ((((((((-2147483647 - 1) ? 1592009868 : -9223372036854775780)) != (((max((arr_6 [i_11] [i_0] [i_0]), var_6))))))) <= -58734));
                                arr_37 [i_11] [i_10] [19] [i_1] [i_0] [i_11] = (!1595322535);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_26 = (min((min(((-9223372036854775788 ? (arr_2 [i_0]) : var_2)), (arr_38 [i_13] [i_12] [i_1] [i_0]))), (min(((var_11 / (arr_8 [i_0] [i_0] [i_12] [i_0]))), (arr_36 [i_0] [1] [i_0] [1] [i_13] [i_0] [i_1])))));
                                arr_43 [3] [6] [i_12] = (((((((((arr_12 [i_12] [i_12]) || (arr_38 [i_13] [i_12] [i_9] [i_1])))) & (var_14 & var_7)))) * (((arr_31 [i_0]) ? (arr_28 [i_13] [1] [10]) : ((((arr_19 [i_1] [21] [1] [1]) ? var_17 : var_13)))))));
                                var_27 ^= (arr_8 [i_0] [i_0] [i_9] [i_9]);
                            }
                        }
                    }
                    var_28 = ((+(max(5730, (max((arr_4 [i_9] [14] [14]), var_5))))));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
                {
                    arr_46 [i_0] [i_1] [i_14] |= 0;
                    arr_47 [i_0] [i_14] [i_0] = (var_17 / var_18);
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            {
                                arr_52 [i_1] [i_14] [i_1] [i_14] [i_0] = (((var_12 >= (arr_35 [i_0] [5] [6] [6]))));
                                arr_53 [12] [12] [i_14] [14] [i_14] = ((-(arr_13 [i_15])));
                                var_29 -= (((arr_45 [i_1] [i_1] [i_1]) || (arr_12 [i_1] [i_15 - 1])));
                            }
                        }
                    }
                }
                for (int i_17 = 0; i_17 < 22;i_17 += 1) /* same iter space */
                {
                    arr_56 [i_17] = ((((((arr_25 [i_0] [i_0] [i_1] [i_0] [i_17]) ? (max(1, var_4)) : (!65535)))) + (min(63488, -9223372036854775788))));
                    arr_57 [i_17] [i_1] [i_17] = (((1 && 26706) != (arr_44 [i_0] [i_17] [1])));
                    arr_58 [4] [4] [i_17] [i_17] = (arr_22 [i_17]);
                    arr_59 [i_17] [i_1] [i_17] [i_17] = (((((arr_25 [2] [i_1] [i_17] [i_0] [i_17]) <= ((min(var_4, var_13))))) ? (arr_6 [i_0] [i_1] [i_17]) : (((-9223372036854775807 - 1) ? (arr_8 [i_0] [1] [i_17] [i_17]) : -32761))));
                    var_30 *= (~127);
                }
            }
        }
    }
    var_31 &= (max((((((var_8 ? var_19 : var_14))) ? 7319749527542737807 : (!var_19))), var_16));
    #pragma endscop
}
