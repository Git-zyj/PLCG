/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_16 = var_15;
        var_17 = (max(((-(arr_1 [i_0 + 3]))), (arr_1 [i_0 + 3])));
    }
    var_18 = ((-24 ? -24 : ((var_9 ? var_6 : var_0))));
    var_19 = ((var_4 ? (min(-var_3, (~var_14))) : ((((var_10 <= var_8) == var_1)))));
    #pragma endscop
}
