/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_10;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (max((arr_1 [i_0]), ((min((arr_1 [i_0]), 5)))));
        var_20 |= ((((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))) ? ((~(arr_1 [i_0]))) : (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))));
    }
    var_21 -= ((((1 ? 31 : 0)) & var_9));
    #pragma endscop
}
