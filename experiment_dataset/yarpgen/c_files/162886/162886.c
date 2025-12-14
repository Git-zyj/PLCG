/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = (max((arr_0 [i_0]), 4294967295));
        arr_2 [7] [7] = (((arr_1 [i_0]) ? (max(5730171492936552294, (arr_1 [i_0]))) : -var_4));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {
                    var_12 = var_9;
                    var_13 = (arr_9 [i_1] [i_1] [i_3]);
                }
            }
        }
        arr_10 [i_1] = ((~(max(var_3, ((-1 ? (arr_7 [i_1] [i_1]) : var_2))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_14 = (arr_3 [1]);
        var_15 = ((~(arr_5 [i_4] [i_4] [i_4])));
    }
    var_16 = var_8;

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_17 = (min(var_17, var_7));
        arr_16 [i_5] = ((~((var_6 ? (arr_8 [i_5] [i_5]) : var_4))));
        var_18 = (max(var_18, (((-((32766 ? 94 : (arr_4 [i_5]))))))));
    }
    var_19 = (!var_2);
    #pragma endscop
}
