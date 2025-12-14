/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((-54096 ? var_5 : ((max(var_3, var_3))))));
    var_11 = (max(var_11, ((var_4 ? var_5 : var_3))));
    var_12 = (((var_8 ? (!var_5) : ((1337718023 >> (var_4 - 26590))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [9] = (((((0 - (max((arr_0 [i_0]), var_7))))) && (((-400582500 ? (((arr_0 [i_0]) ? (-2147483647 - 1) : var_5)) : var_5)))));
        arr_3 [i_0] [i_0] = (((((max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((!(arr_1 [i_0])))) : (((arr_1 [0]) ? var_0 : 15945)))));
        arr_4 [5] = (((-9223372036854775807 - 1) ? (arr_1 [10]) : (((max((arr_0 [i_0]), var_2)) - ((var_7 ? (arr_0 [i_0]) : -1337718036))))));
    }
    #pragma endscop
}
