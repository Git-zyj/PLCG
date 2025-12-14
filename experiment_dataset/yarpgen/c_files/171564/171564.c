/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = ((((var_7 ? var_8 : var_6)) << (18446744073709551615 - 18446744073709551589)));
        var_14 = (min(var_14, var_6));
        var_15 = (((var_3 * var_5) ? ((((arr_0 [i_0] [i_0]) << (arr_1 [1])))) : var_4));
        arr_2 [i_0] [i_0] = (((var_10 >= 0) + ((4294967295 >> (9189845931314319243 - 9189845931314319239)))));
    }
    var_16 = var_5;
    #pragma endscop
}
