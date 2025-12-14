/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_3;

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_13 |= -91;
        arr_2 [i_0] = 24;
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_14 = var_1;
        arr_6 [i_1] = (((arr_1 [i_1]) ? (((arr_3 [i_1]) ? (arr_4 [i_1 + 1]) : (arr_5 [i_1]))) : -59129));
    }
    var_15 = (-1 * var_5);
    #pragma endscop
}
