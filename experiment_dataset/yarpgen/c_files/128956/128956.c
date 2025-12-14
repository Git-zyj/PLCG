/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_12 [1] [i_1] [12] = (((((arr_10 [10] [i_1] [i_1] [i_3] [i_3]) ? var_4 : (arr_10 [i_3] [i_1] [i_2] [i_3] [i_3]))) * var_6));
                        arr_13 [i_0] [i_1] [i_2] [i_2] |= ((~(arr_4 [i_0] [i_0])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    arr_19 [i_0] [i_4] [i_5] [i_0] = (arr_11 [i_5]);
                    arr_20 [i_0] [i_4] [i_4 - 1] [i_5] = var_5;
                }
            }
        }
        arr_21 [11] = (arr_4 [i_0] [i_0]);
        arr_22 [i_0] [i_0] = (arr_15 [i_0] [i_0] [i_0]);
        arr_23 [i_0] = ((var_2 ? (arr_10 [i_0] [i_0] [i_0] [i_0] [16]) : (arr_10 [13] [3] [3] [i_0] [i_0])));
    }
    var_11 = var_0;

    /* vectorizable */
    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {
        arr_27 [i_6 - 1] [i_6] = (((arr_2 [i_6 + 1]) << (((arr_14 [i_6]) - 146))));
        arr_28 [i_6 - 1] = (((arr_24 [3] [11]) ? (arr_24 [1] [i_6]) : var_3));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        arr_33 [i_7] [i_7] = (arr_4 [i_7] [i_7]);
        arr_34 [i_7] = max((max(((((arr_9 [i_7] [11] [18] [i_7] [i_7] [i_7]) & (arr_10 [i_7] [i_7] [i_7] [i_7] [i_7])))), (11 | var_4))), (((arr_31 [i_7] [i_7]) ? (arr_31 [i_7] [1]) : var_3)));
    }
    #pragma endscop
}
