/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, 91));
    var_19 = ((((((3651712384277765095 << (1142654966216454463 - 1142654966216454424)))) ? (((var_8 ? 10841 : 252))) : ((var_2 ? var_1 : var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_1] = var_0;
                var_20 = ((((min((arr_5 [i_0] [i_1 - 1] [i_1]), (arr_2 [i_0])))) >= ((var_14 ? (arr_2 [i_0]) : (arr_5 [i_0] [i_1 - 1] [i_1 - 1])))));
                var_21 = (((((((arr_4 [i_0] [i_1]) ? (arr_5 [i_0] [i_1] [i_1]) : var_6)) != (max((arr_6 [i_1] [i_1] [i_1 + 1]), -7873677385654444917)))) ? (((arr_5 [i_0] [i_1 - 3] [i_1]) << (var_11 - 2739440363066206249))) : ((~((~(-127 - 1)))))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_22 = ((~(((arr_4 [i_1] [i_1]) ? (~var_7) : var_4))));
                    var_23 = (((-58 ^ 4208106788540951272) ? 0 : (arr_0 [i_1 - 1] [i_1 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_17 [i_1] [i_4] = ((((var_11 / (arr_14 [i_0] [i_1 + 1] [i_1] [i_4 + 2] [i_0] [i_2] [i_1 - 3])))) ? (min(var_3, 0)) : (!var_12));
                                var_24 = ((~(((0 ? 907123022139259181 : 252)))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_25 &= ((~((((max(var_13, (arr_3 [i_1])))) << ((((var_5 ^ (arr_4 [2] [2]))) - 3325846319228542430))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_26 = (max((((arr_20 [i_1 - 3] [i_1 - 3] [i_6] [6]) ? (arr_4 [i_1 - 1] [i_1]) : (arr_20 [i_1] [i_1 + 1] [i_1 + 1] [i_7]))), 154));
                                var_27 = ((((max((arr_22 [i_1] [i_6] [i_1] [i_1]), (arr_22 [i_1] [i_1] [i_5] [i_6])))) ? ((101 ? (((arr_15 [i_0] [2] [i_1] [i_1] [i_7]) ? (arr_9 [i_0] [i_0] [2]) : 22)) : 907123022139259181)) : (((var_15 ? (arr_3 [i_1 - 2]) : (arr_24 [i_1] [i_7] [i_1] [i_1] [i_1 - 2] [i_1]))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_28 = (~62015);
                    var_29 -= (((((var_16 << (((arr_15 [i_8] [i_8] [i_8] [i_0] [i_0]) - 2249244130932198542))))) ? ((var_0 ? var_13 : (arr_6 [i_8] [i_1] [i_1 - 2]))) : -11));

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_30 = (-var_2 & var_13);
                        arr_32 [i_1] = ((112 < (arr_23 [i_0] [i_1] [i_8])));
                        arr_33 [i_9] [i_8] [i_1] [i_1] [i_8] [i_0] &= 907123022139259181;
                        arr_34 [i_0] [9] [i_1] [i_9] = (((arr_4 [i_0] [i_1]) ? (arr_12 [i_0] [i_1 + 1] [2] [7] [0]) : ((((arr_2 [i_1]) >= -7295214305647226405)))));
                    }
                }
                for (int i_10 = 4; i_10 < 12;i_10 += 1)
                {
                    var_31 = ((min(132, (50 / var_5))));
                    var_32 = (min(var_32, 10841));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_33 = (min(var_33, 78));
                                var_34 = ((var_15 ? (arr_10 [i_0] [i_0] [i_10 - 4] [i_11]) : ((var_5 / (arr_10 [i_0] [i_10] [i_11] [i_12 + 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
