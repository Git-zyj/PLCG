/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_2;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_18 = (min(var_18, ((((arr_0 [i_0]) ? 191 : var_13)))));
        var_19 ^= var_5;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 = (~(arr_4 [i_1]));
        arr_6 [i_1] [i_1] = (((arr_4 [i_1]) != (arr_3 [i_1])));
    }
    var_21 = ((var_7 << (var_5 - 3202923679179561425)));
    var_22 = (((7826072519066405997 + var_2) ? ((var_2 ? var_0 : 452294792)) : var_11));
    var_23 = var_6;
    #pragma endscop
}
