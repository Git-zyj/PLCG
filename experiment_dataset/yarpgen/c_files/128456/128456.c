/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_11 = (~(arr_1 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_0] [i_0] = arr_3 [i_0 + 1] [i_0] [i_0 + 1];
                    var_12 = (arr_5 [i_0 - 1] [i_0]);
                    arr_7 [i_0] [i_1] [i_0] = (arr_1 [i_0]);
                }
            }
        }
        var_13 = (max(var_13, (arr_1 [2])));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_14 = (((max((arr_10 [i_3]), (arr_10 [i_3]))) ? (arr_10 [i_3]) : (arr_9 [i_3])));
        arr_11 [i_3] = var_5;
        arr_12 [i_3] [i_3] = (((arr_10 [i_3]) ? ((var_10 ? ((~(arr_8 [i_3] [1]))) : (arr_8 [i_3] [i_3]))) : 1));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            {
                var_15 += (((((1 ? (arr_15 [2] [i_5] [i_4]) : var_8))) ? (((arr_15 [10] [10] [10]) ? (arr_14 [i_4] [i_4]) : var_9)) : (arr_14 [i_5] [i_5])));
                arr_17 [i_4] [i_5] [i_5] = (min(var_4, ((var_2 ? 1 : (!var_10)))));
            }
        }
    }
    var_16 = var_4;
    #pragma endscop
}
