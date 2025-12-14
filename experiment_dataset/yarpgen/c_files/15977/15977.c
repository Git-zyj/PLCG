/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_16;
    var_18 &= 0;
    var_19 = (min(var_19, (((var_14 ^ (max(var_5, -var_14)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (min(var_20, var_7));
        var_21 = (min(var_21, (arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
