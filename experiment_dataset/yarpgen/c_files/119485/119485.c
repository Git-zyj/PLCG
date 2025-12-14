/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_2] [i_1] = -1;
                                arr_15 [i_4] [i_3] [i_2] [i_0] [i_0] [i_0] [i_0] = (min((((var_2 == (((-680911901668369204 == (arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0]))))))), (max(((~(arr_0 [i_3]))), var_8))));
                            }
                        }
                    }
                }
                var_11 = (((arr_13 [i_1] [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_0 - 2]) ? ((((var_2 > (arr_13 [i_0 + 2] [i_1] [i_0 + 1] [i_0 - 2] [i_0 + 2]))))) : (((arr_10 [i_1] [i_1] [i_0] [i_0 + 2] [i_0] [i_0 - 2] [i_0 + 2]) / (arr_13 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1])))));
                var_12 = var_10;
                arr_16 [i_0] [i_0] = (arr_4 [i_0]);
            }
        }
    }
    var_13 = var_2;
    var_14 = (max(var_14, (!var_9)));
    var_15 = -1723132237;
    #pragma endscop
}
