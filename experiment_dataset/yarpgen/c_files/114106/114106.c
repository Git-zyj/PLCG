/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_1] = ((!(((min((arr_0 [i_0] [i_1]), (arr_1 [i_0] [1])))))));
                                var_10 = (((((((min((arr_1 [i_2 + 1] [i_0]), (arr_4 [5]))))) - ((var_0 + (arr_9 [i_0] [i_0] [i_0] [10] [1]))))) + (arr_5 [i_1] [i_1] [i_1])));
                                var_11 = min((arr_11 [i_4]), ((((min(42909, 2960))) ? (arr_7 [5] [5] [i_2 - 1] [1]) : ((-(arr_2 [i_1] [i_1] [i_1]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_12 &= ((((((arr_18 [i_0] [10] [i_7]) ? (((((arr_17 [i_1] [i_5] [i_1] [i_7]) > (arr_16 [i_0]))))) : (arr_23 [9] [8] [i_7] [i_7 - 2] [i_7] [i_7 - 2] [i_7])))) ? (max((((arr_5 [i_6] [i_5] [i_6]) ? (arr_12 [i_0] [i_1] [9] [9] [i_7 - 1]) : var_4)), (((!(arr_4 [i_1])))))) : (arr_16 [i_1])));
                                var_13 *= (arr_1 [i_0] [i_5]);
                                var_14 |= (arr_21 [i_0] [i_1] [i_1] [i_5] [i_6] [i_1]);
                                var_15 = (max(var_15, ((max((((arr_23 [i_7] [i_7 + 1] [0] [i_7 - 3] [i_7] [i_7 - 1] [i_7]) / (arr_19 [11] [11] [i_5] [i_5] [11] [i_7 - 1]))), (((((max(62574, -1))) - (((arr_0 [i_0] [i_1]) ? (arr_22 [i_0] [i_0] [6] [i_5] [i_6] [i_7]) : (arr_0 [i_0] [6])))))))))));
                                var_16 = (arr_8 [i_7 + 1] [i_1] [i_1] [i_0]);
                            }
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_17 = (max(var_17, ((min((arr_6 [i_0] [i_8]), (max((arr_6 [i_0] [i_1]), (arr_6 [i_0] [i_8]))))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_33 [3] [i_1] [i_9] [6] [i_8] [i_1] [i_0] = 64516110138826487;
                                arr_34 [i_8] [i_1] = ((((((arr_9 [i_0] [i_1] [8] [i_9] [i_10]) ? (arr_16 [i_0]) : ((max(var_3, (arr_16 [i_8]))))))) ? 512 : ((((arr_11 [i_9]) ? (arr_6 [i_0] [i_0]) : (arr_6 [i_1] [i_8]))))));
                                var_18 = ((((arr_31 [i_0] [i_0] [i_8] [1] [1]) - (min((arr_26 [i_0] [i_0] [i_0] [i_10]), var_5)))));
                                var_19 = ((((((min(var_8, (arr_5 [8] [i_8] [i_9]))) / (arr_12 [i_0] [i_0] [i_0] [i_9] [i_10])))) ? ((((max(2961, 2965))) ? (arr_16 [i_0]) : (max((arr_18 [i_1] [i_1] [i_9]), var_0)))) : (max((((arr_25 [4]) ? (arr_20 [i_8] [i_1] [1]) : (arr_18 [i_0] [i_0] [i_0]))), (-1 * 18014398509481983)))));
                            }
                        }
                    }
                    var_20 = (min(var_20, (((var_7 ? (((var_3 * var_3) >> (((((arr_20 [i_0] [3] [i_0]) / (arr_5 [10] [i_1] [10]))) - 69506626931891)))) : (((((arr_32 [i_0] [i_1] [9] [9] [i_1] [1] [5]) <= (arr_20 [i_0] [i_1] [i_8]))))))))));
                }
                arr_35 [i_0] [5] [i_1] = (max((max(var_1, (arr_23 [1] [i_1] [i_1] [1] [i_0] [3] [i_0]))), ((max(2969, 42921)))));
                var_21 = (min(var_21, ((((((arr_3 [i_0] [i_1] [i_1]) * (((max((arr_13 [i_0] [i_0] [i_0] [i_1] [8]), (arr_7 [i_0] [2] [8] [i_1]))))))) + (((((arr_3 [i_0] [i_0] [i_0]) ? var_8 : (arr_15 [i_0] [i_0] [0] [1]))) / (((((arr_27 [i_0] [8] [i_1] [i_1]) && (arr_4 [i_0]))))))))))));
            }
        }
    }
    var_22 = (min(var_22, (((((min((min(var_6, var_3)), (max(var_9, var_6))))) ? var_8 : ((var_1 / (((var_0 ? var_9 : var_2))))))))));
    #pragma endscop
}
