/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 *= (((((arr_2 [i_1 + 1] [i_1 - 3] [i_1 - 1]) << (((arr_2 [i_1 - 2] [i_1 - 2] [i_0]) - 32556)))) % var_3));
                            var_15 = (arr_9 [i_0] [i_0]);
                        }
                    }
                }
                var_16 = var_12;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            {
                var_17 = (((-1663775764 <= 4294967271) ? (((arr_1 [i_4 - 4]) ? (arr_1 [i_4 - 2]) : var_9)) : (((arr_1 [i_4 + 1]) ? (arr_1 [i_4 - 4]) : (arr_1 [i_4 - 1])))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_18 = (((arr_13 [i_4 - 1]) ? (arr_8 [i_7]) : var_9));
                                var_19 = ((0 ? (!10) : (((arr_22 [i_4 + 1] [i_5] [i_6] [i_4 - 4] [i_4 + 1]) ? var_1 : (min((arr_15 [i_4] [i_4]), (arr_0 [i_7] [i_5])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
