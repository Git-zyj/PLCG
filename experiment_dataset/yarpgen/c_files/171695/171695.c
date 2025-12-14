/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((min(-var_0, (((var_4 <= (arr_2 [i_0])))))))));
                arr_6 [i_0] [i_0] [i_1] = max(((max(-var_5, ((2428199350 ? var_1 : 2600288029))))), (min(2428199336, (((arr_4 [i_0] [i_0]) ? (arr_1 [i_0]) : 255)))));
                arr_7 [i_0] = (1 > 240);
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = -var_10;
        arr_11 [i_2] [i_2] = (((var_11 | 3) ? (((arr_9 [i_2]) ? (arr_9 [i_2]) : 227)) : (((arr_9 [i_2]) ? var_5 : (arr_9 [i_2])))));
    }
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_18 = (min(var_18, (arr_15 [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                {
                    arr_22 [i_5] = ((~(max(((~(arr_19 [i_3] [i_4] [i_5]))), ((max(var_12, 1)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_30 [2] [i_4] [i_5 + 3] [i_6] [i_7] = 36347;
                                arr_31 [11] [i_4] [i_5] [i_5] [i_4] [i_4] = (-(max((arr_12 [i_3] [i_3 - 2]), 218)));
                            }
                        }
                    }
                }
            }
        }
        arr_32 [i_3] [i_3] |= (arr_0 [2]);
    }
    #pragma endscop
}
