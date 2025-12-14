/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 += (arr_2 [4]);
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = (arr_2 [i_0]);
    }
    var_20 = var_1;
    var_21 = var_4;
    #pragma endscop
}
