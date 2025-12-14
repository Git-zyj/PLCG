/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (min(var_14, var_2));
        var_15 = (((((117 ? 28 : 117))) ? (max(58269, (((arr_1 [7]) ? 882848759267112025 : var_8)))) : var_9));
    }
    var_16 = var_12;
    #pragma endscop
}
