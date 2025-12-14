/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_13 = (arr_2 [i_0 - 2]);
        var_14 = (((arr_3 [i_0 + 2]) ? (arr_3 [i_0 - 2]) : 3899519765));
        var_15 = ((var_3 / (((arr_3 [i_0]) | (arr_0 [i_0])))));
    }
    var_16 = var_7;
    var_17 &= var_12;
    var_18 = var_0;
    #pragma endscop
}
