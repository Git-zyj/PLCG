/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = (max(var_13, ((var_8 < (var_5 | 1)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [1] = ((((arr_1 [i_0] [i_0]) & var_11)));
        arr_4 [i_0] = ((var_0 ? (arr_2 [i_0]) : ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        arr_5 [18] [18] = ((~((((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? (((44421 & (arr_2 [i_0])))) : var_5))));
    }
    var_17 *= (113057741605124388 & 17210235466003975355);
    #pragma endscop
}
