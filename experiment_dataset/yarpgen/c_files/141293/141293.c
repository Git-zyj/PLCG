/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (((-251658240 ? var_4 : 2037851426)));

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_13 = 55320;
        var_14 |= 1116487727;
        var_15 ^= (max((max(16817134761835509665, -79)), ((min((((32767 ? 1824 : -16220))), ((1032034786 ? -389363567 : 1337961565)))))));
    }
    #pragma endscop
}
