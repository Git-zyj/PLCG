/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((var_3 ? (!2162102824) : var_4));
        arr_4 [i_0] [i_0] = var_14;
    }
    var_15 = 4003135631168076607;
    var_16 = var_7;
    #pragma endscop
}
