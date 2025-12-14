/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += 15315;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 ^= ((((((var_9 ? (arr_1 [i_0]) : var_6))) ? ((var_2 ? (arr_1 [i_0]) : 8191)) : (((-(arr_0 [4])))))));
        var_12 *= 12507759032867468417;
        var_13 = arr_1 [i_0];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_14 *= 4294959104;
        var_15 = arr_3 [i_1] [10];
    }
    var_16 ^= ((((!(var_3 || 52844))) ? var_2 : (((-12367 ^ 52844) ? var_4 : (((var_2 ? 1 : var_4)))))));
    #pragma endscop
}
