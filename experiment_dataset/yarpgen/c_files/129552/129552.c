/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((((178 ? var_15 : ((var_13 ? -108 : 35))))) ? (((var_15 ? ((min(-108, var_0))) : 1))) : var_1))));
    var_17 -= var_10;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 -= (~773485695);
        var_19 = (!2);
    }
    var_20 = ((1 ? var_1 : (((max(168, var_10))))));
    #pragma endscop
}
