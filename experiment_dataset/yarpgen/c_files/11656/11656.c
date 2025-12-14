/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_2;

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_15 = (min(var_15, (max((arr_1 [10]), (max((arr_1 [2]), (arr_0 [i_0 - 4])))))));
        var_16 = ((!(((var_8 | (14 == 1))))));
        arr_3 [i_0] = -var_11;
        arr_4 [i_0] = (((arr_0 [i_0]) > 60711));
    }
    #pragma endscop
}
