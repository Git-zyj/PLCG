/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0 + 1] = 14038356566264795;
        arr_3 [i_0] = 32612;
    }
    var_11 = (min(var_0, (((3337092154 * 18446744073709551592) ? var_2 : (~var_2)))));
    var_12 = 1564212997;
    var_13 = ((!((min(var_4, var_0)))));
    #pragma endscop
}
