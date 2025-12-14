/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = (max(var_17, var_13));
    var_18 = var_7;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        arr_4 [i_0] [i_0 - 2] |= (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_8 [i_1] |= 22;
        var_20 = ((((((arr_0 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1])))) ? (arr_0 [i_1]) : (((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1])))));
    }
    #pragma endscop
}
