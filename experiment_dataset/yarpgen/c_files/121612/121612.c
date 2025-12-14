/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 65535;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_15 = (max(var_15, (arr_3 [i_1 - 2] [i_1 + 2])));
            arr_5 [i_1] [i_0] = (((((arr_2 [i_1 - 2] [i_1 + 1]) + 2147483647)) << (((arr_1 [i_1 - 1]) - 1137797785))));

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [0] [i_2] = 63;
                var_16 *= ((94 << (0 / 46114)));
                var_17 = ((arr_2 [i_1] [i_1 + 1]) ^ (var_7 / var_11));
                arr_9 [i_0] [i_1 - 2] = (~63);
                var_18 -= ((~(((arr_6 [i_1] [i_2]) ? 46113 : 1))));
            }
        }
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            arr_13 [i_0] = (!19422);
            arr_14 [i_0] [i_0] = (arr_6 [i_3] [i_0]);
            var_19 = ((var_4 ? (arr_10 [i_3] [i_0]) : (var_10 / 31)));
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                arr_19 [i_0] [i_4] = (((arr_1 [i_4]) / (arr_1 [i_5])));
                var_20 = (max(var_20, (var_0 & var_2)));
                var_21 = (min(var_21, (((arr_10 [i_0] [i_4]) / (arr_10 [i_0] [i_5])))));
                arr_20 [i_0] = (((0 ? 65535 : 8829168108030127787)));

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    arr_25 [i_0] [i_4] [i_5] [i_0] [i_6] [i_6] = (46114 || 46128);
                    arr_26 [i_0] [i_4] [i_5] [i_4] = ((var_7 / (8718461574497811309 << 0)));
                }
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    arr_30 [i_0] [i_4] [i_4] [i_4] [i_4] [5] = var_11;
                    var_22 = (arr_18 [i_7] [i_7 - 1] [i_7 - 1] [i_0]);
                    var_23 -= var_3;
                    var_24 += (((var_2 ^ var_4) % ((63 ? 19422 : 1))));
                    arr_31 [i_0] [i_5] = 1;
                }
            }
            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                arr_34 [i_0] [i_4] [i_8 + 1] = 19444;

                for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 3; i_10 < 11;i_10 += 1) /* same iter space */
                    {
                        var_25 -= (((1 & var_5) ? var_4 : var_1));
                        arr_40 [i_4] |= ((((arr_7 [i_0] [i_0] [i_8 + 1]) < (arr_23 [i_10] [i_9] [i_4] [i_0]))));
                    }
                    for (int i_11 = 3; i_11 < 11;i_11 += 1) /* same iter space */
                    {
                        var_26 = (min(var_26, -347747458550162404));
                        var_27 -= var_3;
                        var_28 = (arr_21 [i_8] [i_8] [i_0] [i_8] [i_8] [1]);
                        arr_43 [i_0] = (arr_10 [i_0] [i_8 + 1]);
                    }
                    arr_44 [i_4] [i_9] [i_9] [i_8] [i_4] [i_9] |= (arr_39 [i_0] [i_4] [i_4] [i_4] [i_8 + 1] [i_9]);
                    var_29 -= (arr_10 [i_8 + 1] [i_8 + 1]);
                }
                for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                {
                    arr_47 [i_0] [4] [i_0] [i_8] [i_12] = (arr_32 [i_0] [i_12] [i_8]);
                    arr_48 [i_0] [9] [i_4] [i_0] = (arr_35 [i_0] [i_8 + 1] [i_0] [i_4] [i_8] [i_12]);
                    arr_49 [i_0] [i_12] [1] [1] [i_0] [i_0] = -var_3;
                }
                arr_50 [i_0] [i_8] = var_8;
                var_30 ^= ((~(arr_23 [i_4] [i_8] [i_8 + 1] [i_8])));
            }
            arr_51 [i_0] [i_0] = -8829168108030127795;
            var_31 = (1515773259 || 135);
            arr_52 [i_0] [i_0] [i_4] = var_10;
        }
        arr_53 [i_0] = ((var_4 ? (arr_3 [i_0] [i_0]) : 120));
        var_32 = ((193 >> (46113 - 46100)));
        arr_54 [8] |= ((2 ? (0 < 2) : var_6));
    }
    var_33 = (min(var_33, ((max((~var_4), (!var_5))))));
    #pragma endscop
}
