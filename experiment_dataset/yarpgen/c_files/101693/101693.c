/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_10, ((-(var_10 < var_4)))));
    var_16 = var_6;
    var_17 |= ((((min(20, 451481271))) ? var_11 : var_13));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (min((((0 * 451481266) / 8796091664475257730)), (arr_0 [i_0])));
        var_19 = var_5;
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_20 *= (((!var_2) > var_1));
        var_21 = (!2951284703);
        var_22 = var_5;
    }
    #pragma endscop
}
