/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (arr_2 [i_0] [i_0]);
        arr_4 [10] [i_0] = (-2147483639 <= 14);
    }
    var_19 = (max(var_19, (var_16 != var_7)));
    #pragma endscop
}
