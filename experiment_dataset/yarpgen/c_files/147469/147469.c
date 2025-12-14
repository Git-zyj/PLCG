/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_12 = (max(var_12, (arr_0 [i_0 - 3] [i_0 + 3])));
        var_13 = (min(var_13, (arr_0 [i_0 - 2] [i_0 - 1])));
        var_14 = (max(var_14, (((((((((arr_1 [7] [7]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0 + 3] [1]) : (arr_0 [i_0 - 1] [i_0 - 1])))) ? ((9075888410738578088 ? ((((arr_1 [13] [9]) ? -9075888410738578093 : (arr_1 [i_0] [i_0])))) : (arr_0 [i_0] [4]))) : ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [4]) : (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0 + 2]) : (arr_0 [i_0] [i_0])))))));
        var_15 = (max(var_15, (arr_1 [i_0 - 2] [0])));
    }
    var_16 = (max(var_16, var_2));
    var_17 *= var_11;
    var_18 -= ((var_4 ? var_5 : var_2));
    #pragma endscop
}
