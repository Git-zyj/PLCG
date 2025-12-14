/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 *= ((((-(((arr_0 [i_0]) >> (((arr_0 [i_0]) - 10256840801515613262)))))) * 255));
        var_21 = (((((((arr_1 [i_0] [2]) + (arr_1 [i_0] [i_0]))) + (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : var_0)))) >= var_15));
        arr_2 [i_0] = var_8;
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_22 = (arr_5 [i_1]);
        var_23 = (i_1 % 2 == zero) ? ((((arr_5 [i_1]) << (18446744073709551615 - 18446744073709551615)))) : ((((((arr_5 [i_1]) + 9223372036854775807)) << (18446744073709551615 - 18446744073709551615))));
        arr_6 [1] [i_1] = (~255);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_24 = (min(var_24, 3526166258));
        arr_9 [i_2] = var_1;
        arr_10 [i_2] |= ((-(arr_7 [i_2] [i_2])));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_13 [i_3] = ((((1 / 748248767) & (((var_6 >> (748248773 - 748248758)))))) % (arr_12 [i_3] [i_3]));
        var_25 = ((((((arr_12 [i_3] [i_3]) ? (max((arr_11 [i_3]), 18446744073709551615)) : (((~(arr_12 [i_3] [i_3]))))))) ? (min((arr_12 [i_3] [i_3]), (arr_12 [i_3] [i_3]))) : (((!(arr_12 [i_3] [i_3]))))));
        var_26 = (((18446744073709551615 ? (~9502851306315260399) : (arr_12 [i_3] [i_3]))));
        var_27 += (arr_11 [i_3]);
    }
    var_28 = (min((((((-692994791 + 2147483647) << (18446744073709551607 - 18446744073709551607))) ^ 1)), -126));
    var_29 = (min(var_29, ((max((~var_1), ((((min(var_18, 1))) ? var_11 : (var_1 | 15320))))))));
    #pragma endscop
}
