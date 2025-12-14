/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 += (max(((max(((-1 ? 16 : 1)), 255))), (((3979154908 ? var_1 : var_6)))));
        var_21 = 2365376887;
        var_22 = ((var_1 ? (((255 ? -3 : 53))) : 179));
    }
    var_23 = var_17;
    #pragma endscop
}
