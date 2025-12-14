/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] = (((var_5 ? var_7 : (arr_2 [i_0 + 3] [i_0 + 3]))));
        var_16 += arr_2 [i_0 + 2] [3];
        var_17 = ((~(((((-1 ? -1 : -13558))) ? (var_8 == var_13) : 2147483647))));
        arr_4 [i_0] = ((-(!var_9)));
    }
    var_18 -= (((max(var_6, (1 * var_0)))) ? var_3 : (!-6477895256774312129));
    var_19 = ((224 ? var_7 : (max((!var_1), (max(137438953471, var_14))))));
    var_20 = var_4;
    #pragma endscop
}
