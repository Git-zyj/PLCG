/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_0 && (((-12 ? 1829763456 : 0)))));
    var_14 -= var_2;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 += var_1;
        var_16 = var_6;
    }
    #pragma endscop
}
