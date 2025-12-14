/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = ((-(arr_0 [i_0])));
        var_18 = (arr_0 [i_0]);
        var_19 = var_10;
    }
    var_20 = (max(var_20, (~98)));
    var_21 = var_12;
    var_22 = (min((26846 == 4099558775), -0));
    var_23 &= ((-((((max(var_6, 814476685))) ? var_2 : var_1))));
    #pragma endscop
}
