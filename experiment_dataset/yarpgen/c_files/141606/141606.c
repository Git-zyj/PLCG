/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((((-var_1 ? (var_5 > var_6) : (196 - var_0)))) ? 0 : var_5)))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_11 = (((arr_0 [i_0] [i_0 - 1]) || (((-(arr_0 [i_0 + 2] [i_0]))))));
        var_12 = ((10 ? (arr_3 [i_0 + 1]) : (((arr_1 [i_0 - 1]) ? (-2147483647 - 1) : (arr_2 [i_0 - 1])))));
        var_13 = (min(var_13, (((((max((arr_2 [i_0 - 1]), 2161727821137838080))) && (((-(arr_1 [i_0 + 1])))))))));
        var_14 = (((((-274875809792 ? 18446744073709551615 : ((min(10, (arr_3 [i_0]))))))) ? (arr_2 [i_0 + 2]) : (((((1 ? var_8 : (arr_2 [i_0])))) ? 1 : 1))));
    }
    #pragma endscop
}
