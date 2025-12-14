/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1 - 1] [i_1] = max((max((arr_5 [i_1] [i_2 + 2] [i_2 + 2] [i_1]), (arr_8 [i_2 - 1] [i_1 - 1] [i_0 - 1] [19]))), (((255 > ((max(var_9, (arr_8 [i_0 - 1] [i_1] [0] [i_2]))))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_16 += ((-(((max(var_0, var_9))))));
                        arr_14 [i_2] [i_2] [i_1] [15] = ((~(max(((~(arr_4 [i_2]))), ((var_7 ? (arr_0 [i_1]) : 0))))));
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] = ((((min((arr_1 [i_0 + 2]), (var_11 / var_14)))) ? (((((((!(arr_3 [i_1] [16]))))) < (((arr_6 [14] [i_3]) ? var_11 : var_13))))) : ((-((max((arr_13 [i_1]), var_12)))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_17 = (((~var_7) != (((!(arr_12 [i_2 + 1] [i_1] [i_1] [i_1 - 1]))))));
                        var_18 = (max(var_18, 255));

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            var_19 = (max(var_19, ((((arr_2 [i_0 + 2] [i_1 - 1]) << (var_10 - 58))))));
                            arr_20 [i_1] [i_4] [i_2] [i_0] [i_1] = ((-(arr_5 [i_0] [i_1 - 1] [i_1] [i_1])));
                            arr_21 [i_5] [i_1] [i_2 + 1] [i_1] [i_0 + 1] = ((((arr_13 [i_1]) < (arr_13 [i_1]))));
                        }
                        var_20 += (((((arr_10 [i_0] [i_1 - 1] [14] [1]) ? ((max(var_13, (arr_13 [1])))) : ((min(var_10, 0))))) ^ (((~(arr_18 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [18]))))));
                        arr_22 [7] [i_1] [i_1] [3] = (min((((~(1 | 127)))), (min(((max(var_15, var_6))), (max(var_14, var_12))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_21 += (arr_0 [i_0]);
                                arr_28 [i_7] [i_1] [i_0 + 1] [i_1] [i_1] [i_0 + 1] = (~var_6);
                                arr_29 [i_0] [i_2 - 1] [i_1] [i_7] = var_6;
                                arr_30 [i_1] = (var_2 && (((((max(var_7, var_15))) ? (((min(255, 0)))) : var_4))));
                                var_22 += ((-((+(min((arr_12 [i_7] [i_7] [16] [i_7]), (arr_1 [i_6])))))));
                            }
                        }
                    }

                    for (int i_8 = 3; i_8 < 17;i_8 += 1)
                    {
                        var_23 -= (((((arr_4 [i_0]) << 0)) - (arr_27 [16] [i_8] [i_2] [i_1 - 1] [16])));
                        var_24 = (min(var_24, ((((((min(1, 255))) == (((arr_1 [i_1]) ? (arr_16 [i_0] [i_1 - 1] [i_2 + 1] [i_8]) : (arr_3 [2] [2])))))))));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_37 [i_1] [i_9] [i_2 + 2] [i_1] = (max((((arr_34 [i_2 + 3] [i_2] [i_2 - 1] [i_1]) ^ (((arr_7 [i_0] [i_0 + 2] [i_0 + 2] [11]) ^ (arr_23 [i_1] [i_2] [i_1] [i_1]))))), ((min((arr_11 [i_1]), (min((arr_27 [i_1] [i_2 + 2] [i_2] [i_2] [i_2]), -88)))))));
                        arr_38 [i_1] [i_1] [i_9] = (arr_23 [i_1] [i_1] [i_9] [i_9]);
                        var_25 = ((((((((~(arr_0 [i_9])))) ? (16155 * var_4) : (((((arr_12 [i_0] [i_1] [i_1] [i_2]) <= (arr_4 [i_1])))))))) ? ((~(max((arr_26 [i_9] [i_9] [i_1] [i_1] [i_1] [i_0]), 11796350812078774018)))) : (-var_3 >= 0)));
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_26 *= 4294967295;
                        arr_41 [i_2 - 1] [i_1] = (max((arr_7 [i_0] [0] [i_2] [i_10]), (((((min(0, var_2))) > (~var_6))))));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_45 [i_11] [i_11] [i_1] [i_11] = max(((-2177583556 * (((-(arr_34 [0] [i_1] [i_2] [i_1])))))), (((!(((arr_11 [i_1]) < (arr_39 [i_0] [8] [8] [i_0] [i_2 + 1] [i_11])))))));
                        arr_46 [i_1] [i_1 - 1] [i_2] [i_11] = (arr_23 [i_1] [i_1] [i_1] [i_1]);
                    }
                    arr_47 [i_1] [i_1] = (!(((min((arr_35 [i_0 - 1] [i_0 - 1] [1] [i_2]), var_10)) <= var_0)));
                }
            }
        }
    }
    var_27 -= (var_1 < var_6);
    var_28 = var_15;
    var_29 = (min(var_29, -88));
    #pragma endscop
}
