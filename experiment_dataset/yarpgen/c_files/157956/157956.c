/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = 1087158669;
        arr_2 [i_0] = 1;
    }
    var_17 = (var_8 | var_1);
    #pragma endscop
}
