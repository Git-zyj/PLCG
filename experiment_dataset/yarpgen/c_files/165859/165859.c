/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [i_0]);
        arr_5 [i_0] &= var_3;
        arr_6 [i_0] [14] = (((((-(arr_0 [i_0])))) ? ((132 ? (arr_0 [i_0]) : (arr_3 [i_0]))) : (max((arr_0 [8]), (arr_2 [i_0])))));
        arr_7 [i_0] = (((arr_0 [i_0]) ? (arr_0 [3]) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    var_10 = var_6;
    #pragma endscop
}
