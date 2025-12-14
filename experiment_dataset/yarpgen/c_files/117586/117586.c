/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = 1;
        var_15 = ((893000850283390038 ? (arr_0 [i_0]) : ((4444571150024479117 ? 74 : (arr_1 [i_0])))));
    }
    #pragma endscop
}
