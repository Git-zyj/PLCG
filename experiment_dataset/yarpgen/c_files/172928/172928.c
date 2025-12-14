/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_14 = var_6;
        var_15 = 44;
    }
    var_16 |= 1729582672696390581;
    #pragma endscop
}
