/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 |= (((arr_0 [i_0]) ^ var_6));
        var_14 = ((((((-(arr_1 [i_0] [i_0]))) + 2147483647)) >> ((((24 ? -25 : -20)) + 56))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_15 = (arr_4 [i_1]);
        var_16 = 71470537;
    }
    var_17 = (min(var_17, ((((((-34 ? var_8 : 24))) ? var_12 : var_7)))));
    #pragma endscop
}
