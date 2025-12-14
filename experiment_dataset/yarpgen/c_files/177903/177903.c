/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((min(var_4, ((var_2 ? var_8 : var_5)))), (min(2147483647, -482741015))));
    var_12 = (max(var_12, var_5));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_13 = ((!((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0]))) | ((min(var_0, (arr_0 [i_0] [i_0])))))))));
        var_14 -= (min((((arr_1 [i_0] [i_0]) ? 1 : (arr_1 [i_0] [11]))), ((800361375 ? (-2147483647 - 1) : 51))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_15 -= (arr_1 [i_1] [i_1]);
        var_16 = (((arr_0 [i_1] [10]) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_1])));
        arr_5 [i_1] = (((((var_7 ? (arr_2 [i_1]) : (arr_2 [i_1])))) ? (((arr_0 [i_1] [i_1]) ? 18 : (arr_1 [i_1] [i_1]))) : (arr_0 [i_1] [i_1])));
    }
    var_17 = min(((var_7 ? ((max(var_8, 219))) : var_8)), (~1));
    #pragma endscop
}
