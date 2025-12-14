/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_12;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = (max(var_15, -28196));
        arr_3 [1] = var_9;
        var_16 = (min(var_16, (((((max((4353 % 80), (!var_12)))) ? 32758 : var_10)))));
        var_17 = (~28204);
    }
    var_18 = (-(max((~128), -1933425800)));
    #pragma endscop
}
