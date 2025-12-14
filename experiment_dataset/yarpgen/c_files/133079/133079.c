/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 + 1] = (((((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_5)) < (arr_1 [i_0]))) ? (((var_2 ? var_2 : var_10))) : (arr_0 [i_0 + 1])));
        var_11 = (max(var_11, ((max((~198), (arr_0 [i_0 - 1]))))));
        var_12 = (min(var_12, ((max((((-(arr_1 [i_0])))), (arr_0 [i_0]))))));
    }
    var_13 += ((((((((var_0 ? 57 : var_7))) ? var_8 : (max(198, var_4))))) ? (((((var_4 ? var_2 : var_9))) ? 191 : ((var_8 ? var_2 : 732037024)))) : (var_8 + -116)));
    var_14 = ((((174 & 57) ? ((max(var_7, var_6))) : var_2)));
    var_15 = (((((~(max(var_1, -1389831588))))) ? ((var_1 ? (((2965727119107400116 ? var_0 : var_10))) : var_2)) : var_3));
    var_16 &= var_6;
    #pragma endscop
}
