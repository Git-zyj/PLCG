/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    var_18 = (var_13 / var_7);

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_19 = (arr_0 [0] [i_0 - 2]);
        var_20 = 2520825003094432266;
    }
    #pragma endscop
}
