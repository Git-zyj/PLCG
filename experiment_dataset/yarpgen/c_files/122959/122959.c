/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((max(-var_7, (max(((-57026910 ? var_3 : 4294967295)), var_10)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = (max(var_17, var_1));
        arr_2 [i_0] [i_0] = -var_8;
        var_18 = (max(var_18, (!-var_7)));
        arr_3 [i_0] [i_0] = ((var_11 ? var_9 : (arr_1 [i_0] [13])));
    }
    #pragma endscop
}
