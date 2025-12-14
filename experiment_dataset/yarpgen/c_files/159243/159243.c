/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = (arr_6 [i_0 + 2] [i_1 - 1] [i_0] [i_1 + 1]);
                    var_11 = (((arr_0 [i_0 - 4] [i_0 - 3]) ? (arr_7 [i_0 - 4] [i_0] [i_1 - 1]) : 576460752303423488));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [2] [i_1] [i_0] [i_3] [13] = (((arr_0 [i_0 - 4] [i_1 + 2]) ? (arr_0 [i_0 - 4] [i_2]) : (arr_0 [i_0 - 4] [7])));
                                arr_13 [i_0] [0] [i_0] [i_4] [i_3 - 4] [i_3] = (((arr_1 [i_0]) < (arr_1 [i_0])));
                                var_12 = ((21 ? (!var_8) : ((-9223372036854775800 ? (arr_2 [6] [i_3] [i_4]) : var_7))));
                            }
                        }
                    }
                }
            }
        }
        arr_14 [i_0] = ((-1278532022 ? (((!(arr_1 [i_0])))) : 1278532021));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_13 = (max(var_13, ((((((arr_8 [i_5] [i_5] [i_5] [i_5]) - var_5)) << ((((-(arr_11 [2] [1] [i_5] [1] [i_5]))) - 13306564907526204856)))))));
        arr_17 [i_5] [i_5] = var_1;
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        arr_22 [i_6] = 5;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        arr_33 [i_6] [i_6] = var_2;
                        arr_34 [i_6] [i_7] [i_6] [7] [1] [i_8] = ((-((max((var_8 > 70368207306752), (arr_20 [i_6] [i_6]))))));
                        var_14 = -6591502051672178949;
                        arr_35 [i_6] [i_7] [i_8] [i_6] [i_9] = (arr_26 [i_6] [i_7] [i_7]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            var_15 = ((var_1 - ((var_0 ? var_2 : (arr_37 [i_10])))));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        {
                            var_16 = (arr_41 [i_10] [i_10] [i_10] [i_10]);
                            arr_48 [i_10] [1] [16] [10] = (((arr_39 [i_10] [i_10]) & (arr_38 [i_11] [i_10])));
                            arr_49 [i_10] [i_11] [3] = (((arr_40 [i_10] [i_11]) >= (((arr_38 [i_12] [i_10]) ? 16 : var_3))));
                            var_17 = (max(var_17, (((arr_46 [6] [i_11] [i_11] [14] [i_12] [i_13] [i_11]) | (((var_0 ? (arr_41 [14] [3] [1] [11]) : 127)))))));
                        }
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            var_18 = (max(var_18, (((((var_5 ? var_7 : -22295))) ? var_8 : ((((arr_36 [4]) + var_5)))))));
            arr_52 [i_10] [i_15] = ((-1115476513 ? var_8 : (((0 ? var_4 : (arr_37 [i_10]))))));
        }
        var_19 = ((((64146 ? var_2 : var_8))) ? (!6591502051672178949) : (arr_47 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]));
        var_20 = (max(var_20, ((((~(arr_39 [14] [i_10]))) != (var_6 * var_6)))));
    }
    var_21 = var_0;
    #pragma endscop
}
