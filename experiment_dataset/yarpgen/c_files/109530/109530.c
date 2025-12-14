/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_1 & (((var_5 ? var_0 : var_1)))));
    var_11 = ((((var_3 ? var_7 : var_9))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = arr_6 [i_1] [i_1] [i_1] [i_1];
                    arr_9 [i_2] = (max(((var_6 ? (arr_0 [i_0] [i_0]) : (((arr_3 [i_0]) + var_3)))), var_4));
                    arr_10 [i_2] [i_0] = (max(var_1, (arr_5 [i_2] [i_1] [i_0])));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (arr_13 [i_3] [i_3]);
        arr_15 [i_3] = 842689497;
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        arr_18 [i_4] = (arr_16 [i_4 - 1]);
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_28 [i_6] [i_5] [i_6] [i_5] [i_6] = ((+(min((arr_21 [i_4] [i_4] [i_6]), (((arr_17 [i_7] [i_4]) ? var_2 : var_2))))));
                        arr_29 [i_4] [i_6] [i_6] [i_4] = var_1;
                        arr_30 [i_4] [i_4] [i_6] [i_4] = (min(((((arr_19 [i_6]) == (arr_19 [i_4 - 1])))), -1252926497));
                    }
                }
            }
        }
    }
    #pragma endscop
}
