/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(~-3959526294941794362)));
    var_15 = var_1;
    var_16 = 1;
    var_17 = ((((9097021004265736463 ? 1 : -23840))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] &= 3185285172967828311;
        var_18 = (arr_2 [i_0] [i_0]);
    }
    #pragma endscop
}
