/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 -= 32;
        var_14 = (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_15 = ((var_8 ? var_3 : var_2));
        var_16 = (((((29538 ? (arr_2 [i_1]) : (arr_4 [i_1] [i_1])))) ? -8736487846513465381 : 0));
    }
    for (int i_2 = 4; i_2 < 14;i_2 += 1)
    {
        var_17 = (arr_0 [i_2] [i_2]);
        var_18 = 0;
    }
    var_19 |= ((var_8 ? 7 : -907129720));
    var_20 ^= (9188113518554802685 ? var_8 : 1);
    var_21 = var_3;
    #pragma endscop
}
