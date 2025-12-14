/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= min(var_15, var_5);
    var_19 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 ^= (((((1 ? ((var_14 ? 1 : 1)) : (arr_3 [0] [0])))) ? ((((((arr_0 [i_0]) ? 0 : 1))) ? var_10 : (1 >= 1))) : (((1 >> 1) ? ((var_11 ? var_0 : (arr_3 [i_0] [1]))) : (arr_0 [i_0 - 1])))));
                arr_6 [1] [i_0] = (((((((var_17 ? 1 : var_16)) << 1))) ? (min((((arr_0 [i_0 - 1]) | 1)), ((max((arr_4 [i_1] [i_1] [i_1]), 1))))) : var_1));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] = ((((((1 ? var_10 : 1)) & (~1))) >> ((((arr_1 [i_0 - 1]) >= 0)))));
                            var_21 = (max(var_21, (max((min(1, 1)), (max((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [1]), 0))))));
                            var_22 = max(((!(((1 ? var_15 : 1))))), (min(var_0, (max(1, 1)))));
                            arr_14 [i_0] [i_0] [i_0] [1] = (~var_7);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    arr_22 [i_4] [i_4] [1] [i_6] = (((arr_19 [i_4] [i_6 - 1]) | (arr_16 [i_4 - 1] [i_5 + 1])));
                    var_23 = ((((max((((arr_18 [i_4] [i_5] [i_4]) ? (arr_16 [i_4] [i_4]) : 1)), (((arr_19 [i_4] [1]) ? (arr_20 [i_4]) : var_0))))) ? ((min((min(1, var_3)), 1))) : ((min((min(1, 1)), (arr_21 [i_4] [i_4]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_28 [i_4] [i_5] [i_6 - 1] [1] [i_5] [1] [1] = min(((!(max(1, 1)))), 1);
                                arr_29 [i_7] [i_4] [i_7] = var_14;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 0;i_10 += 1)
                        {
                            {
                                arr_35 [i_4] [i_4] [i_4] [i_9 + 1] [i_10 + 1] [i_6] = ((1 - (~0)));
                                arr_36 [i_4] [1] [i_6 - 1] [i_4] = ((((1 ? (arr_23 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_4]) : 1)) | ((min((max((arr_30 [i_4 - 1] [1] [i_4] [i_10]), 1)), (max(var_7, 1)))))));
                                arr_37 [i_4] [i_10 + 1] [i_10 + 1] [i_4] [i_10 + 1] = arr_17 [i_4];
                                arr_38 [1] [i_5 + 1] [i_5] [i_6] [i_5 + 1] [1] [i_4] = ((1 ? 1 : 1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
