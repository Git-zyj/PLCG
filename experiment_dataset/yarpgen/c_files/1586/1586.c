/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((((var_7 & (arr_6 [i_0] [i_0] [i_0]))) ^ ((var_3 + (arr_2 [i_1])))));
                var_10 = (((arr_6 [i_0] [i_0] [i_0]) / (((arr_6 [i_0] [i_1] [i_0]) ? (arr_6 [i_0] [i_1] [i_1]) : var_9))));
                arr_9 [i_0] [i_1] [i_0] = (max((((arr_5 [i_1] [i_0]) * var_5)), (((arr_7 [i_0]) + var_4))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_11 = ((~(((-10 + 2147483647) >> (min((arr_16 [9] [17] [i_2] [17] [i_2] [i_2] [17]), var_7))))));
                                var_12 = ((~(arr_16 [16] [16] [16] [i_3] [i_4] [i_4] [16])));
                                var_13 = (min(var_13, (((((min(var_7, (max(-7, -25))))) ? -15 : var_5)))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_14 &= ((27262 ? ((((var_9 ? var_9 : (arr_2 [i_5]))) - var_0)) : (((((arr_6 [i_6] [i_6 - 1] [i_7]) < -6))))));
                    var_15 = var_0;
                }
            }
        }
    }
    var_16 = (!var_6);
    #pragma endscop
}
