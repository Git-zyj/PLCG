/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(18416, (-9223372036854775807 - 1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_21 ^= (arr_0 [i_0 + 1]);
        var_22 = (((arr_1 [10]) / var_5));
        arr_2 [i_0] [1] = ((var_14 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1])));
        var_23 = -18403;
    }
    #pragma endscop
}
