/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((max((var_10 >> -0), (-var_7 / var_10))))));

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_13 = (arr_3 [i_0 - 4]);
        var_14 = (~-18446744073709551615);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = ((!((((var_6 / 65528) ? (min((arr_1 [i_1] [i_1]), (arr_5 [14] [i_1]))) : var_1)))));
        arr_8 [i_1] [1] = var_4;
    }
    var_15 = (((((~(var_2 > var_2)))) ? (((0 + 20) ^ ((max(var_5, var_1))))) : ((((((var_4 ? var_7 : var_0))) && (((var_11 ? var_3 : var_10))))))));
    var_16 = ((((var_10 >= ((0 ? var_2 : var_10)))) ? var_2 : (((var_11 ? 11 : (var_1 | var_10))))));
    #pragma endscop
}
