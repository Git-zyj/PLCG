/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (max(var_12, (((((0 ? (!var_3) : 32767)) % (((var_11 ? var_5 : var_9))))))));
        var_13 -= ((max((min(5, 32741)), (((var_1 ? var_5 : var_10))))));
    }
    var_14 = (~var_11);
    var_15 = ((var_10 - ((((var_0 ^ 2147483642) || var_9)))));
    #pragma endscop
}
