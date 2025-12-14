/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_12;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_1 + 2] = (arr_6 [i_0] [i_1 - 1] [i_2]);
                    var_17 *= ((28273 ? 18446744073709551615 : (arr_6 [1] [i_0 + 2] [i_1 + 2])));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_1 - 1] [i_1] [i_3] = -18446744073709551615;
                    var_18 = (~1);
                    var_19 = (i_0 % 2 == 0) ? (((arr_6 [i_0] [i_0 + 2] [i_1 + 1]) ? (((var_10 * 0) << (((((arr_9 [16] [i_3] [13]) ? (arr_7 [i_0]) : 47)) + 116)))) : (min(((~(arr_5 [i_1 - 1]))), (-47 | var_1))))) : (((arr_6 [i_0] [i_0 + 2] [i_1 + 1]) ? (((var_10 * 0) << (((((((arr_9 [16] [i_3] [13]) ? (arr_7 [i_0]) : 47)) + 116)) - 193)))) : (min(((~(arr_5 [i_1 - 1]))), (-47 | var_1)))));
                }
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    arr_16 [i_0 - 3] [i_0] = ((-(((0 / -35) ? -1088492534 : (arr_11 [9] [i_0 - 2] [i_4])))));
                    var_20 = ((14358305978863728979 ? 98 : (min(var_13, 18446744073709551615))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_21 *= var_2;
                                var_22 = ((var_3 != (arr_6 [i_0] [i_1] [i_0])));
                                var_23 += (max(3, var_0));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_24 -= 64;
                                arr_29 [i_0 - 2] [i_0] = (((arr_25 [i_0 + 1] [i_4 - 2] [i_4]) ? var_13 : 18446744073709551615));
                                var_25 -= ((-18446744073709551615 ? ((((min(63050394783186944, (-2147483647 - 1)))) ? var_6 : (~var_7))) : -35));
                                var_26 = (min(35, (arr_13 [i_4 - 2] [i_4] [1])));
                            }
                        }
                    }
                    var_27 = 81;
                }
                var_28 = (max(var_28, (min(var_6, 105))));
                arr_30 [i_0] [i_1 - 1] = max(var_2, 1443561618);
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_39 [i_9] [i_1 + 1] [i_1] [0] [i_0] [i_1] [i_1] = 81;
                                arr_40 [i_0] [i_9] [i_1] [i_0] = ((-75 ? (min(18446744073709551606, (((64 ? (arr_31 [i_1] [i_0] [i_1]) : 8666372879239951179))))) : (~-82)));
                                var_29 = (max((arr_34 [i_11 + 3] [i_1 + 1]), (((arr_7 [i_0]) ? (arr_7 [i_0]) : 5256806364934150202))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = ((((min((min(var_14, var_8)), 1073741568))) ? var_7 : ((18446744073709551615 ? var_9 : 2851405672))));
    var_31 = 13189937708775401435;
    #pragma endscop
}
