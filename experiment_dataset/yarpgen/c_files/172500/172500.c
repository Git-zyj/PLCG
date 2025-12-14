/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (1 ? ((((var_0 || (var_2 || 40066))))) : var_14);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_16 = (arr_0 [i_0 + 2]);
        var_17 = var_5;
    }
    #pragma endscop
}
