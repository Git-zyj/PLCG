/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, -31551));
    var_11 = ((!(((~(1249680760 - -3636901299111225549))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_12 = (max(var_12, 43));
        var_13 = 7;
        var_14 = (max(var_14, ((((arr_0 [1]) ? ((-7125631091860642465 ? 0 : -536870912)) : (64 < 2147483647))))));
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        var_15 = (max(var_15, (((!((min(49130, var_1))))))));
        var_16 -= (!var_4);
    }
    var_17 = var_8;
    var_18 &= ((1 ? -536870911 : -31));
    #pragma endscop
}
