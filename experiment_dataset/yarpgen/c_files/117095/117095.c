/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_14 -= (((((~(arr_0 [i_0 + 1] [i_0 + 1])))) ? (arr_1 [i_0 + 1]) : (((~(arr_0 [i_0 - 1] [i_0 - 1]))))));
        var_15 ^= ((!((max((arr_0 [i_0 - 1] [i_0 + 2]), (arr_0 [i_0 + 1] [i_0 + 2]))))));
        arr_2 [3] = (~((+(((arr_0 [i_0 + 1] [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_0]) : (arr_1 [i_0 + 1]))))));
    }
    var_16 = ((max(((var_6 ? var_6 : var_4), -var_11))));
    var_17 = var_8;
    var_18 = ((((((!var_8) ? var_11 : (min(var_5, var_1))))) ? (max(((min(var_10, var_10))), ((var_4 ? var_12 : var_11)))) : (max(var_9, ((var_8 ? var_10 : var_3))))));
    #pragma endscop
}
