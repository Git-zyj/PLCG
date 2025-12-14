/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (!var_7)));
    var_16 = (max(var_16, ((min(8440526865012502888, (((var_6 + 2147483647) >> (var_0 - 1956064029))))))));
    var_17 = 0;
    var_18 = 66;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_19 -= var_1;
        var_20 = (max(var_20, (((((var_13 ? var_8 : var_8))) != (((arr_1 [i_0] [i_0]) ? 15523070990886407970 : (arr_0 [i_0])))))));
        arr_2 [i_0 - 2] = var_8;
    }
    #pragma endscop
}
