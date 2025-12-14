/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (max(0, ((((((arr_2 [i_0] [i_1 + 1]) & 58353))) ? (arr_4 [i_2] [i_1] [i_0]) : var_14))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 = ((((((arr_0 [i_1]) ? var_18 : var_2)) * var_15)));
                                var_22 = (!(((~(arr_12 [i_0] [8] [i_1 + 1] [i_3] [i_3 - 1])))));
                                var_23 = (((arr_14 [10] [i_1 + 1] [7] [i_3 + 3] [i_4]) <= (arr_14 [i_0] [i_1 + 1] [i_2] [i_3 + 3] [i_4])));
                                var_24 = (min(var_24, ((((((~(arr_12 [i_3] [i_3 + 4] [i_1] [i_1] [i_1 + 1])))) ? (!-var_19) : (arr_3 [i_1 + 1] [i_3 + 3]))))));
                            }
                        }
                    }
                    var_25 ^= (((((7837931180417481990 ? 3 : (var_12 & var_7)))) ? -var_6 : ((max((var_8 + var_9), 59630)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_26 -= (((((58353 ? (arr_11 [i_0] [i_1 + 1] [9] [1] [i_6] [1]) : (arr_11 [6] [i_1 - 1] [i_2] [6] [i_6] [i_6])))) ? (((var_11 ? 122 : 2506))) : (arr_11 [9] [i_1 + 1] [i_1 + 1] [i_5] [i_6] [9])));
                                var_27 = var_16;
                                var_28 = ((((2898355194 ? 58362 : ((-(arr_18 [i_0] [i_0] [i_1] [1] [i_0] [i_0] [i_1]))))) <= 53974));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = var_0;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    arr_29 [i_9] = (((((0 + (arr_28 [i_8] [2])))) ^ (arr_27 [i_8] [i_8])));
                    arr_30 [i_7] [i_8] [i_8] = 19;
                    var_30 = var_8;
                    var_31 = (max(-19, (((arr_20 [i_8] [i_9]) | (arr_20 [i_7] [18])))));
                }
            }
        }
    }
    #pragma endscop
}
