/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] = var_5;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_19 = (-29 % 37104);
                        var_20 ^= ((((((28409 ? (-32767 - 1) : var_11)) != (max(13816, 1263708125))))) == (((!(-1166 < var_12)))));
                        var_21 = (max(var_21, ((((arr_7 [i_1 - 1] [2] [2] [i_0 + 1]) == (225 / 32761))))));
                        var_22 *= (arr_10 [i_0] [i_1] [i_2] [12]);
                        var_23 ^= (((((6166413484181521278 - (arr_0 [10])))) ? (arr_11 [0] [i_3]) : var_8));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_24 = (((arr_3 [i_0]) ? ((~(arr_10 [i_0] [i_1 - 2] [i_0 + 1] [i_0]))) : ((var_5 ? (arr_5 [i_0 + 1] [i_0 - 1]) : (arr_5 [i_0] [i_0 - 1])))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = (min(var_3, (((var_4 ? -252 : 1)))));
                        var_25 += (var_16 <= 8217787692937459224);
                        var_26 = 160;
                    }
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_27 ^= (((arr_12 [i_0 + 1] [i_0 + 1] [8] [i_5 + 1] [i_5]) ? (arr_10 [i_0 + 1] [i_0 - 1] [i_1 + 1] [4]) : (arr_11 [0] [0])));
                        var_28 *= (max(-30, (arr_6 [i_2] [i_2])));
                        arr_18 [i_0] = (min((arr_11 [i_0] [i_1 + 1]), (((!(arr_11 [i_0] [i_1 - 3]))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        var_29 = ((1 ? 0 : 202));
                        var_30 = ((((1 ? 252379829195265936 : (arr_6 [i_1] [i_1]))) <= ((((!(arr_0 [i_0])))))));
                    }

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_31 -= (min(var_11, ((17353955644782334312 ? 57982 : var_0))));
                        var_32 = (arr_4 [i_1 - 3] [i_0 - 1] [i_0]);
                        var_33 = (max((((!469762048) ? (arr_9 [i_7] [i_2] [i_0 + 1]) : 0)), (((1 < (arr_2 [i_0]))))));
                        arr_25 [i_0 - 1] [i_1 - 1] [i_0] [i_7] = (max((arr_7 [i_0] [i_1 - 1] [i_0] [i_7]), (!58214)));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_34 = (!-32761);
                                arr_30 [i_0 - 1] [3] [i_0] [i_0] [i_9 - 2] = ((~(arr_17 [i_0] [i_0] [i_0] [i_8] [i_9])));
                                var_35 = var_13;
                            }
                        }
                    }
                    arr_31 [i_0] = arr_20 [1] [i_0] [i_0] [i_0] [i_0];
                }
            }
        }
    }
    var_36 = (max(var_36, var_8));
    #pragma endscop
}
