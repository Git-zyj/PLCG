/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (~4422079544672936189);
        var_15 *= var_8;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((8191 ? (var_1 && var_1) : (arr_3 [i_0]))))));
                    arr_7 [i_1] [i_1] = var_8;

                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        var_17 = ((571957152676052992 != (arr_4 [i_1] [i_2 - 3] [i_1])));
                        var_18 = ((23345 << (((~2755344780) - 1539622502))));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_19 = (arr_8 [i_0] [i_1] [i_2] [i_3 + 1]);
                            var_20 = var_0;
                            var_21 = (arr_12 [i_3]);
                        }
                    }
                    for (int i_5 = 4; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_22 = ((arr_4 [i_2 - 1] [i_5 + 1] [i_1]) || (arr_4 [i_2 - 1] [i_2 - 1] [i_1]));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_23 = 15293978225353453577;
                            arr_18 [i_0] [i_0] [i_1] [i_5 - 4] [i_6] [i_0] = ((var_12 ? 998921263 : (arr_3 [i_1])));
                        }
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            var_24 = ((+((((arr_10 [i_2]) >= 8199)))));
                            arr_22 [9] [i_1 - 1] [9] [i_1] [i_1] [i_1] [i_1] = ((((var_1 ? (arr_11 [i_7] [i_2] [6] [13]) : var_7)) <= (arr_10 [i_1 - 1])));
                        }
                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            arr_25 [i_1] [i_1] [i_2 - 2] [i_5] [i_2 - 2] = ((~(arr_16 [i_2] [i_5] [i_1])));
                            arr_26 [i_1] = (arr_5 [i_0]);
                            var_25 = (arr_16 [i_1] [i_1 + 1] [i_1]);
                            arr_27 [i_1] [i_1] [12] [i_1] [i_1] [1] = -var_10;
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_32 [i_1] [i_1] [10] [i_1] [i_1] [5] = (((arr_17 [i_5 + 1] [i_5 + 1] [i_5] [i_5] [i_5]) != (arr_31 [i_1 - 1] [i_1 + 1] [i_2 - 1] [i_5 - 4] [5])));
                            arr_33 [i_0] [i_1] [i_0] [i_1] [i_9] = (arr_9 [i_1 + 1] [i_1] [i_2 - 3]);
                            var_26 = (arr_0 [i_2 - 3] [i_5 - 3]);
                        }
                    }
                    for (int i_10 = 4; i_10 < 13;i_10 += 1) /* same iter space */
                    {

                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            arr_39 [i_0] [i_1] [i_0] [i_10] [i_0] [7] [i_2] = (((549755813887 % -64) ? 13 : 18446743523953737725));
                            var_27 = ((((~(arr_3 [i_1]))) | -1));
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            arr_42 [i_1] [i_2] = (~-1);
                            var_28 = (min(var_28, ((((arr_37 [i_12] [i_0] [i_2] [1] [i_0]) - ((var_7 ? (arr_28 [8] [8] [i_2] [i_2] [i_2] [i_0]) : (arr_0 [i_0] [i_0]))))))));
                        }
                        arr_43 [i_1] [i_1] [1] [i_10] = (((arr_38 [i_2] [i_1 - 1] [i_2] [i_1] [i_1 - 1]) | var_2));
                        arr_44 [i_1] [i_1] = ((548897267 || (arr_17 [i_10] [11] [i_10] [i_10 - 3] [i_2])));
                        arr_45 [i_1] [i_1] [i_1] = (arr_3 [i_1]);
                        var_29 = (arr_28 [i_0] [4] [i_1 + 1] [i_2] [i_2] [i_1]);
                    }

                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        var_30 *= (((-255 + 2147483647) >> (255 - 248)));

                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            var_31 = 2;
                            var_32 *= (arr_38 [i_0] [i_0] [i_14] [i_14] [i_14]);
                        }
                        arr_51 [i_1] [i_1 + 1] = (arr_47 [i_0] [i_1] [i_1 + 1] [i_2 - 2] [i_13] [i_1]);
                        arr_52 [i_1] [i_1] [i_2 - 1] [i_13] = (65280 > 10901881851349949448);
                        arr_53 [13] [i_1] = -4266278548069085663;
                    }
                    var_33 = ((26791 ^ 65535) ? ((~(arr_5 [i_0]))) : ((~(arr_13 [i_1] [i_2]))));
                }
            }
        }
    }
    var_34 = (max(var_14, ((((511 ? 253 : 32752)) - 23329))));
    #pragma endscop
}
