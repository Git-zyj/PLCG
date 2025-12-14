/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_18 = (min(var_18, (arr_1 [i_0] [i_0])));
        var_19 = (!0);
        arr_2 [i_0] |= var_3;
    }
    var_20 = var_14;
    var_21 *= -var_12;
    var_22 = var_1;
    var_23 = var_10;
    #pragma endscop
}
