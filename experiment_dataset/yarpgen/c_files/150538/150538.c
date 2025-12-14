/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 += ((((arr_0 [i_0]) ? (var_4 ^ var_10) : (((max((arr_0 [i_0]), (arr_1 [i_0] [1]))))))));
        var_14 = (max(((((var_0 != (arr_1 [i_0] [i_0]))) ? (((arr_0 [i_0]) & var_2)) : (arr_0 [i_0]))), (arr_1 [1] [i_0])));
        arr_2 [i_0] [i_0] = ((max((arr_0 [i_0]), (arr_1 [i_0] [i_0]))));
    }
    var_15 = 184;
    var_16 = (((((var_7 ? var_3 : (65535 >= var_8)))) == 81));
    var_17 = (min(var_17, var_5));
    var_18 = ((var_0 ? var_0 : var_10));
    #pragma endscop
}
