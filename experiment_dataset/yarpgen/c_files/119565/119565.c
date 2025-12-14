/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min(((3 ? -113 : 43)), ((max(-13, 74)))))) ? ((((-67 ? 45 : 72)) >> (-66 + 96))) : var_3));
    var_16 |= (((((((max(var_4, var_4))) ? var_13 : (~var_10)))) ? ((min(-88, 29))) : (((min(2146959360, var_2)) % var_13))));
    var_17 = var_13;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((((-(arr_0 [i_0])))) < (-112 & 2989088685)));
        var_18 &= ((((~(arr_1 [i_0])))) | ((((((-127 - 1) + 2147483647)) << (((-51 + 71) - 20))))));
    }
    #pragma endscop
}
