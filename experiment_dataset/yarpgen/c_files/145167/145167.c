/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_6, (~var_7)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = ((var_0 | (arr_1 [i_0])));
        var_12 = ((((arr_0 [i_0] [i_0]) ? var_3 : (arr_1 [i_0]))));
        var_13 = var_2;
        var_14 = (((~3036280931340295941) ? (arr_0 [i_0] [i_0]) : var_2));
    }
    #pragma endscop
}
