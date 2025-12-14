/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_13 = (arr_1 [i_0]);
        var_14 *= ((255 ? var_0 : (arr_1 [i_0 + 1])));
    }
    var_15 = (min(var_15, var_10));
    #pragma endscop
}
