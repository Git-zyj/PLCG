/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_2));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_19 = 43984;
        arr_2 [i_0] = 86;
        var_20 &= arr_0 [i_0];
    }
    var_21 = (((1691707639 | var_12) ? ((2003718573 ? (((var_15 ? var_10 : -294399197))) : ((1 ? var_7 : var_8)))) : (!var_15)));
    var_22 = var_3;
    #pragma endscop
}
