/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (min(58639, ((~(max(216172782113783808, 1984))))));
        var_19 = var_5;
    }
    var_20 |= var_5;
    var_21 = ((((min(2003, ((var_8 ? var_15 : 1))))) ? ((max(128, var_13))) : var_5));
    #pragma endscop
}
