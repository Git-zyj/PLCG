/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = var_6;
        var_19 = (max(var_19, (((!(!var_4))))));
        arr_2 [i_0] = (~3795839149619754937);
    }
    var_20 = -2006868480471783600;
    var_21 = ((((21214 ^ (max(11574097238750566817, 232)))) != (!var_7)));
    #pragma endscop
}
