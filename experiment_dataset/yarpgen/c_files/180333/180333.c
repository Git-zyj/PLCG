/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_14 = (((((var_0 * (arr_1 [i_0])))) ? (~-18446744073709551615) : (~255)));
        arr_3 [i_0] = (((arr_0 [i_0 - 1]) ? 0 : 8426724570881824500));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((~(~var_4)));
        arr_8 [5] = ((((((arr_5 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1])))) ? (((arr_1 [i_1]) >> (((~var_6) - 51)))) : ((~(arr_5 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_13 [8] = (min((min(((min(var_7, var_7))), (arr_0 [i_2]))), (0 == 17150099481643682322)));
        var_15 = ((-(((var_2 > (arr_12 [i_2]))))));
        arr_14 [i_2] = (((~var_12) ? ((((arr_0 [i_2]) == (arr_5 [i_2])))) : (((arr_1 [i_2]) >> (((arr_0 [i_2]) + 1993550120))))));
        arr_15 [i_2] = (arr_5 [i_2]);
    }

    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        var_16 *= 1;
        var_17 = (min(((-((min(var_2, var_6))))), (arr_1 [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {

                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        var_18 = var_2;
                        arr_26 [i_3 + 1] [i_3 + 2] = -973180044;
                        arr_27 [i_3] [i_6] [i_3] [4] = min(((min((((arr_1 [i_3]) < (arr_22 [i_3 - 2] [i_3 - 2]))), (-973180044 != 1)))), 973180043);
                        arr_28 [i_6 - 1] [2] [i_4] [i_3] = (arr_20 [i_4] [i_5] [i_4]);
                    }

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_32 [i_5] = (min((((!(var_1 != -20470)))), (107 - 124)));
                        arr_33 [i_3 + 1] [i_3 + 1] [i_4] [2] [i_5] [5] = ((~(((var_0 == (((arr_24 [i_3 + 1] [9] [i_3 + 1] [i_5] [i_3 + 1]) + (arr_30 [i_3]))))))));
                        arr_34 [i_3 - 2] [i_3 - 2] = ((0 < (((((((arr_0 [8]) || 251))) + (arr_18 [i_3 - 1]))))));
                    }

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_19 = (min((((arr_20 [i_3] [i_3 - 1] [i_3 + 2]) / (arr_20 [i_3] [i_3 - 2] [i_3 + 2]))), (((var_0 ? (arr_36 [i_3 - 1]) : (arr_36 [i_3 + 1]))))));
                        var_20 = ((min((arr_35 [1] [i_3 - 2] [i_3 - 2]), (arr_36 [i_3 + 2]))));
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        arr_40 [i_3 - 2] [i_4] [i_5] [i_9] = (~(((arr_0 [i_9]) ? ((var_8 ? (arr_39 [i_3] [i_3 + 2] [i_4] [2] [9] [i_9]) : var_5)) : ((((arr_38 [i_3 + 2]) & (arr_1 [i_5])))))));
                        var_21 = (arr_19 [i_5] [i_5]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
