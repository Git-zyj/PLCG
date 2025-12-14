/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = 288230376151711743;
        var_12 -= 43912;
        var_13 = 229;
        var_14 = 1227499107;
    }
    #pragma endscop
}
