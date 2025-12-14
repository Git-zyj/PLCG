/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(6405801347933729024, var_6));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = 6405801347933729024;
        var_14 = ((arr_1 [i_0] [i_0]) | var_1);
    }
    #pragma endscop
}
