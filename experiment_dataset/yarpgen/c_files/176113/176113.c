/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 -= -var_1;
        arr_3 [i_0] = ((var_7 ? (var_1 / 1006813524) : 0));
        var_12 = (min(var_12, (((~var_2) ? (!2956040665) : (var_3 && var_9)))));
        var_13 -= arr_1 [i_0];
    }
    var_14 = ((min(((var_8 ? -23 : var_4)), ((min(0, -20))))));
    #pragma endscop
}
