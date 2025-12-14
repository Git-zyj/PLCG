/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (min((((var_9 >= ((var_7 ? var_4 : var_4))))), (((((var_5 ? var_8 : var_3))) ? ((255 ? var_2 : var_4)) : (min(33554176, 239))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (min(var_11, (((var_2 != (arr_0 [i_0] [i_0]))))));
        var_12 = (((arr_0 [0] [0]) != (arr_1 [i_0])));
    }
    #pragma endscop
}
