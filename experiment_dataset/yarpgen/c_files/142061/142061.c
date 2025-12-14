/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [21] [21] = var_3;
                arr_6 [i_0] = (arr_0 [i_1]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [11] [i_1] [5] [i_2] [i_3] [i_4] = var_3;
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = (arr_9 [i_2 + 1] [9] [i_2] [i_2 + 1]);
                            }
                        }
                    }
                    var_13 = 124;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 6;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                arr_23 [i_5] [i_5] [i_6] = (max((((arr_0 [i_6]) ? (arr_0 [i_5 + 2]) : (arr_0 [i_5 + 4]))), (((var_12 < (arr_0 [i_6]))))));
                var_14 = (min(var_14, (arr_2 [21] [13] [3])));
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 6;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 7;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 7;i_9 += 1)
                        {
                            {
                                var_15 = (arr_18 [i_8]);
                                var_16 = (min(var_16, (arr_29 [i_9] [i_9] [i_9] [i_9 + 1] [i_9 - 2] [i_9 + 1])));
                            }
                        }
                    }
                }
                arr_32 [i_5 + 2] [i_5] = (!var_8);
            }
        }
    }
    #pragma endscop
}
