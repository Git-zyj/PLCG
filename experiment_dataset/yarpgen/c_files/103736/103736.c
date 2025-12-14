/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 = (min(var_19, ((((((((-10791 ? var_13 : var_9))) ? (max(var_9, var_8)) : var_7)) & (3769 | var_13))))));
    var_20 = (!9335145805747899097);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = ((~((max((arr_4 [i_1] [5]), (arr_4 [4] [i_1]))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] = 1;
                        arr_10 [i_2] [i_2] [i_1] [i_0] &= ((~(arr_4 [i_1] [i_0])));
                        var_22 = (max(var_22, ((((((var_17 ? 1 : var_13))) ? -2077206559 : -1)))));
                    }
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_1] = ((!(arr_8 [i_4] [i_4 + 2] [i_4] [i_4])));
                        var_23 += (arr_0 [i_2]);
                        arr_14 [i_1] = ((((((!(arr_0 [i_0]))))) > (arr_6 [i_4 - 2] [i_4 - 2] [i_4] [i_4])));
                        arr_15 [i_1] [i_1] = (~1);
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_24 &= -34359738336;
                        var_25 = (arr_11 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_26 += (((arr_11 [i_0] [i_6] [i_2] [i_6]) | (arr_0 [i_2])));
                        var_27 *= (((arr_1 [i_6]) + 18446744073709551615));
                        var_28 ^= ((-((var_12 ? 268435328 : 847927430))));
                    }
                    arr_20 [i_0] [i_0] = 9957044389092752899;
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                {
                    var_29 += (arr_8 [i_0] [i_0] [i_0] [i_0]);
                    var_30 |= (max(((+((max((arr_8 [i_0] [i_1] [i_7] [i_7]), (arr_18 [i_0] [i_1] [i_7] [i_1])))))), (arr_12 [i_0] [i_1] [i_7])));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_31 = -15997257718879824667;
                        var_32 = 5775538218831864518;
                        arr_27 [i_7] &= ((((arr_26 [3] [i_1] [1] [i_1] [i_1]) ? (arr_18 [i_1] [i_7] [i_1] [i_1]) : (arr_0 [i_7]))));
                        arr_28 [i_0] [i_1] [i_7] [i_7] [i_7] = 0;
                        var_33 = (!-127);
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_0] [i_1] [i_1] [1] |= ((((((max(9111598267961652518, (arr_2 [i_7])))) ? (var_6 <= 4398117204215673590) : (max(1, 1292793191)))) >= (((max(var_9, var_17))))));
                        arr_32 [i_1] [i_1] [i_7] [i_9] &= -17327;
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                    {
                        var_34 = (1 ? ((((arr_11 [i_10] [i_1] [i_1] [i_0]) <= 7373051180713184409))) : (((28672 >= (arr_11 [i_0] [i_1] [i_7] [i_10])))));
                        var_35 += ((+(((~-14352) ? ((max(var_5, (arr_17 [2] [4])))) : (!145436092)))));
                        arr_35 [i_1] [i_10] [i_10] = ((((-2147483647 - 1) / 1)) / (((arr_0 [i_0]) / (arr_33 [i_7] [i_1]))));
                    }
                }
                arr_36 [i_0] [i_0] = max((arr_23 [i_1] [i_1] [i_0] [i_0]), (arr_22 [i_0] [i_0] [i_0]));
            }
        }
    }
    var_36 *= ((~(((!9957044389092752899) - ((max(-1, 227)))))));
    #pragma endscop
}
