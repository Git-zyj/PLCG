/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= -32240;
    var_13 = (var_3 != 6035191992287156615);
    var_14 = var_7;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_15 = (min(var_15, var_3));
        var_16 = ((var_6 << (14088075046481260500 - 28568)));
        arr_3 [i_0] [i_0 - 1] = arr_1 [i_0 - 1];
        var_17 = (!var_5);
    }
    var_18 = ((-(((((var_2 ? var_6 : var_10))) ? var_4 : var_4))));
    #pragma endscop
}
