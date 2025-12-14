/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [7] [i_0] = ((~((var_6 ? (arr_0 [i_0]) : 48))));
        var_16 -= (~118);
    }
    var_17 = (max(var_7, ((((max(var_1, 6708968214283177302))) ? (~var_14) : (((-118 ? -75 : var_0)))))));
    var_18 = (max(var_18, ((min(48, 1683873846)))));
    var_19 = 5476160099064889292;
    var_20 = (max((((((max(var_11, -52))) || 1))), (~59)));
    #pragma endscop
}
