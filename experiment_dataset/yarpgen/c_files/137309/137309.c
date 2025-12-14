/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 = (((var_3 ? var_7 : (((31799 ? -31800 : -31799))))));
    var_16 = ((((min((!-31799), (12908 * -103)))) ? (min(var_13, var_10)) : var_12));

    for (int i_0 = 3; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_17 = (min((min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))), (arr_1 [i_0])));
        var_18 |= (max((((((0 ? 102 : (-2147483647 - 1)))) ? (arr_1 [i_0]) : (arr_1 [i_0 - 1]))), (arr_1 [i_0])));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_19 = ((var_4 != (arr_3 [i_1 + 1])));
        var_20 = (min(var_20, (arr_1 [i_1])));
    }
    #pragma endscop
}
