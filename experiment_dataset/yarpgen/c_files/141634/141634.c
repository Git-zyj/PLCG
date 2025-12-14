/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_13);

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_20 = ((255 ? var_5 : 1));
        var_21 *= (~25);
    }
    var_22 = var_13;
    #pragma endscop
}
