/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (~var_11);
        arr_4 [i_0] = 4266908802;
        var_18 *= (-6899903725954892306 | -6899903725954892306);
        var_19 = (max(var_19, (var_15 / -6899903725954892304)));
        arr_5 [i_0] = var_1;
    }
    var_20 = (max(var_20, (((-((((var_7 ? var_16 : -9027393558256178755)) & (((var_8 ? var_2 : var_4))))))))));
    #pragma endscop
}
