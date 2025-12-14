/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = ((var_4 ? (arr_3 [i_0]) : var_2));
        arr_5 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) + var_4));
    }
    #pragma endscop
}
