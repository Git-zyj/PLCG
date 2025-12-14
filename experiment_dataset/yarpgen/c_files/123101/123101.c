/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = (((var_3 ? var_0 : var_2)));
        arr_5 [10] = var_5;
        var_13 = ((var_12 ? (var_7 == var_6) : var_4));
    }
    var_14 = var_7;
    var_15 = ((((var_8 ? var_3 : ((var_10 ? var_4 : var_1)))) - ((var_4 ? ((var_9 ? var_5 : var_7)) : (-225897185 >= 30093)))));
    #pragma endscop
}
