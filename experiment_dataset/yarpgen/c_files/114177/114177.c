/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!-1946676850091194039) + var_9);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (min((arr_1 [i_0]), (((((-(arr_0 [i_0])))) ? ((2462711313 ? (arr_0 [i_0]) : 3524075986)) : (((((arr_1 [i_0]) || 1946676850091194038))))))));
        var_18 = (max(0, 507904));
        var_19 = (((((arr_0 [i_0]) & (min(1756375186, (arr_1 [i_0])))))) ? ((((66 ? var_15 : 8191)) << ((min(66, 1))))) : 1);
    }
    var_20 = (((((var_6 ? (min(var_14, var_12)) : var_0))) ? (max(10331016236991555675, var_2)) : ((var_13 ? (0 & 169) : ((-1235051540 ? var_11 : 65535))))));

    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_21 = ((!(var_8 == var_2)));

                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        arr_12 [i_1] [i_1] = 127;
                        arr_13 [i_1] [i_1] [i_3] [i_4 - 1] = (((((9223372036854775552 + (arr_11 [i_1] [i_2] [i_3] [i_2])))) ? (((arr_3 [23]) / (arr_10 [i_1] [4] [i_1] [i_1] [i_1]))) : var_12));
                    }
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        var_22 = ((-17293 != (~-7892933535176861359)));
                        var_23 = (max(var_23, (!var_10)));
                        arr_17 [i_1] [i_1] = (((~var_15) | -0));

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_21 [i_1] [i_2] [i_2] = 15;
                            var_24 = (var_5 * 18446744073709551615);
                            var_25 &= var_11;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_24 [i_1] [i_2] [i_2] [i_1] [i_3] [i_5] [i_7] = (arr_7 [i_5 - 1] [i_1] [i_1] [i_1]);
                            arr_25 [i_1] [i_2] [i_3] [8] [15] [14] = ((-19 ? (((!(arr_14 [10] [i_5 - 1] [i_3] [i_2] [i_1])))) : -var_7));
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_29 [i_1] = (arr_20 [i_1] [i_2] [i_3] [i_5] [i_8]);
                            var_26 = (56 ? 192 : 1);
                            var_27 = (((~var_3) ? (arr_4 [i_1 + 2]) : ((~(arr_5 [i_1 + 1] [i_1])))));
                            var_28 = (max(var_28, -255));
                        }
                    }
                    for (int i_9 = 1; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_2] [i_1] [i_2] = (arr_28 [i_1] [i_1] [i_1] [i_1]);

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_36 [i_1] [i_1] [i_9] [i_9] [i_1] = var_3;
                            var_29 -= ((~(arr_32 [i_1 + 1] [i_1] [i_1 - 1] [i_3])));
                            var_30 = (max(var_30, (arr_35 [i_9] [i_9] [i_9 - 1] [i_9 + 1] [i_9] [i_9 - 1] [i_9])));
                            var_31 &= (((arr_22 [i_1] [i_1] [i_2] [i_3] [i_3] [10]) ? (arr_6 [i_1]) : (arr_32 [i_1 + 2] [i_3] [i_9 + 1] [i_2])));
                        }
                        arr_37 [i_2] [i_9] [i_2] [i_1] = (~var_2);
                    }
                    for (int i_11 = 1; i_11 < 23;i_11 += 1) /* same iter space */
                    {

                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            var_32 = (max(var_32, (((!(~var_0))))));
                            var_33 += ((-((-(arr_9 [i_2] [i_3] [i_12])))));
                            var_34 -= var_10;
                            var_35 = (~116);
                        }
                        var_36 &= ((var_8 ? ((var_14 ? var_14 : var_11)) : ((((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]) % 251)))));
                        var_37 -= -56;
                    }
                    var_38 = (3 == 1);
                }
            }
        }
        arr_42 [6] &= ((-(arr_9 [i_1] [i_1 + 1] [10])));
        var_39 = (min(var_39, ((((arr_8 [10] [10]) ? (arr_4 [i_1 + 2]) : 1832255983)))));
        var_40 = (max(var_40, ((((arr_16 [i_1]) ? -9138386045954714836 : ((0 ? (arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]) : var_3)))))));
        var_41 = (((((var_12 - (arr_20 [i_1] [6] [i_1] [6] [i_1])))) ? (arr_40 [1] [1] [i_1 + 2] [16] [2] [1]) : (arr_41 [i_1])));
    }
    #pragma endscop
}
