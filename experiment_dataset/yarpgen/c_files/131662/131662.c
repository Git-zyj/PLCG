/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = var_0;
                    var_13 = (max(((var_3 ? var_3 : (arr_6 [0] [i_0 + 4] [i_0 + 4] [i_0 + 4]))), (arr_6 [i_0] [i_0 + 4] [i_0 + 4] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = 2199006478336;
                                var_14 &= ((-(max((max(var_6, var_5)), (arr_8 [i_0] [i_0] [i_0])))));
                                var_15 = ((((((arr_9 [i_0 + 3] [i_1] [i_2] [i_3 - 2]) ? var_10 : 2199006478337))) ? (max(2199006478349, var_1)) : (arr_9 [i_0 + 3] [i_1] [i_2] [i_3 - 2])));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_0] [i_2] |= (max((((arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0]) << (((arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]) - 29723)))), ((max((arr_12 [i_0] [i_0 - 1] [8] [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                arr_28 [i_5 + 3] [i_5] [i_5 + 3] [i_5] [i_6] = ((((var_3 < (arr_15 [i_5]))) ? (max(((((arr_23 [i_5] [i_6 + 1] [i_5] [i_5] [i_9] [i_6]) ? (arr_17 [i_6]) : var_5))), ((var_1 ? var_7 : 1)))) : ((((arr_26 [i_6 + 3] [i_6] [i_8 + 2]) ? (((arr_23 [i_5] [i_5] [i_7 - 1] [i_5] [1] [i_6]) - var_3)) : ((max(1, 1))))))));
                                arr_29 [i_9] [i_6] [i_7] = (max(var_3, (((var_9 ^ var_4) ? (arr_23 [i_6] [i_5 - 1] [i_5 - 1] [i_8] [i_8 + 2] [i_6]) : (var_6 | 18446744073709551615)))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            {
                                var_16 = (max(var_16, (((((((2199006478348 <= (arr_16 [i_11]))) ? 0 : ((var_2 ? (arr_37 [i_5] [i_5 + 2] [i_5 - 2] [i_5 + 2] [i_10]) : var_5)))) < (((((max(var_1, var_2))) ? (arr_23 [1] [1] [i_11] [i_5 + 1] [i_6 + 2] [i_10]) : (max((arr_23 [i_5] [i_6] [i_10] [i_11] [i_11] [i_5]), var_8))))))))));
                                arr_38 [10] [i_6] [i_6] [i_11] [i_6] = ((!((max(29405, 13593121456217720316)))));
                                var_17 = max((((-29405 >= var_9) ? ((((!(arr_18 [i_5]))))) : (arr_25 [i_5] [i_6 + 4] [i_6] [i_6 + 4] [i_11 + 2] [i_12]))), ((((arr_20 [i_6]) <= -13593121456217720328))));
                                var_18 = (max(var_18, (((var_9 - ((19844 ? ((max(var_10, (arr_23 [i_5] [i_6] [i_5] [1] [i_12] [i_5])))) : ((var_5 ? var_7 : var_8)))))))));
                                var_19 -= ((var_1 ? (((~(arr_15 [i_5 + 4])))) : ((var_2 ? var_2 : (arr_23 [i_5] [i_11] [i_11] [i_11] [i_12] [i_5])))));
                            }
                        }
                    }
                }
                var_20 = (max(var_20, 19844));
            }
        }
    }
    #pragma endscop
}
