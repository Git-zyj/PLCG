/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_12, -9294));
    var_21 = (var_5 - var_17);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_6;
        arr_4 [i_0] = ((-32748 ? -77 : 9061348511985894156));
    }
    #pragma endscop
}
