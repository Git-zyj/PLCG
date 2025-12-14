/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -119;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0 + 1]) ? (arr_0 [8] [8]) : var_11));
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = (max((((65530 ? (arr_0 [i_0] [i_0 + 1]) : var_10))), (max((arr_0 [i_0] [i_0 + 3]), (arr_1 [i_0 + 1])))));
        arr_5 [i_0] = 4354789814146346462;
        var_13 = (arr_0 [i_0] [i_0]);
    }
    #pragma endscop
}
