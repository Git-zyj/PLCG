/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_7 ? var_0 : (min((1 >= 1), var_5)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = ((var_11 ? ((1 ? var_7 : var_5)) : (var_10 <= var_1)));
        var_14 = (arr_2 [15]);
        arr_3 [i_0] [i_0] = (var_3 || (arr_2 [i_0]));
    }
    #pragma endscop
}
