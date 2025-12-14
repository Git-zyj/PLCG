/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (((((min(var_0, var_8)) * (var_0 > var_9)))) ? var_6 : var_12);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((min((var_11 & var_0), var_13)), ((min(var_6, var_3)))));
        var_16 = ((~(((var_14 / var_11) ? (var_7 * var_6) : -var_4))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [7] [i_1] = max(var_5, (((!var_4) ? (~var_5) : -var_0)));
        var_17 = min(((((!var_6) ? var_5 : var_4))), (max(var_4, (max(var_12, var_11)))));
        var_18 |= (min((max(((min(var_8, var_11))), (max(var_1, var_0)))), (max((var_11 | var_9), (min(var_1, var_3))))));
    }
    var_19 = var_5;
    #pragma endscop
}
