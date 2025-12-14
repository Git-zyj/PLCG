/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_1));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0 + 2] [18] &= (arr_0 [i_0 - 2] [i_0 - 4]);
        var_11 = arr_0 [i_0 + 1] [i_0];
        var_12 = (!1);
    }
    var_13 = ((var_2 ? var_8 : (!var_1)));
    #pragma endscop
}
