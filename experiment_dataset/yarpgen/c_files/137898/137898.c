/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (~7168)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (((~var_6) ? (((arr_1 [i_0] [i_0]) / -25)) : (min((arr_1 [7] [i_0]), var_12))));
        var_17 = (21 ? -31676 : 3);
    }
    #pragma endscop
}
