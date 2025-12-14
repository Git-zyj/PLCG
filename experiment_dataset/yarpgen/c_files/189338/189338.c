/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((max(-722307961, var_5))) - (var_2 + var_3)))) ? var_13 : (min((min(4294967295, 1)), 1))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 = (((!((((arr_0 [1]) >> (var_4 - 1102955938)))))));
        var_18 = (max(var_18, var_10));
    }
    #pragma endscop
}
