/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_6 + ((min(((max(-1, var_14))), (min(var_8, 32767)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (max(var_21, ((((arr_2 [i_0] [i_0]) & -11)))));
        var_22 = (((arr_2 [i_0] [i_0]) + (arr_2 [i_0] [i_0])));
        var_23 |= var_9;
        var_24 = (max(var_24, (1 + 0)));
    }
    #pragma endscop
}
