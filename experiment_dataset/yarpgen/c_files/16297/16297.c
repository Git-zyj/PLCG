/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_4));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = ((((max(1834028059, (!3704344496902827654)))) ? var_7 : (!1834028073)));
        var_17 = (((~1834028069) ? ((var_2 ? 15 : ((-1834028054 ? -2802995832410743892 : -18402)))) : (((max(var_10, 95))))));
        var_18 = (!-1);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] = ((-1834028060 ? 33 : 1834028051));
        var_19 = (-1834028073 & 19755);
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_20 = -var_8;
        var_21 = ((-1834028059 ? -var_7 : (+-4294967295)));
        var_22 = -536870911;
    }
    var_23 = var_1;
    var_24 = ((((!(((var_13 ? 11123849455935613134 : var_14)))))));
    #pragma endscop
}
