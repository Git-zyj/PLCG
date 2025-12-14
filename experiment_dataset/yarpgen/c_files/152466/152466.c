/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = ((((max(var_7, (arr_0 [i_0] [i_0])))) ? (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : ((((~(arr_0 [5] [i_0]))) ^ (arr_0 [i_0] [i_0])))));
        var_19 *= (((((arr_0 [i_0] [i_0]) && (arr_0 [4] [i_0]))) ? ((((!(((var_5 ? (arr_0 [12] [12]) : var_14))))))) : (min((arr_1 [i_0]), (arr_0 [i_0] [i_0])))));
        var_20 = ((((arr_0 [i_0] [i_0]) ^ var_13)));
    }
    #pragma endscop
}
