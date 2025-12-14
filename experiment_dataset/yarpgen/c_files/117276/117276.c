/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((0 ? (((-81 ? 2066071963 : 2910481231))) : 6693702636540716357));
        var_20 = ((113 ? (arr_3 [i_0]) : (-238064396 == 121)));
    }
    var_21 = (((--143) - ((-83 ? 9223372036854775801 : 141))));
    var_22 = var_2;
    #pragma endscop
}
