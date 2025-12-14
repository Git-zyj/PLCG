/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_0;
    var_12 |= (~((~((0 ? 3054366148528411300 : -3054366148528411325)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (-127 - 1);
        arr_4 [i_0] &= ((14724536923158859068 > (arr_0 [i_0])));
        var_13 = ((~(arr_0 [i_0])));
        var_14 += ((-(((104 || (arr_2 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] = (((-20 + 2147483647) << (((((arr_0 [i_1]) ? (((-(arr_6 [i_1] [i_1])))) : 7477769470986077690)) - 18446744073709551580))));
        arr_8 [7] = var_3;
    }
    #pragma endscop
}
