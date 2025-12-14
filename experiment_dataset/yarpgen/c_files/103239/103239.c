/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (1655257061320601547 || 9223372036854775807);
        var_10 = arr_2 [i_0];
        var_11 = max((min(9971656608880938718, 19235)), (((((max(var_1, (arr_1 [i_0] [i_0])))) <= var_2))));
        var_12 += (max(var_0, (((((-56 ? var_5 : 27)) << (((arr_0 [i_0]) + 56)))))));
        var_13 = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_14 += (arr_6 [i_1 - 1] [i_1 - 1]);
        var_15 = (min(var_15, ((((((60746 ? (arr_5 [i_1] [20]) : 802277721))) / -9223372036854775792)))));
        arr_8 [i_1] = (((var_4 - 27) ? (arr_6 [i_1 + 1] [i_1]) : (((arr_7 [i_1]) ? (arr_5 [i_1] [i_1]) : 16876575652274289833))));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_16 = (var_7 / (min((arr_12 [i_2 + 1]), var_7)));
        var_17 = (min(((max((arr_6 [i_2 - 1] [i_2 + 1]), 198))), (arr_10 [i_2 + 1])));
    }
    var_18 = ((-((var_4 ? 31160 : (max(var_3, var_5))))));
    #pragma endscop
}
