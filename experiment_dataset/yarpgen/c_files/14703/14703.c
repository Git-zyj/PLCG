/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 *= (min(-1263338783, 0));
        arr_4 [i_0] [i_0] = -59;
        arr_5 [i_0] = -16526;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_14 = (arr_0 [i_1]);
        var_15 *= ((((((var_3 / (arr_1 [i_1] [12]))) ? (0 ^ 1857114931) : 2437852371))));
    }
    var_16 = ((var_2 ? (max(0, var_3)) : (((((var_8 ? var_8 : 1))) ? ((var_3 ? var_11 : var_1)) : (!1949617554)))));
    #pragma endscop
}
