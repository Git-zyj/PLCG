/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((var_3 ? (min(((var_12 ? var_10 : var_1)), (((arr_1 [i_0] [i_0]) ? 7338771511682781868 : (arr_0 [i_0 + 2]))))) : (arr_0 [i_0])));
        arr_4 [i_0] = ((4294967285 || -4315854068671792599) ? var_8 : (arr_2 [i_0]));
        arr_5 [i_0] = (max((((var_15 ? 4294967285 : var_5))), (((var_16 ? var_1 : var_0)))));
        var_19 = (((arr_2 [i_0]) ? (arr_0 [i_0 - 2]) : ((((((arr_1 [i_0] [i_0]) ? -1 : (arr_1 [i_0 - 1] [10])))) ? (arr_1 [i_0] [9]) : (((arr_2 [i_0]) ? (arr_1 [1] [1]) : var_2))))));
        var_20 = (max(var_20, (((((((arr_1 [i_0 - 1] [i_0]) ? -var_1 : var_4))) ? (((+(((arr_2 [6]) ? (arr_0 [i_0]) : (arr_2 [0])))))) : var_0)))));
    }
    var_21 = var_12;
    var_22 = var_18;
    #pragma endscop
}
