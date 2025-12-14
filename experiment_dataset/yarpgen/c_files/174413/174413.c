/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = -1728562094061981231;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_17 = (((((1 ? (arr_5 [i_1] [i_1]) : 1))) ? (!-4802143259070507686) : 1));
        var_18 = ((125 - (((arr_4 [6]) - 52006))));
    }
    var_19 |= var_13;
    #pragma endscop
}
