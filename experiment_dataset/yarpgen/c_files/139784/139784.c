/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_6;
        var_10 = (min(var_10, var_1));
        arr_5 [i_0] = (((arr_2 [i_0 + 1]) <= var_7));
    }
    var_11 = var_0;
    #pragma endscop
}
