/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [18] = var_4;
        var_20 += ((-((min((min(-1, -66)), var_11)))));
    }
    var_21 = ((!(((max(var_8, var_6))))));
    var_22 = (min(var_22, ((min(-77, -66)))));
    #pragma endscop
}
