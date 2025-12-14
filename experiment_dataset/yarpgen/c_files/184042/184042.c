/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_12));
    var_19 = min(var_5, (max(-110, (39 <= var_5))));
    var_20 |= ((max((min(var_12, var_14)), (min(var_15, var_8)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = (max(var_21, ((((((min(var_14, var_10))) ? (((arr_1 [6]) >> (var_11 + 50))) : 0))))));
        var_22 &= ((var_6 >> (((((max((arr_1 [i_0]), (arr_1 [i_0])))) && (arr_0 [i_0]))))));
        var_23 = (min(var_23, (((var_2 ? (arr_0 [i_0]) : var_5)))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_24 = (min(var_24, (((var_8 ? (((arr_2 [i_1] [6]) ? ((var_6 ? 2450786856305489643 : (arr_3 [10]))) : var_2)) : ((((arr_3 [2]) / (((arr_2 [0] [0]) ? (arr_3 [8]) : var_7))))))))));
        arr_4 [10] |= arr_2 [i_1] [4];
    }
    #pragma endscop
}
