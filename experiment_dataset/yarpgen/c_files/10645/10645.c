/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = ((((max(var_0, -99)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = 62;
        arr_3 [i_0] = var_6;
    }
    var_14 = ((var_10 ? ((~(~var_4))) : (((min(var_8, var_9))))));
    var_15 = var_4;
    #pragma endscop
}
