/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = (max(var_16, (arr_1 [i_0])));
        arr_2 [i_0] &= (-1789045455 ? (((var_13 | 1906202159) ? ((-(arr_1 [i_0]))) : (arr_1 [i_0]))) : (arr_1 [2]));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_17 -= ((+(min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1])))));
        var_18 = var_15;
    }
    var_19 = (max(var_19, var_9));
    var_20 &= var_13;
    #pragma endscop
}
