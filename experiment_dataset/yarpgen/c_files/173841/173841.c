/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((((((arr_3 [i_0] [i_1 + 1] [i_0 + 1]) ? (arr_2 [i_0 + 1]) : (arr_3 [i_0 + 2] [i_1 + 1] [i_0 + 1])))) ? (min(var_13, (arr_2 [i_0 - 1]))) : (((((arr_0 [2]) > (arr_3 [i_0] [i_1 + 1] [i_0 + 1]))))))))));

                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = (max(((-(((arr_11 [i_4 - 4] [i_4 - 4]) ? (arr_3 [i_4] [i_3] [2]) : var_13)))), ((min(1522112339240222483, 1)))));
                                var_19 = ((var_3 > (((((var_9 ? (arr_10 [i_0] [i_1] [i_0] [i_3] [i_4]) : 1))) ? (var_1 > var_9) : var_4))));
                            }
                        }
                    }
                    var_20 = min(((((var_10 ? (arr_0 [i_0]) : (arr_5 [i_2] [i_0] [14] [i_0]))) * (arr_1 [i_1] [i_1 - 1]))), ((max((arr_5 [i_1] [2] [i_1 - 1] [i_2 - 1]), (arr_5 [i_0 + 2] [i_1 - 1] [i_2 + 3] [i_2 - 2])))));
                    arr_12 [i_0 + 2] [i_0] [i_0] [i_2 + 1] = (max((min(((var_13 ? 0 : (arr_10 [i_0] [i_1 - 1] [i_0] [i_2 + 2] [i_2]))), (arr_3 [i_0 - 1] [i_1 + 1] [i_2 + 4]))), (((1042737606 != (min(0, var_16)))))));
                    var_21 |= ((var_2 << ((((arr_1 [i_1 - 1] [i_0 + 2]) >= (arr_0 [i_2]))))));
                }
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        var_22 = ((!(((arr_15 [i_0] [i_1] [i_6 - 1]) >= 1))));
                        var_23 = (arr_8 [i_6] [i_5] [i_1 + 1] [i_0] [1]);
                        var_24 = ((-((var_7 ? (arr_3 [9] [i_5 + 3] [i_6 + 2]) : var_8))));
                        arr_18 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1] = var_0;
                        var_25 += (((((arr_8 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [9]) ? (arr_6 [1] [i_1 + 1] [i_1 + 1] [8]) : 10))) ? (arr_11 [i_0] [i_1 + 1]) : (arr_2 [i_0 - 1]));
                    }

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_26 = var_3;
                        var_27 *= 24531;
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_24 [10] [i_0] [10] = ((~(0 != 1)));
                        arr_25 [i_0 + 3] [i_1] [i_0] [i_5] [i_8] = ((((((arr_16 [i_0 + 1] [i_5 + 1] [i_5 + 1]) ? -24556 : (arr_3 [5] [i_1 - 1] [i_1 - 1])))) ? ((max(((-(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))), ((1 ? var_5 : (arr_19 [1])))))) : ((((((arr_17 [i_0 + 3] [i_8] [i_5] [i_8] [i_8]) ? 24547 : 1))) ? ((2915101636676789851 ? (arr_11 [i_0] [1]) : (arr_11 [i_1 + 1] [11]))) : (((var_8 ? (arr_2 [i_0]) : 83)))))));
                    }
                }
                var_28 = max((arr_11 [i_0 + 2] [i_1 + 1]), ((var_2 ? (arr_11 [i_0 + 3] [i_1 + 1]) : (arr_9 [i_0 - 1] [i_1 - 1] [i_1 - 1]))));
                arr_26 [i_0] [i_0] = (arr_9 [i_0] [i_1 + 1] [i_1 - 1]);
            }
        }
    }
    var_29 -= ((var_1 ? ((((var_7 & 2047) ? ((var_4 ? var_15 : var_15)) : var_9))) : ((((min(50334, var_10))) ? (~243) : (max(17, var_6))))));
    var_30 = ((((!(((var_8 ? var_5 : var_15))))) ? (((((((var_10 ? 9166836429640113830 : var_11))) && (!32505856))))) : var_2));
    #pragma endscop
}
