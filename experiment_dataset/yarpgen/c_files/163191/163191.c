/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = var_15;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_21 = (((arr_2 [i_0 - 3] [i_0 + 2]) ? (arr_1 [i_0 - 3]) : ((var_6 ? (arr_1 [i_0 - 1]) : (arr_0 [i_0])))));
        arr_3 [i_0] = ((~(arr_2 [i_0] [i_0 + 3])));
        var_22 = (arr_1 [16]);
        arr_4 [i_0] = (((arr_0 [i_0]) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_0)) : var_13));
        arr_5 [i_0] = ((((((arr_2 [i_0 + 2] [i_0 + 1]) << (((arr_2 [19] [i_0 - 2]) - 911253141554850278))))) ? (((arr_2 [i_0 - 3] [i_0 - 1]) ? (arr_2 [i_0 - 3] [i_0 - 1]) : (arr_2 [i_0 - 3] [i_0 - 1]))) : (((((var_13 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [19])))) ? (((~(arr_1 [i_0 - 1])))) : var_0))));
    }
    var_23 = var_2;
    #pragma endscop
}
