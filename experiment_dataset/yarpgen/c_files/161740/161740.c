/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_15 *= (var_10 ? ((((arr_0 [i_0 - 2]) >= -2979904043083568409))) : (!var_14));
        var_16 *= (min(7319, (((arr_0 [i_0 - 3]) ? (((arr_0 [i_0]) ? var_8 : var_14)) : (!7307)))));
    }
    var_17 = (max(var_17, var_9));
    #pragma endscop
}
