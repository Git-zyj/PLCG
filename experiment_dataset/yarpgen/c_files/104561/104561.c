/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (min(((27318 >> (6833613084628883477 - 6833613084628883449))), -38224));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 |= ((562949953421311 ? 248 : 0));
                                var_17 = (min(var_17, (((-(~var_3))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_18 = 3682532188436740709;
                        var_19 = (arr_3 [i_0 - 1]);
                    }
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        var_20 = ((((((38217 | 7572412281145084300) / ((((10874331792564467305 >= (arr_5 [i_0] [7] [i_2] [i_0])))))))) || (((!var_11) < var_1))));
                        arr_20 [i_1] [i_1] [i_1] = (((((((var_6 ? (arr_19 [i_6 - 1] [i_2] [i_1] [0]) : var_11)) <= ((var_2 ? var_7 : var_11))))) << (((((arr_4 [i_2]) | (arr_13 [i_1] [i_1] [i_2] [2]))) - 1382689832))));
                    }
                    for (int i_7 = 3; i_7 < 11;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_27 [7] [i_1] [i_2] [i_7 - 3] = (((arr_16 [i_0] [i_0 + 2] [1] [i_7 - 2] [i_7 - 2] [i_1]) - (!var_3)));
                            arr_28 [i_2] [i_7] &= (((((arr_3 [i_0]) ? ((var_11 ? (arr_4 [i_0]) : var_9)) : ((min(var_8, -1034091454723629337))))) | ((max(((-(arr_16 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0]))), var_4)))));
                        }
                        var_21 += (arr_3 [i_0 - 1]);
                        var_22 = (max(var_22, (((var_2 ^ (44618 == -4634432959851950396))))));
                        arr_29 [i_0] [11] [i_1] [i_1] [i_7] = ((((((((var_2 >> (arr_18 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2])))) ? var_11 : ((var_1 ? var_1 : 11613130989080668144))))) ? (((~((241 ? var_8 : 60348))))) : (max((max(var_11, (arr_14 [i_0] [i_1] [i_2] [7] [7]))), (~var_1)))));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_23 = var_14;
                        var_24 |= ((((((arr_0 [i_9]) ? ((0 + (arr_2 [i_0 + 1] [0] [12]))) : (~63706)))) ? -var_6 : -var_9));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_25 = (((((var_11 ? 1 : 20913)) ? var_8 : var_10)));
                                arr_36 [i_1] [i_1] [i_1] = (((((arr_7 [i_0] [i_0 + 2] [i_10 - 1] [11]) ? var_10 : (arr_6 [i_10 - 1] [i_0 - 3] [i_10 - 1] [i_1]))) - var_11));
                                var_26 = (min(((min((var_5 & 1), ((max(27163, 27249)))))), ((~(var_11 % var_0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = ((((((((1 ? 6775792540292431141 : 53272))) ? (var_11 - var_12) : var_12))) ? (max(-60360, 2255060417)) : (min(30062, (~var_6)))));
    var_28 &= (~16383);
    var_29 = var_14;
    #pragma endscop
}
