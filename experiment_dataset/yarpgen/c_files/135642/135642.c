/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((var_0 | (((var_10 ^ var_2) ^ var_10))));
    var_15 *= var_0;
    var_16 |= var_12;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (max((arr_1 [i_0] [i_0]), (((arr_1 [i_0] [i_0]) | 0))));
        arr_3 [i_0] = (((((((arr_1 [i_0] [i_0]) < (arr_1 [i_0] [i_0]))))) - -10));
        arr_4 [0] = ((+(((14431 - var_2) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (-2147483647 - 1)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = (((arr_5 [i_1]) ? ((5555451520075050607 ? (arr_6 [i_1] [i_1]) : -308159209)) : 14417));
        arr_8 [i_1] [i_1] = (((arr_5 [i_1]) & (arr_5 [i_1])));
        var_17 = (14427 / var_4);
    }
    #pragma endscop
}
