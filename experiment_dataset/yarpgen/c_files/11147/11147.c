/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((-((var_9 ? 32767 : var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 = (32764 >= 1);
                                var_15 -= min(var_9, (arr_13 [i_0] [8] [i_2 + 2] [i_3] [i_4]));
                                arr_14 [i_0] [i_2] [i_2] [i_1] [i_4 + 1] &= ((-((+((var_9 ? (arr_12 [i_0] [6] [i_2] [i_3] [i_4]) : var_6))))));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_23 [i_5] = ((var_2 ? var_6 : (arr_18 [i_0] [i_1] [i_5] [i_6] [i_7])));
                                var_16 ^= var_1;
                            }
                        }
                    }
                    var_17 = ((var_11 ? (!var_1) : (((arr_17 [i_5] [i_5] [1]) ? var_9 : var_8))));
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                arr_32 [i_0] [i_0] [i_8] = (arr_0 [i_9 - 1] [9]);
                                arr_33 [i_10] = (arr_0 [i_1] [i_1]);
                            }
                        }
                    }
                    var_18 *= (~var_2);
                    arr_34 [i_8] = ((-1 ? (((((((arr_11 [i_0] [i_1]) | (arr_5 [i_0] [i_1] [i_0] [i_0])))) ? (arr_4 [i_1] [i_1]) : 1))) : (max(var_6, ((max((arr_11 [i_1] [i_0]), 1)))))));
                    var_19 = var_0;
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    arr_37 [i_0] &= ((+((((max((arr_3 [8]), var_8))) ? (((1 ? (arr_26 [i_11] [i_11] [i_11] [i_1] [i_11]) : (arr_16 [i_0] [i_11] [i_11] [i_11])))) : ((var_5 ? (arr_4 [8] [i_11]) : (arr_19 [i_1] [i_0] [i_1])))))));

                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        var_20 = ((32764 ? 1982310738208050670 : 4));
                        var_21 = (max(1, var_8));

                        for (int i_13 = 3; i_13 < 23;i_13 += 1)
                        {
                            arr_45 [i_0] [i_1] [i_1] [i_11] [i_12] [i_12] [i_13] = (min(((1 ? 1 : (arr_41 [i_13 + 1] [i_13 + 2] [i_13 - 2] [i_13 - 2] [i_13]))), (142 >= 251)));
                            var_22 = var_6;
                        }
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            var_23 &= (((((var_10 & (arr_13 [i_0] [i_1] [i_11] [i_12] [i_14])))) ? ((var_1 ? (arr_13 [i_14] [i_12] [i_11] [i_1] [i_0]) : (arr_13 [i_0] [i_0] [i_14] [i_1] [i_14]))) : ((~(arr_13 [i_0] [i_1] [i_11] [i_12] [i_11])))));
                            var_24 = (max(var_24, (((((min(26, 1))) ? ((var_9 ? ((min(var_3, 31))) : ((-(arr_27 [i_0] [i_0] [i_11] [i_12] [i_14]))))) : ((((arr_42 [i_14] [i_12] [i_11] [i_11] [i_1] [i_0]) < (arr_5 [i_0] [i_1] [i_0] [i_12])))))))));
                            var_25 ^= ((!((min((arr_28 [i_1] [3]), ((var_9 ? (arr_28 [i_1] [i_0]) : (arr_41 [i_0] [i_1] [i_11] [i_12] [i_14]))))))));
                            var_26 += (min(((((min(var_10, var_1))) ? (arr_46 [i_0] [i_0] [i_0]) : (min(170, var_4)))), -17817));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
