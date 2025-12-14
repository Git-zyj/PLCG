/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (min(1, (((~(arr_1 [i_0] [i_0]))))));
        var_18 += (((((62 ? var_2 : var_4))) & ((87 ? (min(5, -4868876555968975374)) : (2273730209 * 1)))));
        var_19 = (arr_2 [i_0] [i_0]);
    }
    #pragma endscop
}
