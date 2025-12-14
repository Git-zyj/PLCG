/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (min((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))), ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? ((max((arr_0 [i_0] [i_0]), (arr_1 [i_0])))) : ((max((arr_1 [i_0]), (arr_0 [i_0] [i_0]))))))));
        var_18 = (max((max((arr_0 [i_0] [i_0]), (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))), ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = max((arr_0 [i_0] [i_0]), ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : ((max((arr_0 [i_0] [i_0]), (arr_1 [i_0])))))));
    }
    var_19 = ((var_7 ? var_2 : ((((min(var_4, var_4))) ? var_17 : ((var_10 ? var_4 : var_7))))));
    var_20 = (max(var_20, var_4));
    var_21 |= ((var_12 ? (max(var_2, var_12)) : ((min(var_7, var_10)))));
    var_22 = (((max(var_13, (((var_14 ? var_14 : var_15)))))) ? var_15 : var_12);
    #pragma endscop
}
