/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 = 0;
                                var_20 += (min(125, (max((((1 ? 0 : 1))), (min(var_5, var_11))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] = (((((var_1 ? 1 : 0))) * (min(0, 7741129588027009971))));
                    var_21 ^= (max((((arr_12 [i_0] [i_0 + 1] [i_0 + 1] [i_1] [i_1] [i_2] [i_2]) ? (!1) : var_1)), ((min((arr_0 [i_0 - 1]), 2358)))));
                    var_22 = min((min((arr_5 [i_0 + 1]), var_10)), ((16382 ? 2177973297819327235 : -10835623)));
                }
            }
        }
    }
    var_23 = var_13;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    arr_25 [i_5] [i_5] = (((((!(arr_21 [i_5] [i_6] [i_7] [i_7])))) <= ((max((arr_15 [i_7]), (arr_15 [i_6]))))));
                    arr_26 [i_5] = -var_4;
                }
            }
        }
    }
    var_24 = var_16;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            {
                var_25 = ((var_16 ? (((!(arr_15 [i_8])))) : (arr_23 [i_8] [i_8])));
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 15;i_12 += 1)
                        {
                            {
                                var_26 = (max((((-(arr_19 [i_8] [i_11] [i_12])))), (min((max(1, var_3)), (arr_28 [i_11 - 1] [i_12 - 1])))));
                                var_27 = (max((((!-16382) ? (arr_35 [i_12 + 1] [i_12 - 1] [i_11]) : (min(var_18, 3094897258360298113)))), ((((arr_35 [i_12 - 1] [i_11 - 1] [i_9]) ? (arr_27 [i_11 - 1]) : var_13)))));
                                var_28 &= ((1 ? ((min(1, (max((arr_22 [i_12 - 1] [i_10] [i_9]), var_15))))) : (min((min((arr_38 [i_8] [i_9] [i_10] [i_11] [i_12]), 15351846815349253483)), (arr_24 [i_9])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
