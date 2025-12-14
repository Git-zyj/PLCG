/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_2 ? var_0 : (((var_12 ? var_14 : var_8))))) % (((((var_13 ? 2910046505156802970 : 0))) | (var_15 + var_4)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_17 = (min(var_17, (((0 ? ((0 ? 7941941396233219114 : 11643)) : (0 || var_1))))));
        var_18 ^= var_12;
    }
    var_19 = (min(var_19, ((max(((((4018485147765779090 ? 84 : (-127 - 1))) - (var_10 / var_2))), ((min(78, 15993))))))));
    #pragma endscop
}
