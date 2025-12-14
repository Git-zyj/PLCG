/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((230 ? (~var_12) : var_8));
    var_21 = var_5;
    var_22 ^= (max(((!(var_5 || var_8))), ((var_6 > (max(var_16, var_10))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_23 = (((!var_15) ? (arr_0 [i_0 - 1]) : (max((arr_0 [i_0 + 2]), 4294967295))));
        var_24 = ((((!((((-127 - 1) ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 + 2])))))) ? ((((!156) || (var_4 || 0)))) : (arr_1 [i_0 - 1])));
        var_25 = var_19;
        var_26 = (var_2 ? 4387 : (arr_0 [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_27 ^= (arr_4 [i_1]);
        arr_5 [i_1] = ((((53291 ^ (arr_2 [i_1])))) ? (((arr_4 [i_1]) ? 53298 : (arr_3 [i_1] [i_1]))) : var_19);
        var_28 = (12244 || 53291);
        arr_6 [i_1] = var_2;
    }
    var_29 = var_10;
    #pragma endscop
}
