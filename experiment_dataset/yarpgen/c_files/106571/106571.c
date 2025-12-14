/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, -225));
    var_15 = (var_8 >= var_0);
    var_16 = (min(var_16, ((min(var_5, (max(var_7, ((var_0 ? var_13 : var_10)))))))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 += (((((((arr_0 [2]) ? var_8 : (arr_0 [10]))))) ? (min((((!(arr_1 [8] [8])))), (((arr_1 [8] [8]) ? var_6 : (arr_2 [i_0]))))) : 0));
        var_18 = (max(((min(var_1, (arr_0 [i_0])))), (min((((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : 0)), (((var_12 ? var_8 : var_2)))))));
    }
    var_19 = var_2;
    #pragma endscop
}
