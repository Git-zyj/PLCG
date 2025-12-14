/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_12, var_9));
    var_18 = var_1;
    var_19 *= (((((var_14 ? -var_1 : (var_8 <= var_11)))) ? (var_7 & var_3) : var_10));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (min(((max((((!(arr_0 [1] [i_0])))), ((var_10 ? var_16 : var_10))))), 8921100917126825782));
        arr_2 [i_0] = ((-3290455396303302067 ? (~var_12) : ((2539979671 ? -15 : 32))));
    }
    #pragma endscop
}
