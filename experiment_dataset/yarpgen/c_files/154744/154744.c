/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            arr_4 [0] |= var_10;
            var_20 ^= ((-1307168743 ? 0 : (((27970 / (arr_2 [i_1]))))));
        }
        arr_5 [1] &= var_6;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_21 -= (max(((55 & (arr_7 [i_2]))), (((((arr_6 [i_2] [i_2]) >= 181)) ? 1 : ((-87 ? (arr_6 [15] [5]) : var_15))))));
        arr_8 [2] &= ((((((arr_7 [i_2]) != (arr_7 [i_2])))) << ((((181 ? (max(2042465906, 0)) : var_4)) - 2042465899))));
        arr_9 [i_2] = ((2042465903 << (((max(-2042465903, ((min(15372, 30))))) - 30))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_13 [i_3] = (((-32 + 2147483647) << (arr_10 [i_3])));
        arr_14 [i_3] [i_3] = (181 | 135);
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 19;i_4 += 1)
    {
        var_22 ^= (((var_8 >= -2042465906) ? (var_18 ^ var_16) : (((arr_18 [1] [1]) & var_14))));
        var_23 *= 65526;
    }
    var_24 *= (max((((min(var_10, 1)) & 10916101147618022925)), (min((var_0 * 0), (1 >= 512067289)))));
    var_25 -= var_8;
    var_26 = var_14;
    #pragma endscop
}
