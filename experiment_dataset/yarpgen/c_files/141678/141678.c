/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((9002195164013324160 ? ((min((min(var_0, 18123)), 43941))) : 536870911));
    var_12 = 16863;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0 + 3] = var_9;
        arr_5 [16] = (var_3 >= var_2);
        arr_6 [18] = (-64 >= var_0);
    }
    var_13 &= ((((var_2 >= 29608) ? 13008902364818329880 : 32758)));
    #pragma endscop
}
