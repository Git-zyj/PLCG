/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [10] |= (!((max((min(var_4, -9005)), 68))));
        arr_4 [i_0] = ((((1578874374548988032 ? (-2147483647 - 1) : 1)) / -9169598646943276618));
        var_21 = ((((~(var_14 + var_11))) <= (!307341797)));
    }
    #pragma endscop
}
