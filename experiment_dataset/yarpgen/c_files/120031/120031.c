/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((var_11 * (((!var_8) ? var_7 : var_5))));
    var_17 = ((-((max((-127 - 1), (min(var_1, var_8)))))));
    var_18 = (max(var_7, -var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = (arr_2 [i_0]);
        var_20 = -var_12;
    }
    #pragma endscop
}
