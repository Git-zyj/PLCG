/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_9));
    var_20 &= var_13;
    var_21 = ((2034183194 > ((min(var_0, (var_4 != 1786150405))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [1] [i_0] [1] [i_0] = (max((var_8 || var_7), (((!var_0) ? (arr_1 [16]) : 1846925555))));
                            arr_11 [i_0] [i_0] [i_0 + 1] [i_3] |= (~var_9);
                            var_22 = (min(var_22, (arr_7 [i_1] [i_3])));
                        }
                    }
                }

                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_4] [i_5] [i_6] = (((arr_7 [i_4 - 1] [i_5 + 1]) * ((~((max(1, var_14)))))));
                                arr_21 [1] [i_1] [i_1] [i_0] [3] = ((((max((~var_3), 65514))) ? ((((var_17 != 1) ? ((max(var_14, var_18))) : (arr_1 [i_4 + 2])))) : ((var_8 ? (arr_0 [i_0]) : var_4))));
                                arr_22 [i_0] [i_1] [i_1] [i_1] [i_1] = (max((((var_13 / (var_15 != 1)))), (max(((-2995622000286988561 ? var_13 : (arr_14 [i_0] [16] [i_4] [i_6]))), ((min(var_18, var_17)))))));
                                arr_23 [i_1] [i_1] [i_5] [i_5 + 1] [i_0] = (((!var_13) + (((arr_13 [i_0] [i_4] [i_5 - 1]) ^ -2995622000286988575))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_1] [i_4 - 1] [i_7] [i_0] = -8681879721797865807;
                                arr_29 [i_1] [i_1] [i_0] [17] [11] = ((((((2147483646 ? -115 : (arr_27 [i_0] [i_8] [i_7] [i_4] [i_1] [i_0]))) ? var_10 : var_4))));
                                arr_30 [i_0] [i_1] [i_1] [i_1] [i_1] = ((32768 ? (((arr_2 [i_0]) ? ((32751 ? var_5 : (arr_14 [i_0 - 1] [i_1] [i_4] [i_4 - 1]))) : (arr_2 [i_0]))) : var_11));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 21;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 21;i_13 += 1)
                        {
                            {
                                arr_42 [i_9] [7] [i_9] [i_12] [i_13] = ((var_0 ? (((var_14 != (max((arr_18 [i_13] [i_12 + 1] [i_11 - 1] [i_10 + 1] [i_10] [i_9] [i_9]), var_14))))) : ((((min(2995622000286988565, (arr_33 [i_9] [i_10 + 1] [i_9]))) != (~2995622000286988568))))));
                                arr_43 [i_11] [i_12 - 1] [i_12] = ((var_8 ? ((((((var_1 ? var_15 : (arr_25 [i_9] [i_12] [i_9] [i_9] [i_9] [i_9])))) ? var_13 : var_0))) : (max((arr_39 [i_13] [i_13 - 1] [i_12 + 1] [i_11 + 2] [i_10] [i_9]), (arr_31 [i_9])))));
                                var_23 = (((arr_9 [i_9] [i_9] [i_10] [i_9] [i_12 + 2] [i_13]) / var_3));
                                arr_44 [i_12] = var_7;
                                arr_45 [i_9] [i_12] [i_11] [i_9] [i_13 + 1] [i_10 - 3] [i_9] = var_15;
                            }
                        }
                    }
                }
                arr_46 [i_9] [i_10] [i_10] = (arr_25 [i_9] [18] [i_9] [i_9] [i_9] [i_9]);
                arr_47 [9] [i_10] &= var_11;
                arr_48 [i_10 - 2] [i_9] = (((((~1522458778894083059) + 9223372036854775807)) >> (((arr_8 [i_9] [i_10 + 1] [22] [0]) - 3110385877102399242))));
            }
        }
    }
    #pragma endscop
}
