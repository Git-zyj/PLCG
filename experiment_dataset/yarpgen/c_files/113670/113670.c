/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((-127 - 1) <= 5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        arr_2 [i_0] = (var_0 | var_5);
        var_18 = (max(var_18, (((0 ? 107 : -107)))));
        var_19 += var_15;
    }
    #pragma endscop
}
