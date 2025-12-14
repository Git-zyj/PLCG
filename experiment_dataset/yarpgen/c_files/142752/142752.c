/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (max((max((16256 * var_11), (max((arr_1 [i_0]), (arr_2 [i_0]))))), 16256));
        arr_3 [i_0] = (max((((!((((arr_0 [i_0] [i_0]) ? 3057724435 : var_5)))))), (max(((~(arr_2 [i_0]))), ((min(253, var_17)))))));
        var_21 ^= (min(((~(arr_2 [i_0]))), (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_22 = (min(49279, ((((var_10 ? var_12 : 60262)) + 49287))));
        var_23 = ((((((var_5 ? (arr_5 [10]) : 2058022770))) && (((var_3 ? var_13 : 1237242860))))));
        var_24 = (max(var_24, ((((((-9773 | (arr_4 [i_1]))) + 2147483647)) << ((((((var_14 ? (arr_4 [i_1]) : (arr_4 [i_1]))) + 17698)) - 16))))));
    }
    #pragma endscop
}
