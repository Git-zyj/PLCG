/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 207;
    var_20 = (min(9223372036854775799, var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 = (~var_6);
        arr_2 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
    }
    #pragma endscop
}
