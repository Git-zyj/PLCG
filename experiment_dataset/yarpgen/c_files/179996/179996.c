/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = ((var_7 ? ((-100 ? (arr_1 [i_0] [i_0]) : var_1)) : 32736));
        var_13 = (min(((~(arr_0 [i_0] [i_0]))), ((0 ? 11304 : 28336))));
        arr_3 [i_0] [i_0] = -350581586;
        var_14 += 2379;
    }
    var_15 += var_6;
    var_16 = (max(1, 32));
    #pragma endscop
}
