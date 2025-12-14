/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] = ((((max((~var_2), (var_2 ^ var_1)))) ? var_3 : var_0));
        var_10 -= ((var_3 <= ((var_2 ? 1 : 78))));
        arr_4 [i_0] = var_9;
        arr_5 [i_0] [i_0 + 1] = (((~var_1) | (var_9 || var_8)));
    }
    var_11 = ((-var_2 ? var_5 : -var_3));
    #pragma endscop
}
