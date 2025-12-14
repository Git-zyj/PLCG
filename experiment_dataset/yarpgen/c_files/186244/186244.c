/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_10 -= var_8;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            var_11 = (max(var_11, -260437614));
                            var_12 += (((((arr_5 [i_0 - 1] [i_4]) || -21))));
                            arr_15 [i_0] [i_1] [i_2] [i_2] [10] |= var_2;
                        }
                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1 - 2] [i_2] [i_3] [i_3] [i_1 - 2] = -260437618;
                            var_13 -= (-127 - 1);
                        }
                        var_14 = ((+((((((arr_18 [i_0] [15] [14] [i_1] [2] [i_0] [i_0]) / var_6))) ? var_5 : (arr_14 [i_2] [i_1 - 1] [i_1] [i_1 - 2])))));
                        arr_20 [i_0] [21] [i_0] [21] [i_0] [21] = 127;
                    }
                    var_15 ^= (arr_3 [i_0 + 1]);
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_16 ^= (arr_10 [i_0 - 2] [i_1] [i_6] [i_0 - 2]);
                                var_17 ^= (-127 - 1);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
    {
        var_18 ^= ((!(((4294967295 ? (arr_17 [i_8] [i_8] [i_8] [i_8] [20]) : (((!(arr_17 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [6])))))))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    arr_35 [i_8] [i_9] [i_8] = 694767043;
                    var_19 = (min((arr_14 [i_8] [i_9 + 1] [i_8] [i_9 + 1]), var_2));
                    var_20 = ((((((((!(arr_2 [i_8] [i_9])))) <= (!var_7)))) % (((-127 - 1) % 22079))));
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 0;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 4; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 19;i_13 += 1)
            {
                {
                    var_21 = (max((arr_22 [i_12] [i_11 + 1] [i_12 + 1] [i_13 - 1]), var_7));
                    arr_44 [i_11] [i_12] [i_12] [i_11] = var_1;
                    var_22 += (((((var_9 ? 1 : var_0))) ? 1 : ((65535 ? (arr_21 [i_11] [i_11] [i_11] [5]) : (!262741101)))));

                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        arr_47 [i_14] [i_12 - 1] [i_14] [i_14] = ((var_3 & (arr_46 [i_11] [i_14] [i_14] [2])));
                        var_23 = ((((260437613 ? -3348 : var_6)) ^ (arr_43 [i_11] [i_11] [i_13] [i_14])));
                    }
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        var_24 = ((!(704408947864554546 < 18446744073709551615)));
                        var_25 += -1;
                        var_26 = var_4;
                        var_27 -= (min(((var_0 ? (~22079) : (((-1952371765900333378 + 9223372036854775807) >> (260437623 - 260437572))))), (arr_51 [i_11 + 1] [i_12 - 1] [i_13 - 2] [i_13])));
                    }
                    /* vectorizable */
                    for (int i_16 = 2; i_16 < 19;i_16 += 1)
                    {
                        var_28 = (max(var_28, var_9));
                        var_29 -= var_7;
                    }
                }
            }
        }

        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            var_30 = var_3;
            arr_57 [i_17] [i_11] [1] = (var_6 >= 260437613);
            var_31 = (max(var_31, var_6));
        }
    }
    for (int i_18 = 0; i_18 < 0;i_18 += 1) /* same iter space */
    {
        var_32 ^= var_8;
        var_33 = (max((arr_28 [i_18 + 1]), (arr_8 [i_18 + 1] [i_18 + 1] [i_18])));
        arr_60 [i_18] = 1;
        var_34 |= ((~(arr_13 [10] [i_18] [i_18 + 1] [10] [10])));
        var_35 = (max(var_35, (arr_22 [8] [i_18 + 1] [i_18 + 1] [i_18])));
    }
    var_36 = ((1952371765900333378 - (65535 >= -260437603)));
    #pragma endscop
}
