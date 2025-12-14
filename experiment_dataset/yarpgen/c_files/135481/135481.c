/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (28 | -28)));
        arr_2 [i_0] = ((-(((arr_1 [i_0 - 4]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 4])))));
        var_21 = var_10;
        var_22 = (((arr_1 [i_0 + 1]) & ((~((max((arr_0 [i_0]), (arr_0 [i_0 - 3]))))))));
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((((((((arr_4 [i_1]) ? 46 : var_14))) ? (arr_4 [i_1]) : 1435766299880957021)) >> ((((max(41, 0))) ? (arr_4 [i_1 - 2]) : ((90 << (((((arr_1 [i_1]) + 479980546908608831)) - 9))))))));
        var_23 = ((((min((arr_1 [i_1]), ((max((arr_0 [i_1]), var_18)))))) ? (((((arr_4 [i_1 - 3]) < (arr_0 [i_1 + 1]))))) : ((103 ? -1435766299880957021 : 103))));
    }
    var_24 = ((-((var_16 ? (min(var_2, var_5)) : (((-127 - 1) ? -122 : 44))))));
    #pragma endscop
}
