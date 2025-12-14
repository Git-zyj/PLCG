/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_6;

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= ((~((((2378 ? var_2 : 2385)) - 2387))));
        var_12 = (max(var_12, (!-var_2)));
        var_13 = (~2378);
    }
    #pragma endscop
}
