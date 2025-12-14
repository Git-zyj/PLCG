/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 1] [i_0] [i_0] = 124787305;
                    var_16 = var_0;
                    var_17 ^= ((arr_6 [i_0 - 1] [i_0 + 2] [i_2 + 1]) ? (var_2 - var_13) : ((var_9 + (arr_3 [i_1]))));
                }
            }
        }
        var_18 = var_7;
        arr_9 [i_0] [i_0 + 2] = var_5;
    }
    var_19 = ((7 ? -931865576 : -2396175036525331558));

    /* vectorizable */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_3] [i_3] = ((arr_15 [i_3 + 1]) ? (arr_10 [i_3 + 2]) : (arr_13 [i_3 + 1] [i_5]));
                    arr_19 [i_3] [i_3] = (arr_14 [i_5]);
                }
            }
        }
        arr_20 [i_3] = 1755532808;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    var_20 = 61;
                    var_21 ^= ((var_11 ? (arr_24 [i_3 - 1] [i_3] [i_3 - 1]) : var_9));
                    arr_26 [i_3] [1] = ((var_8 ? (arr_23 [i_7] [i_3 + 3] [i_3] [i_3 + 3]) : (arr_23 [i_3 - 1] [i_3 - 1] [i_7] [i_7])));

                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        var_22 = (((var_5 ? var_10 : var_14)));
                        var_23 = (((arr_15 [i_3 + 3]) ? (arr_12 [i_3 + 1]) : ((var_5 ? var_15 : var_9))));
                        var_24 += ((-(arr_15 [i_8 + 2])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
