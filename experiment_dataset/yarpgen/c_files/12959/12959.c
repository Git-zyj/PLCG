/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((4088 ? -63333750 : ((63333753 ? var_0 : var_1))))) ? ((((var_5 || (((var_13 ? 25 : 63333753))))))) : (min(255, (min(var_5, var_1)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((41337 % 35024461) ? (~255) : -1783949648));
        var_21 = var_2;
    }
    #pragma endscop
}
