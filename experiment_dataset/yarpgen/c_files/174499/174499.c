/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = var_11;
        arr_3 [i_0] = (max(24055, ((1 ? ((var_0 ? -55 : -55)) : (arr_0 [i_0] [i_0])))));
        var_16 += 0;
    }
    var_17 = ((766329333 ? -84 : 766329333));
    #pragma endscop
}
