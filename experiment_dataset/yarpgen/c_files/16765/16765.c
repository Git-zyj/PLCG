/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_0 [11]) ? (arr_0 [i_0]) : ((-2631275715679117497 ? 111 : -2))))) ? (max(((~(arr_1 [i_0]))), ((~(arr_1 [i_0]))))) : ((((arr_1 [7]) ? ((-(arr_0 [3]))) : (arr_0 [i_0]))))));
        var_12 = (arr_1 [i_0]);
        var_13 = (((arr_1 [i_0]) ? (((((((arr_0 [i_0]) ? (arr_0 [8]) : (arr_1 [4])))) ? (arr_0 [i_0]) : (arr_0 [i_0])))) : (((arr_1 [5]) ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (arr_1 [i_0])))));
    }
    var_14 = ((var_11 <= ((var_9 ? -var_0 : var_7))));
    #pragma endscop
}
