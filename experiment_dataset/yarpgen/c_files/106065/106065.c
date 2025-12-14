/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_3 [4] &= ((~((((arr_0 [4]) && ((var_2 != (arr_1 [1]))))))));
        arr_4 [i_0] = ((((((((28 ? -7272071259437580754 : (arr_2 [i_0])))) ? (arr_2 [i_0]) : ((var_0 ? (arr_1 [i_0]) : var_5))))) ? 1 : (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    var_17 = ((((((((2840400538993913521 ? 3154711389937379442 : 20))) ? var_16 : var_10))) ? ((max((~var_13), (var_0 == var_16)))) : var_2));
    #pragma endscop
}
