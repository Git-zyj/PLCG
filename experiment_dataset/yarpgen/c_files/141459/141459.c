/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((var_11 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_1]))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [1] [i_3] [i_0] = ((var_17 ? (((arr_9 [i_0] [i_2 + 1] [i_0] [i_2 + 1] [i_2 + 3] [i_4]) ? (arr_9 [i_1] [i_2 + 1] [i_0] [i_2 + 3] [i_2 + 4] [i_4]) : (arr_9 [i_2] [i_2 + 1] [i_0] [i_2 + 3] [i_2 - 2] [i_3]))) : (1 + var_3)));
                                var_20 *= (((((arr_3 [i_2 + 1] [i_2 - 2] [i_2 + 4]) - (arr_2 [i_2] [i_3] [i_3]))) % var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 &= var_6;
    var_22 = var_17;
    var_23 = var_4;
    var_24 ^= ((var_13 && (~var_10)));
    #pragma endscop
}
