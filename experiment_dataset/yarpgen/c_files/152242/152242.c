/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = (max(var_16, var_13));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_17 = ((((((arr_3 [0]) ? (arr_1 [i_0] [i_0 - 2]) : (((arr_2 [i_0]) ? (arr_0 [i_0 - 2]) : (arr_1 [i_0] [0])))))) ? (((arr_0 [i_0 - 2]) ? (arr_0 [i_0 - 1]) : (arr_1 [i_0 - 1] [i_0 + 1]))) : (arr_1 [i_0 - 2] [i_0 + 1])));
        arr_4 [1] [i_0] = (((arr_1 [1] [i_0]) ? (arr_3 [7]) : (((arr_0 [i_0 - 3]) ? (arr_1 [0] [i_0 + 1]) : (arr_0 [i_0 - 1])))));
        var_18 |= (arr_3 [i_0]);
        arr_5 [i_0] = ((+((((arr_0 [i_0 - 3]) <= (arr_3 [i_0]))))));
    }
    #pragma endscop
}
