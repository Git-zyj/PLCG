/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_15 &= ((max(var_7, var_7)));
        var_16 |= arr_1 [6];
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((((arr_4 [i_0 - 1]) + (arr_2 [i_0] [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (arr_8 [8] [i_4])));
                                arr_12 [i_1] [i_1 - 2] [i_0] [i_2] [i_4 - 1] = (max((min((arr_5 [i_0] [i_0]), (arr_7 [i_4] [i_0] [i_0] [i_0]))), (arr_9 [i_0])));
                                var_19 = (max(var_19, (arr_4 [i_2 - 1])));
                                var_20 = ((((((-1696 ? (arr_5 [i_0 - 1] [i_0]) : 118)))) ? 135 : (((!((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_5 [i_0] [i_0])))))))));
                            }
                        }
                    }
                    var_21 = var_14;
                }
            }
        }
        var_22 -= ((((((((var_10 ? (arr_11 [i_0 + 1] [i_0] [12] [12] [i_0] [i_0]) : var_6))) ? (arr_6 [i_0 - 1] [i_0 + 1] [i_0] [i_0]) : (((!(arr_8 [i_0] [i_0]))))))) ? ((((arr_4 [i_0 + 1]) ? var_2 : (arr_9 [8])))) : (min((arr_7 [i_0] [2] [6] [i_0]), (arr_4 [i_0])))));
    }
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        var_23 = (arr_15 [i_5 + 1]);
        arr_16 [i_5] [i_5] = (max((((((var_5 | (arr_14 [i_5])))) ? (~-5350208032437284029) : ((var_3 ? -4185296455753182561 : (arr_13 [i_5]))))), (((!(((var_9 ? (arr_15 [12]) : 2470041248))))))));

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_19 [i_5] = (var_5 && 65024);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    {
                        arr_24 [i_6] [i_5] [i_6] = -113;
                        arr_25 [i_5] [i_6] [i_7] [i_8] = ((((var_7 || (((135 ? 1095216660480 : 3509187964))))) || (((arr_17 [i_6] [10] [10]) && var_13))));
                    }
                }
            }
        }
        var_24 = (min(var_24, (((!((((max((arr_22 [i_5 + 1] [i_5] [i_5] [i_5]), (arr_13 [i_5 + 1]))) & var_6))))))));
        arr_26 [i_5] [i_5] = ((((arr_23 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) * var_8)));
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        var_25 -= ((!((max((arr_23 [i_9] [i_9] [i_9] [2] [i_9] [i_9]), (arr_18 [i_9] [i_9] [10]))))));
        arr_29 [i_9] &= ((((((!((max((arr_15 [i_9]), var_10))))))) != (arr_20 [15] [i_9] [i_9])));
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 13;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        {
                            arr_38 [i_10] [i_12] [i_12] = (arr_15 [i_13 - 1]);
                            var_26 += ((((max(124, var_10))) ? ((((arr_36 [i_10] [4]) < (arr_23 [i_13] [i_12] [i_11] [i_10] [i_10] [i_10])))) : (arr_32 [i_11])));
                            arr_39 [i_13] [12] [i_12 - 1] [i_13] [i_11] [i_10] &= ((18446744073709551609 ? (((((min((arr_15 [i_11]), var_14))) ? (((arr_22 [i_13 - 1] [i_10] [10] [i_10]) + var_9)) : var_8))) : ((~((4201144297749116120 ? (arr_14 [0]) : var_2))))));
                            arr_40 [i_12] [i_10] [i_12] [i_11] [i_10] [i_10] = var_13;
                        }
                    }
                }
                var_27 = (max(var_27, (((((~(~var_7)))) | (max((arr_22 [i_11 - 1] [i_11] [i_10] [i_10]), ((((((arr_34 [i_11 - 2] [i_11 - 3] [i_10] [i_10]) + 2147483647)) >> (((arr_35 [4] [i_11] [i_11]) - 1203578625438220722)))))))))));
            }
        }
    }
    #pragma endscop
}
