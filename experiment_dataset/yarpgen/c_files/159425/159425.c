/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (1 & 1);
    var_12 = (var_8 + (min(var_8, var_1)));
    var_13 = (max(var_13, ((min(var_0, var_6)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (max(var_14, (arr_1 [i_0] [i_0])));
        var_15 += ((((4099043519 == (((arr_1 [i_0] [9]) ? var_2 : 1)))) ? (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : (((((var_3 ? (arr_0 [i_0] [i_0]) : var_4))) ? var_4 : (max((arr_0 [21] [i_0]), (arr_2 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (arr_0 [i_1] [i_1]);
        var_16 = (2170216770502823267 / var_2);
        var_17 ^= -var_1;
        arr_8 [1] = (arr_3 [i_1]);
    }
    var_18 = min(((-2688936379072822019 - ((max(1, var_3))))), var_6);
    #pragma endscop
}
