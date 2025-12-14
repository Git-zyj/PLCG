/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((var_14 > var_6) ? (max(var_1, var_14)) : var_0)), (min((~var_6), (!var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = var_10;

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    var_20 ^= (arr_6 [i_2 + 2] [i_2] [i_2 + 2]);

                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        var_21 = var_2;
                        var_22 = (arr_6 [i_3 + 1] [i_3 + 1] [i_3 - 3]);
                        var_23 = (min(((var_9 ^ (arr_9 [i_2] [i_2] [i_2 + 2] [i_2] [i_2 + 1]))), (~var_1)));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_24 &= ((-(arr_11 [i_2] [i_2] [i_2 - 1] [i_2] [3])));
                        arr_14 [i_0] [i_1] = (((arr_13 [i_0] [i_1] [i_2 + 2] [i_4]) < (arr_9 [i_0] [i_0] [i_2 + 2] [i_4] [i_4])));
                        var_25 = (~var_0);
                        var_26 = (max(var_26, (arr_12 [i_1] [i_1] [i_2 - 1] [i_4] [i_0])));
                        arr_15 [i_4] [i_2] [7] [7] = var_17;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_27 = ((var_10 < (arr_13 [i_5] [i_1] [i_2 - 1] [i_5])));
                        var_28 = (min(var_28, var_5));
                        arr_18 [i_5] = (arr_9 [i_0] [i_1] [i_1] [i_5] [i_0]);
                        var_29 = ((-((((min(var_10, var_3))) ? var_4 : (((-(arr_10 [i_0] [22] [i_0] [i_0] [i_0] [1]))))))));
                    }
                }
                /* vectorizable */
                for (int i_6 = 3; i_6 < 23;i_6 += 1)
                {
                    arr_22 [i_0] [i_1] [i_6] &= (~-1720642826);
                    arr_23 [12] [12] [i_6 - 2] [i_6] = var_16;
                    var_30 = (arr_0 [i_0] [i_6 + 2]);
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    arr_28 [i_0] [i_0] [i_7] [i_7] = (((arr_20 [i_7] [i_1] [i_0]) ? (arr_13 [i_0] [i_1] [i_0] [i_7]) : (arr_12 [i_0] [i_0] [i_0] [i_1] [1])));
                    var_31 = (max(var_31, (!var_11)));
                    arr_29 [i_0] [i_0] [i_0] [i_7] = ((-(arr_20 [i_0] [i_0] [i_7])));
                    arr_30 [i_0] [i_0] [i_7] [i_0] = ((((((arr_19 [i_0] [i_1] [i_7]) + var_3))) ? ((~(arr_20 [i_0] [i_1] [i_7]))) : (arr_6 [i_0] [i_1] [i_7])));
                    arr_31 [i_7] [i_0] [i_7] = (arr_9 [i_0] [i_0] [i_7] [i_7] [i_7]);
                }
                var_32 = ((var_0 <= (arr_2 [i_1])));
            }
        }
    }
    #pragma endscop
}
