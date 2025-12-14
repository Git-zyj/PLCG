/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_2 ? (var_0 - var_2) : (var_10 > var_2)));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_9;
        var_13 = (((((~((~(arr_2 [i_0] [i_0])))))) ? (arr_0 [i_0] [i_0]) : (!-21040)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_14 = (((arr_4 [i_1 - 1]) >= (((arr_5 [i_1 + 1] [i_1]) ? var_5 : (arr_5 [6] [0])))));
        arr_6 [i_1] = (((arr_5 [1] [i_1]) - var_9));
        arr_7 [i_1 + 2] = ((1 ? 1 : 85));
        arr_8 [i_1 - 1] = var_11;
    }
    #pragma endscop
}
