/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_16 += (((((var_0 ? (arr_1 [i_0 + 1]) : var_11))) ? ((min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1])))) : (var_6 / var_2)));
        var_17 = ((~(max(var_10, ((var_2 ? var_6 : (arr_2 [i_0] [i_0 - 1])))))));
        arr_3 [i_0] &= (((((arr_2 [i_0 - 1] [i_0 - 1]) ? (arr_2 [i_0 + 1] [i_0 - 1]) : (arr_2 [i_0 + 1] [i_0 - 1]))) | ((var_15 ? var_9 : (arr_2 [i_0 - 1] [i_0 - 1])))));
    }

    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1 + 3] [4] = (((var_1 > (arr_6 [i_1 - 1] [i_1 + 4]))) ? (((var_0 >> var_4) ? var_4 : (((arr_4 [i_1]) ? var_10 : (arr_2 [i_1 + 3] [19]))))) : (((var_12 && (((-(arr_0 [i_1]))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_18 = (((arr_1 [i_5]) > (arr_1 [i_5])));
                                arr_19 [i_1 + 3] [i_1 + 3] [i_4] [9] [i_5] = (((arr_10 [1] [1] [i_4]) > (arr_4 [i_1])));
                                arr_20 [i_4] = (arr_5 [i_1 + 4]);
                            }
                        }
                    }
                    var_19 |= -94;

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            var_20 = var_8;
                            var_21 = (max(var_21, (arr_12 [i_1 + 3] [i_2] [i_3] [i_7 - 1])));
                            var_22 = ((((arr_18 [4] [i_2] [1] [1] [i_1 + 2] [i_2]) ? (arr_18 [i_1] [10] [i_7] [1] [i_1 + 3] [1]) : (arr_18 [6] [i_2] [i_3] [i_6] [i_1 - 2] [i_2]))) | ((((arr_18 [i_1] [i_1] [i_2] [i_6] [i_1 + 4] [4]) >= (arr_18 [i_1 + 3] [i_1] [i_2] [i_6] [i_1 + 1] [i_6])))));
                        }
                        var_23 |= ((((max(var_9, ((var_9 << (var_7 - 539254808)))))) ? (min(-1, 0)) : var_5));
                        arr_26 [i_1] = (min((((arr_22 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1]) ? var_8 : (arr_1 [i_1 + 2]))), (1 + 198)));
                        var_24 = (arr_25 [14] [10] [i_6] [i_6] [i_6] [i_6] [i_6]);
                        var_25 = ((var_10 | ((-(arr_12 [i_1] [i_1 + 2] [i_1] [i_1])))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_31 [i_8] [12] [i_2] [i_3] [i_8] = (arr_14 [i_1] [i_2] [i_3] [i_8] [i_8] [i_3]);

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_26 = (min(var_26, var_10));
                            var_27 = (((-87 ^ 2660106512) ? ((((((arr_9 [i_1 + 4]) + 2147483647)) >> (var_1 - 15245933318762047076)))) : (((((var_1 ? var_12 : (arr_14 [i_1 + 4] [4] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1])))) ? var_14 : ((max(var_4, var_8)))))));
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_28 = var_9;
                            var_29 = ((((var_8 ? (arr_22 [i_1] [i_1] [i_1 - 2] [i_1 + 4]) : var_4)) ^ ((((arr_22 [i_1 + 3] [7] [i_1 - 2] [i_1 + 4]) > (arr_36 [i_1] [i_1 - 2] [i_1] [i_1 + 2] [i_10]))))));
                            var_30 *= (((arr_6 [i_1 + 4] [i_1 + 3]) << (((((((-(arr_34 [i_2] [1] [i_1] [6] [i_10])))) ? (arr_23 [i_10] [i_10] [3] [i_3] [i_2] [9] [i_1 + 3]) : (((var_4 ? (arr_13 [i_1] [i_2] [i_3] [i_8] [i_8] [i_10]) : (arr_9 [i_1])))))) + 4782834459522988389))));
                            var_31 = ((((((arr_17 [i_1 + 4] [i_1 - 1]) - var_1))) && ((((arr_17 [i_1 + 4] [i_1 - 1]) ? var_2 : (arr_17 [i_1 + 4] [i_1 - 1]))))));
                        }
                        var_32 = (((((arr_1 [i_1 + 2]) ? (arr_9 [i_1 - 1]) : (arr_11 [i_1 - 1] [1] [i_3]))) / (((arr_9 [i_1 - 1]) ? var_13 : (arr_1 [i_1 - 2])))));
                    }
                }
            }
        }
        var_33 = (min(var_33, ((min(1, -839787906)))));
    }
    for (int i_11 = 3; i_11 < 12;i_11 += 1)
    {
        var_34 ^= (((((((((arr_38 [i_11]) ? var_7 : var_0))) ? (((max(65535, 14772)))) : var_5))) ? (arr_25 [i_11] [i_11 - 3] [i_11] [i_11] [i_11] [i_11] [i_11]) : ((14756 ? 21795 : 3813395106))));
        arr_40 [12] = (~var_13);
    }
    var_35 = ((var_2 ? ((var_10 ? var_14 : (((var_14 ? var_4 : var_13))))) : ((max(2660106512, -20)))));
    var_36 = (max(var_36, var_13));
    #pragma endscop
}
