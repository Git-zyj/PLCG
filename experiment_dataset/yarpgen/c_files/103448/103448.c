/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (min(4294967295, -712487658))));
    var_12 = (max(var_12, ((((1125522325 ? 2072269179 : 0))))));
    var_13 = (!var_9);
    var_14 = (var_6 * 3169444971);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((max((arr_3 [i_0]), (~1466484109))))));

                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        var_16 = (((((-349830408 ? 2469450086 : 2827528841)))) ? (arr_5 [i_1] [i_1 - 2] [i_1 + 2]) : ((var_1 | (arr_7 [i_1 + 2] [i_2 - 3] [i_1]))));
                        var_17 -= var_4;

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            var_18 += ((max(var_4, 65535)));
                            var_19 = 3169444964;
                            var_20 -= 15;
                            var_21 = (max(var_21, (((max((arr_6 [i_1 + 2] [i_3 + 1] [i_4 - 1]), (arr_6 [i_0 - 1] [i_1 + 3] [9])))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            var_22 = (min(var_22, (((~1125522325) ? ((-(arr_3 [i_0]))) : (~-1783727709)))));
                            var_23 *= (var_10 ? (arr_0 [i_1 - 2]) : var_3);
                            var_24 = (((1659133912 ? -712487641 : 1790701611)) * (arr_11 [i_1 + 3] [i_2 - 2] [i_2]));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_25 = var_9;
                            var_26 -= ((var_0 ? (2528007111 || 4294967286) : var_6));
                            var_27 = (((((-1 ? var_1 : var_1))) ? ((3964451700 ? 3169444971 : var_10)) : ((((((arr_6 [i_1 + 1] [8] [i_1 + 1]) + 2147483647)) << (((var_2 + 1098225483) - 18)))))));
                            var_28 = (((arr_5 [i_1] [i_1 + 1] [i_1]) != var_1));
                        }
                        var_29 = -var_6;
                        var_30 = max(var_2, ((((!(arr_11 [i_3] [i_2] [i_0]))) ? (((arr_0 [i_2]) ? var_2 : 607189273)) : (arr_12 [i_1] [i_0 + 1] [7] [5] [i_0] [9] [i_1]))));
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_31 = (((min(975154755, (arr_10 [i_7] [i_1] [i_2 - 2] [11] [i_1] [i_0]))) + ((((-715746928 < (arr_4 [i_0] [11])))))));
                        var_32 = ((((3867304324 ? (min(3169444971, 3169444971)) : 1125522326)) > (((arr_1 [i_0 + 2]) ? (max((arr_2 [6]), (arr_16 [i_1] [i_1] [i_1]))) : (arr_3 [5])))));
                    }
                    for (int i_8 = 4; i_8 < 11;i_8 += 1)
                    {
                        var_33 = (min(((((((var_4 ? (arr_8 [9] [i_1 + 2] [9] [4]) : -672581089))) || (~5)))), (((var_6 * var_7) ? var_0 : var_1))));
                        var_34 += 1281882624;
                    }
                }
            }
        }
    }
    #pragma endscop
}
