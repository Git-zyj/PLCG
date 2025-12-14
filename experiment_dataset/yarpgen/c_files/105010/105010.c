/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (arr_1 [i_1]);
                arr_4 [6] [i_0] [i_1] &= var_0;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_13 = 22334;
                            arr_9 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] = ((((var_1 ? var_9 : -8677433211725802387)) * ((max((arr_8 [i_0] [i_1] [i_1 - 1] [i_0] [i_1 + 1]), var_6)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            {
                arr_14 [i_5] [12] = (arr_11 [i_4 - 1] [13]);
                arr_15 [i_5] = ((((((var_9 ? (arr_11 [i_4 + 1] [i_4 + 1]) : 12191870012816159362)))) ? (max(var_4, var_1)) : (arr_12 [i_4 - 2] [i_4] [i_4 - 1])));
            }
        }
    }
    var_14 = (((var_8 + var_4) ? var_2 : var_2));
    var_15 = var_5;
    #pragma endscop
}
