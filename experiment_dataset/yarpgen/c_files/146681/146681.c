/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_10 = var_8;
        arr_3 [0] |= (!0);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_11 = 1;
        var_12 = (~((-(var_2 + var_9))));
    }
    var_13 = var_2;
    #pragma endscop
}
