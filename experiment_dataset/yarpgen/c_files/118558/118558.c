/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (max((arr_1 [i_0]), (min(((max(var_1, var_11))), -15540))));
        var_18 = ((((((-(arr_0 [i_0]))) <= (arr_0 [i_0]))) ? 45784 : (((arr_0 [i_0]) << (((arr_0 [10]) - 2543033839))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 ^= (arr_4 [i_1]);
        arr_5 [i_1] = (arr_3 [i_1] [i_1]);
    }
    var_20 = var_4;
    #pragma endscop
}
