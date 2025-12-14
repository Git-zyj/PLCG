/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_1));
    var_18 = (min(var_18, 1739465541));
    var_19 = -64;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_13 ? ((((!-2290967285481835864) ? (((arr_1 [i_0]) ? 1 : (arr_1 [i_0]))) : (42 - -1478031515)))) : (((arr_1 [i_0]) ? (((var_1 ? 339163065 : var_8))) : ((221 ? var_3 : var_13))))));
        var_20 = (((((((arr_1 [17]) ? var_4 : (arr_1 [i_0]))) != (((((arr_0 [20]) <= (arr_0 [i_0]))))))) ? ((var_8 % (arr_1 [i_0]))) : (((((var_0 ? 122 : var_11))) ? ((-420157520 ? var_15 : var_15)) : ((((arr_1 [10]) || (arr_1 [i_0]))))))));
    }
    #pragma endscop
}
