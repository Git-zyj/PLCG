/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((0 ? 4095 : 1))), ((var_11 ? var_13 : (((0 ? 9502 : 1)))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = var_9;
        var_15 += ((0 ? (arr_1 [i_0 + 2]) : 1));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_16 = ((+((33730 ? (arr_5 [i_1 + 3] [i_1 + 4]) : var_9))));
        var_17 = var_13;

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 = arr_4 [i_1] [i_2];
            arr_8 [i_1] [i_1 - 3] [i_2] = (((arr_5 [i_1 + 2] [i_1 - 2]) || (((18446744073709551615 ? 0 : 0)))));

            for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
            {
                arr_11 [i_1] [i_2] [i_3] = ((((0 || (arr_7 [i_1] [i_1]))) ? 0 : 1));
                var_19 = 31754;
            }
            for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
            {
                arr_14 [i_1] [i_1] [i_4] = var_1;
                arr_15 [i_1] [i_1] [i_1] [i_2] = 24267;
                var_20 = (min(var_20, 255));
                arr_16 [i_1] [i_2] [i_1] = var_0;
            }
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                var_21 *= (((((32752 ? 18446744073709551615 : var_0) & 33730))));
                arr_21 [i_1] = (arr_9 [i_1] [i_2] [i_1]);
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                arr_26 [i_2] [i_2] [i_6] |= (((arr_6 [i_1] [0] [i_6]) ? (arr_6 [i_1 + 2] [i_2] [i_6]) : ((227 ? var_6 : var_1))));
                arr_27 [i_1] [i_1] = ((((((arr_22 [i_1] [i_1]) ? (arr_13 [i_1] [i_1] [i_6]) : (arr_12 [i_1] [i_2])))) ? (((arr_10 [i_1] [4] [i_1] [i_6]) ? var_6 : var_12)) : (((arr_25 [i_1] [i_1] [i_6] [i_2]) ? (arr_19 [i_6] [15]) : (arr_10 [i_1] [i_2] [i_6] [i_1])))));
                arr_28 [i_1] [i_1] [i_1] [i_1] = (arr_19 [i_1] [i_2]);
                var_22 ^= ((65535 & 58979) < (arr_18 [i_6] [i_6] [i_6] [i_1]));
            }
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            arr_33 [i_1] [i_7] = (0 << 0);
            arr_34 [i_1] = (min((max((((arr_10 [i_1 + 4] [i_1 - 3] [i_1 + 4] [i_7]) << (133 - 120))), ((var_0 ? (arr_29 [i_1]) : var_8)))), var_0));
            arr_35 [i_1] [i_1] [i_7] = 18446744073709551615;
            var_23 = 65535;
        }
        var_24 = var_4;
        arr_36 [i_1] = ((((((((var_0 + (arr_4 [i_1] [i_1 - 2])))) ? 82 : 31806))) & ((((((arr_9 [i_1] [i_1] [i_1]) ? 1 : (arr_23 [i_1] [i_1] [i_1] [0])))) ? var_9 : (!4389)))));
    }
    var_25 = var_9;
    var_26 = var_7;
    #pragma endscop
}
