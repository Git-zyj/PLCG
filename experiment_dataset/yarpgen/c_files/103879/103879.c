/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = var_13;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 |= (arr_0 [i_0] [i_0]);
        var_22 = (arr_0 [i_0] [i_0]);
        arr_2 [i_0] = (arr_0 [9] [i_0]);
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] = (arr_4 [1]);
        var_23 = (arr_3 [i_1]);
    }
    #pragma endscop
}
