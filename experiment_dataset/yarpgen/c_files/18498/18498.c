/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = (min(var_12, (((-((var_8 ? (arr_1 [i_0]) : 8411077367849565433)))))));
        var_13 = (-8411077367849565445 ^ -864730957);
        var_14 -= var_3;
        arr_2 [i_0] = (~14699020742481682315);
    }
    var_15 = var_2;
    #pragma endscop
}
