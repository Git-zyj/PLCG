/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(1, (max(var_1, ((var_2 ? var_8 : -643782900))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        arr_3 [i_0] = (min((((var_11 ? 195 : 2466728082))), 63));
        var_14 *= min(9, ((var_0 ? 140736414613504 : 1)));
    }
    #pragma endscop
}
