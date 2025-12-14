/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0 + 2] &= ((0 ? (arr_0 [i_0 - 2]) : (arr_2 [i_0 + 1] [i_0 + 1])));
        var_19 = (max(var_19, ((((arr_2 [12] [i_0 + 2]) % (1601287197 >= -32749))))));
        arr_4 [i_0] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        arr_8 [i_1] = (((12 >= var_14) ? (~var_7) : (arr_5 [i_1 - 2] [i_1 - 2])));
        var_20 = (((((-(arr_6 [i_1 + 1])))) ? (((arr_5 [i_1] [i_1]) ^ (arr_0 [i_1]))) : (16888712089962239992 <= var_5)));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        var_21 |= 20020;
        arr_12 [i_2 - 1] = (-9223372036854775807 - 1);
        var_22 -= ((0 ? 10 : 727101470));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_17 [i_3] = ((((var_5 ? var_5 : (arr_16 [i_3]))) - var_2));
        var_23 *= ((+((((arr_10 [i_3]) && (arr_14 [i_3]))))));
    }
    var_24 ^= (min(((-(-9223372036854775807 + var_7))), var_8));
    #pragma endscop
}
