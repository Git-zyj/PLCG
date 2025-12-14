/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (((60745 && 0) ? var_18 : (arr_0 [i_0] [i_0])));
        var_20 = ((+((((-26236 ? (arr_0 [i_0] [1]) : var_8)) ^ (159 / var_6)))));
        arr_2 [i_0] = ((((((45325 ^ 159) ^ (((arr_1 [0] [i_0]) ? var_0 : (arr_1 [i_0] [i_0])))))) && (((~(((var_12 <= (arr_0 [i_0] [i_0])))))))));
    }
    var_21 = (((((((var_0 ? 52221 : var_18))) ? (min(var_4, var_8)) : var_4)) % ((max(((var_11 ? var_5 : var_12)), (var_16 && var_11))))));
    var_22 = (!var_11);
    var_23 = -86;
    #pragma endscop
}
