/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_15 = (((((var_8 ? (arr_1 [6] [i_0]) : var_12))) && (((-(arr_0 [i_0 + 1]))))));
        var_16 &= var_12;
        var_17 = -53541;
        var_18 = 64830;
    }
    var_19 = ((-(((var_9 != var_11) ^ var_11))));
    #pragma endscop
}
