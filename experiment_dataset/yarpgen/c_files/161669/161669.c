/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_13);
    var_20 = var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (var_2 ^ var_3);
        arr_3 [i_0] = ((51522 ? ((((var_6 || var_6) >= (-2147483647 - 1)))) : var_4));
        var_22 *= ((1040187392 && ((((((arr_1 [i_0]) >= var_0)) ? ((var_8 ? var_9 : var_0)) : 45)))));
        var_23 = (max(var_23, var_3));
    }
    var_24 = var_11;
    #pragma endscop
}
