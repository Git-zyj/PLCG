/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 = (arr_3 [i_0] [i_0] [i_0]);
                                var_14 = (max(var_14, (((+((-((min((arr_7 [i_0] [i_2]), (arr_9 [i_2])))))))))));
                                var_15 = (((-(arr_9 [i_3]))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_2] = ((((min(0, (min((arr_10 [7] [1] [i_0] [i_0]), 543455851))))) ? ((var_1 ? (arr_12 [i_1] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 + 1]) : ((min(1, var_7))))) : (max(((var_11 ? 1 : var_4)), ((min((arr_12 [i_0] [10] [i_0] [10] [i_0]), 40655)))))));
                    var_16 = ((var_5 >= (((arr_8 [i_1 - 3] [i_1 + 1] [i_1] [10]) ? (arr_8 [i_1 + 1] [i_1 - 1] [i_1] [12]) : (arr_8 [i_1 + 1] [i_1 + 1] [12] [i_1])))));
                    var_17 += ((var_2 ? (arr_3 [i_0] [i_1 - 2] [i_2]) : (((arr_5 [i_0] [16] [i_2]) ? ((~(arr_4 [i_0] [i_1]))) : (arr_10 [i_0] [9] [9] [i_1 - 3])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                arr_20 [21] [16] [15] = (!var_3);
                arr_21 [18] [i_6] [i_6] = (arr_13 [i_5] [i_5] [i_5] [1] [1] [i_6]);
                var_18 = (max(var_18, (((((arr_2 [i_5] [i_6]) & (arr_2 [i_6] [1])))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_27 [i_5] [14] [22] [i_5] [i_5] = ((((((arr_22 [i_7 - 1] [i_7 + 1] [i_8 - 1]) ? (arr_22 [i_7 - 1] [i_7 + 1] [i_8 - 2]) : (arr_22 [i_7 + 1] [i_7 - 1] [i_8 - 1])))) | (((((var_5 ? var_3 : var_0))) ? (arr_26 [i_6]) : var_7))));
                            var_19 = (((((((((arr_7 [9] [i_5]) ^ (arr_11 [i_5] [0])))) ? (arr_9 [i_7 + 1]) : (min(var_4, var_12))))) != ((-(((arr_4 [18] [i_8 - 1]) % 45296))))));
                            var_20 = (max(var_20, ((((((255 ? (arr_10 [i_6] [i_7 - 1] [1] [11]) : (arr_22 [i_7] [i_7 - 1] [i_8])))) ? (min((~219), (arr_5 [i_5] [10] [i_8]))) : (((!(arr_18 [i_5] [i_6] [i_5])))))))));
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(((var_2 ? (var_9 | var_1) : 3405563763)), 109));
    var_22 = (min(var_22, var_0));
    #pragma endscop
}
