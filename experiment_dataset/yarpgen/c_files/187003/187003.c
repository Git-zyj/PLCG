/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_11 ? var_7 : ((var_14 ? var_0 : var_14)));
    var_16 = (max((((61361 ? (var_4 < 127) : 65535))), (61357 & var_3)));
    var_17 = ((((((var_10 * 32758) / ((var_5 ? 127 : 0))))) + var_4));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_18 -= (arr_1 [i_0]);
        var_19 = arr_0 [i_0 + 2] [i_0 + 3];
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_20 = (max(var_20, 7927990163123454442));
        var_21 = (min(var_21, ((((((((var_2 ? -126 : 238))) && -1)) ? (!125) : var_8)))));
    }
    var_22 *= max(((~(max(60, 0)))), ((((~1) ? (~0) : (min(var_5, 113))))));
    #pragma endscop
}
