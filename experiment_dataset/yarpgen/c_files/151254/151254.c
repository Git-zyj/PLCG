/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 ^= var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (arr_0 [i_0] [i_0]);
                    arr_9 [i_0] [i_1 - 1] [i_2] = (arr_4 [i_0]);
                    arr_10 [i_1] [i_1] [i_1] [21] = (arr_5 [14] [i_1 - 1] [i_2 + 1]);
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_20 = (arr_4 [i_3]);
                    var_21 ^= (arr_6 [i_3] [15] [i_4] [10]);
                    arr_21 [i_5] [11] [i_3 + 3] = (arr_7 [i_4] [i_5]);
                    arr_22 [i_3] [i_3] [i_3 + 1] = (arr_13 [i_3 + 1] [i_5]);
                }
            }
        }
        arr_23 [i_3] [i_3] = (arr_5 [i_3] [2] [2]);
    }
    var_22 = var_2;
    #pragma endscop
}
