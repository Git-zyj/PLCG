/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((var_7 ? var_4 : ((-27772 ? 34366 : 50606))))), 1809226415));
    var_12 = -var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 = (arr_1 [i_2 - 1]);
                                arr_13 [i_2] [i_2] [i_2] [i_3] = (min(((-(arr_3 [i_2 - 1]))), (((arr_3 [i_2 - 1]) + (arr_3 [i_2 - 2])))));
                                var_14 = -24654;
                                var_15 = -79068269;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_16 = (~-101);

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_17 *= ((-(((167 - 149) / 1923820189))));
                            arr_19 [i_2] = 101;
                            var_18 = (max(167, (!var_9)));
                            arr_20 [i_0] [i_2] [i_2] [i_5] [i_6] = ((!(arr_17 [i_5] [i_2 - 3] [i_2 - 2] [i_2] [i_2 - 4])));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_19 = (min(var_19, (arr_2 [i_5] [i_0])));
                            arr_23 [i_2] [i_5] [i_7] [1] [i_2] = (arr_14 [i_5] [i_0]);
                            arr_24 [i_7] [i_2] [i_2] [i_2] [15] = (((var_2 && ((max(var_6, -30408))))));
                            var_20 = (max(1, ((!(-1923820162 & -22951)))));
                            var_21 &= ((6294 ? 61 : 1041805060));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_28 [i_2] [i_2] = 6294;
                            arr_29 [i_0] [i_0] [i_2] [i_8] [i_8] [i_2] = (((arr_10 [5] [i_2] [i_2] [i_2 - 4]) | 107));
                        }
                        for (int i_9 = 3; i_9 < 22;i_9 += 1)
                        {
                            arr_32 [i_0] [i_0] [i_2 - 1] |= (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_33 [i_2] [i_1] [i_5] [i_9] = ((((var_4 - var_3) ? (((7676896648492637422 ? (arr_15 [i_2] [i_1] [i_1]) : 241))) : 6532290684155023487)));
                        }
                        arr_34 [i_2] [i_1] [i_2 - 2] [i_0] = (min((((var_0 != var_5) ? var_5 : var_1)), 254));
                        arr_35 [i_0] [i_1] [i_1] [i_0] [i_0] [i_5] &= 1;
                        arr_36 [i_0] [i_0] [i_1] [i_2] [i_2] = var_9;
                    }
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        arr_39 [i_0] [i_2 - 2] [i_10 - 1] |= 1;
                        var_22 = (max(var_22, ((((((max((arr_1 [i_0]), (arr_1 [i_10 - 1]))))) > (arr_1 [i_0]))))));
                        var_23 = (max(var_23, (~2134239948)));
                    }
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        var_24 = (((((arr_3 [i_2 - 4]) ? (arr_3 [i_2 - 4]) : (arr_3 [i_2 - 3]))) / ((8028525203852419800 ? (((arr_38 [i_0] [i_1] [i_2] [10]) ? var_2 : (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (min(0, 763607293))))));

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_25 = -var_7;
                            arr_45 [8] [i_2] [i_2 - 4] [1] [i_12] = var_10;
                        }
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            var_26 = var_4;
                            var_27 *= (arr_25 [i_0] [20] [22] [i_11] [i_0]);
                            arr_48 [i_13] [i_2] [i_1] [i_2] [i_0] = ((-(((((max(var_7, 1979916232))) < (min(567453553048682496, 2604412252)))))));
                        }
                        /* vectorizable */
                        for (int i_14 = 1; i_14 < 23;i_14 += 1)
                        {
                            var_28 = (min(var_28, ((-(arr_8 [i_2 + 1] [i_2 - 2] [i_2 + 1])))));
                            arr_51 [i_14] [i_2] [i_2] [i_2] [i_0] = (arr_12 [i_0]);
                            var_29 = (min(var_29, -93));
                            var_30 = arr_40 [i_0] [i_1] [i_2 - 4] [i_2] [i_14] [i_11];
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 3; i_15 < 22;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 23;i_16 += 1)
                        {
                            {
                                arr_56 [i_2] [i_15] [i_2] [i_2] [18] [i_1] [i_2] = var_6;
                                arr_57 [i_2] [i_15] = (78596916 > 167);
                            }
                        }
                    }
                    var_31 = ((!((((arr_18 [i_0] [i_1] [i_1] [i_2] [i_2]) ? (var_1 ^ 0) : 2085298488)))));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        for (int i_18 = 2; i_18 < 23;i_18 += 1)
                        {
                            {
                                arr_65 [i_18 - 2] [i_1] [i_2 - 1] [i_2] [i_18 - 1] [1] [5] = (min((max((arr_25 [i_2] [i_2 - 3] [i_2 - 1] [1] [i_2]), ((-(arr_63 [i_2] [i_17] [i_2] [i_1] [i_2]))))), ((max(((-88 ? (arr_17 [i_0] [i_2] [i_2] [i_1] [i_0]) : var_8)), (arr_30 [15]))))));
                                var_32 = (min(var_32, -1350958882063982578));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
