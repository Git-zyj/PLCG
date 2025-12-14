/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [1] [i_1] [i_2] [i_2] [i_4] = var_12;
                                arr_13 [3] [i_2] = var_7;
                                arr_14 [i_0] [i_0] [i_0] [i_0] [13] [i_3] [i_2] = (min(((((arr_11 [9] [i_1] [i_1] [i_2] [i_1 - 1] [i_1 - 1]) || (arr_11 [i_1] [i_1 + 1] [i_1 - 1] [i_2] [i_1 - 1] [i_1 - 1])))), (arr_2 [i_1 + 1] [i_1 - 1])));
                                var_19 = var_9;
                                arr_15 [i_0] [i_0] [i_2] [i_0] = arr_2 [i_1] [i_4];
                            }
                        }
                    }
                    arr_16 [i_2] [i_1] [i_1] = ((arr_9 [i_0] [i_1 + 1] [i_0] [20] [i_0] [i_1 + 1]) ? ((var_2 ? (arr_5 [i_0] [9] [i_2]) : (arr_9 [i_0] [i_0] [i_2] [i_0] [i_0] [i_1 - 1]))) : (arr_6 [i_0] [i_2]));
                    var_20 = var_13;
                }
            }
        }
    }
    #pragma endscop
}
