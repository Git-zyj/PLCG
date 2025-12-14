/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((1 ? 1 : 1)))));
    var_12 = (((((min(0, var_8)))) ? var_8 : var_4));
    var_13 = ((17 ? var_9 : var_0));
    var_14 = (min(var_14, ((min(var_7, var_8)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = 0;
        arr_3 [i_0] [i_0] = (arr_1 [4]);
    }
    #pragma endscop
}
