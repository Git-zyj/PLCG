/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 += -6988070331573797909;
        var_19 = (((((~(arr_1 [14])))) ? (((min((arr_1 [i_0]), var_7)))) : ((23662 ? -5125208390371412195 : 23662))));
        arr_2 [i_0] = ((max(var_4, (219 + var_11))));
    }
    var_20 = ((var_17 ? ((((128 | -25049) ? 1 : (47 > 1)))) : var_0));
    #pragma endscop
}
