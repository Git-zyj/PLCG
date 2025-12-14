/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((var_13 - (((10 - 1) ? (-8 - 1) : var_14)))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_20 |= ((1 & ((28 ? -17 : 4294967286))));
        arr_2 [i_0] [i_0 - 2] = (((arr_1 [i_0 - 2]) + ((+((63230 ? (arr_1 [i_0]) : (arr_1 [i_0 + 1])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((-24 ? 1125899906842623 : 1956951627));
        var_21 = ((arr_4 [i_1] [i_1]) ? 4294967286 : 51);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_22 = (max(var_22, ((((((var_7 ? (arr_10 [i_2]) : -6202351405687328755))) ? 38 : ((~(arr_10 [i_2]))))))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_23 = (((2147483630 < 8) ? (18087 != 1) : ((((((arr_14 [i_3] [i_3] [i_3]) >> (-38 + 56)))) ? var_3 : (var_11 == var_15)))));
            var_24 = (((((~(arr_8 [i_2])))) | (((arr_14 [i_2] [i_3] [i_2]) % ((10727 ? var_8 : (arr_8 [i_2])))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_25 = (var_18 && (arr_15 [i_4] [i_2]));
            var_26 = (((arr_14 [i_4] [i_4] [i_4]) ? (arr_14 [i_2] [i_4] [i_4]) : (arr_14 [i_2] [i_2] [i_2])));
            arr_17 [i_2] [1] [i_4] = ((var_15 * (!-29)));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_27 = (4294967288 ? 1553502831 : 54809);
            var_28 *= ((((-(arr_0 [i_2] [i_5])))) * ((((~(arr_14 [i_2] [i_2] [i_2]))) * (arr_0 [i_2] [i_5]))));
        }
        var_29 = ((((((arr_10 [i_2]) >> (var_17 - 125)))) | ((-8 ? -743611912 : var_5))));
        arr_20 [i_2] [i_2] = ((!(((1 ? (arr_9 [i_2] [i_2]) : var_1)))));
    }
    #pragma endscop
}
