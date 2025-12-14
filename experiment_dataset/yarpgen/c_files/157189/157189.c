/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = arr_0 [i_0 + 1] [i_1];
                arr_7 [i_0] [i_1] = arr_3 [i_0] [i_1];
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            {
                arr_13 [i_3] [i_3] |= arr_11 [i_2];
                var_18 = (max(var_18, (arr_10 [i_2])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                arr_19 [i_4] [i_4] [i_4] |= (arr_9 [i_4]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_19 += (arr_23 [i_4] [i_5] [2]);
                            var_20 |= arr_17 [i_7];
                            var_21 = (arr_20 [i_4] [i_4] [i_4] [i_4]);
                        }
                    }
                }
                var_22 = (arr_24 [8] [i_5]);
                var_23 = arr_11 [i_5];
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_24 = (arr_18 [i_4] [i_4] [i_8]);
                            var_25 = (min(var_25, (arr_22 [i_5] [i_5] [i_5] [i_5])));
                            arr_30 [i_4] [2] [i_9] [i_9] [i_8] [i_9] = (arr_18 [i_4] [i_4] [i_4]);
                            arr_31 [0] [0] [i_8] [i_9] = (arr_29 [i_4] [7] [i_5] [i_8] [i_8] [i_9]);
                            var_26 += arr_8 [i_4];
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
