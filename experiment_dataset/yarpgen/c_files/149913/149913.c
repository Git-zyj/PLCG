/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 = (max(((min(1723878773, 0))), ((-30163 ? 154 : -3485773462658401069))));
    var_17 = ((((~3485773462658401087) + var_7)));
    var_18 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = -3351475835;
        var_19 ^= ((-(arr_2 [i_0])));
    }
    #pragma endscop
}
