/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = var_14;
        arr_3 [i_0] [i_0] = ((~(arr_2 [i_0])));
    }
    var_16 = (0 / 4743369540272022429);

    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = (((((var_5 / 6168) <= (!31)))) << (((arr_5 [i_1 + 1]) - 21550)));
        var_17 = (((arr_0 [i_1 - 1]) * (arr_2 [i_1 - 1])));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_11 [10] [15] &= (min((arr_5 [i_2]), -793742203));
        arr_12 [i_2] = ((+(min((var_4 * var_5), ((0 / (arr_4 [i_2] [1])))))));
        arr_13 [17] = (((((min(13, -1)))) | (((arr_7 [i_2]) ? (var_14 / 3598760827) : (min(var_5, 4294967295))))));
    }
    #pragma endscop
}
