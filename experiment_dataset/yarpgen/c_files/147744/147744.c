/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = (((((((max(var_9, var_0))) / (~-1164415806)))) ? 1311487350 : (max(-1, var_7))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (~(max((arr_1 [i_0 + 2]), (arr_6 [i_0 + 2]))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((max(((var_8 > (arr_1 [i_0]))), 16040341625046221957)));
                    arr_10 [i_0] = (arr_3 [i_0] [i_0]);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            var_13 = ((var_8 < (arr_12 [i_3])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_23 [i_3] [i_3] [i_5] [i_6] = var_7;
                        arr_24 [i_5] [10] [0] [i_6] [i_3] = ((+(((arr_22 [i_5] [i_5] [i_5] [i_5]) + (arr_21 [i_3] [i_4] [i_5] [i_4])))));
                    }
                }
            }
            arr_25 [i_3] [i_4 + 4] = (arr_21 [i_3] [i_3] [i_4 + 2] [i_4]);
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_14 = ((~(arr_20 [i_7] [i_3] [i_7] [i_3] [i_3])));
            var_15 = (min(var_15, (((1 ? var_1 : var_1)))));
            var_16 = (min(var_16, (arr_17 [i_3] [i_3] [i_7])));
        }
        arr_28 [i_3] [i_3] = (arr_19 [i_3] [i_3] [14] [i_3] [i_3]);
    }
    #pragma endscop
}
