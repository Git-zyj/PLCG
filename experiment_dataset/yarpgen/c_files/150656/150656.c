/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_7, var_6));
    var_19 = (max((max(((min(var_11, var_14))), (~var_15))), var_0));
    var_20 = ((-((max(var_8, (max(var_3, var_2)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_21 = var_6;
        var_22 = -var_11;
    }
    #pragma endscop
}
