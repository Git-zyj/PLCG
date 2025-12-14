/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 ^= (((max(var_11, (arr_1 [1])))));
        arr_3 [i_0] [i_0] = (~var_10);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] = 192;
        arr_9 [i_1] = (arr_4 [i_1] [i_1]);
    }
    var_16 &= ((((((var_3 ? var_8 : var_10)) & (var_3 <= var_7))) | var_13));
    #pragma endscop
}
