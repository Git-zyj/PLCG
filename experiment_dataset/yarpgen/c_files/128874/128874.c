/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_20 ^= (arr_3 [i_0] [0]);
        var_21 -= (((arr_0 [6]) ? (~9223372036854775807) : ((max((arr_0 [2]), (arr_0 [2]))))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = ((((~(min((arr_4 [i_1] [17]), 9223372036854775807)))) / (((~((-9223372036854775807 ? -9223372036854775807 : 9223372036854775807)))))));
        var_22 = ((((((!(arr_5 [i_1]))))) <= (((arr_5 [i_1]) ? (arr_4 [i_1] [i_1 + 1]) : (arr_4 [i_1 - 1] [i_1 + 1])))));
        arr_7 [i_1] = var_16;
        arr_8 [i_1] = (((max((9223372036854775807 - var_8), (arr_4 [i_1] [i_1]))) ^ (((((var_14 ? 9223372036854775807 : var_5)))))));
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_23 = (((((((max(var_10, var_4))) ? (9223372036854775807 / 9223372036854775807) : var_18))) ? (min(var_17, ((var_10 ? var_12 : var_14)))) : ((((((var_15 ? var_13 : 9223372036854775807)) > var_4))))));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            arr_15 [i_2] [i_2] [i_2] |= ((9223372036854775807 ? -9223372036854775807 : -9223372036854775807));
            arr_16 [i_2] |= (var_12 ? var_9 : (arr_13 [i_2] [i_3 - 1] [i_3 - 1]));
            arr_17 [i_2 + 3] [i_3] = (((arr_4 [i_2] [i_2 - 2]) ? var_11 : ((var_3 ? (arr_13 [i_2] [i_2] [i_3]) : (arr_11 [i_2])))));
            var_24 = (min(var_24, (((var_9 ? (arr_12 [i_3 + 2] [i_3 + 2]) : (arr_10 [i_2 + 2]))))));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_25 *= (9223372036854775807 + -9223372036854775807);
            var_26 += (arr_14 [i_2] [i_4] [i_2]);
            arr_20 [13] = ((((((arr_14 [i_4] [i_2 - 2] [i_4]) ? (arr_14 [i_2] [i_2] [i_2]) : (arr_14 [i_4] [i_2] [i_4])))) ? var_13 : (var_12 + var_6)));
            arr_21 [0] [i_2] = (((arr_4 [7] [i_4]) ? (arr_11 [i_4]) : ((((max((arr_18 [i_2 - 2] [i_2 - 2]), var_12))) ? var_1 : (((arr_19 [i_4]) % var_16))))));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            arr_25 [i_2 - 2] = ((((var_2 < (var_14 + var_18)))));
            arr_26 [4] [i_5] [i_5] = ((+((~(((arr_23 [i_5] [i_2]) ? -9223372036854775793 : (arr_10 [i_5])))))));
        }
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_29 [i_6] = (((-9223372036854775793 + 9223372036854775807) >> (((max(var_15, ((((arr_9 [i_6]) > (arr_14 [i_6] [i_6] [i_6])))))) - 3186829288))));
        arr_30 [i_6] = (max(var_2, (((arr_2 [i_6] [i_6]) ? (arr_2 [i_6] [i_6]) : var_14))));
    }
    var_27 = (min(var_27, var_8));
    #pragma endscop
}
