/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = ((((arr_0 [i_0 - 1]) ? 18446744073709551615 : ((min(var_4, var_7))))));
                arr_6 [i_0] [i_0] [i_0] = var_7;
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_9 [i_2] = 18446744073709551597;
        arr_10 [i_2] [13] = (min(var_6, (((-(((var_0 || (arr_7 [i_2] [i_2])))))))));
        var_11 = (max(var_11, (((((((13970 ? var_8 : (arr_7 [i_2] [i_2]))))) ? -1 : ((((arr_7 [17] [i_2]) + (!-13990)))))))));

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_12 = ((var_9 ? (((+((var_4 ? (arr_13 [i_4] [i_5] [i_6 + 1]) : 60))))) : (arr_15 [i_6 + 1] [i_6 - 2])));
                            arr_22 [i_6 + 2] [i_4] [i_4] [8] = ((-(arr_19 [i_6 - 1] [i_5] [i_6 + 2] [i_5] [i_5])));
                            arr_23 [i_6] [i_4] [i_2] = (min((((arr_21 [i_5] [i_2] [i_3] [i_2]) ? (arr_16 [i_4]) : 18446744073709551602)), (min((arr_14 [i_4]), (arr_16 [i_4])))));
                            var_13 = (max(var_13, (arr_19 [i_2] [i_3] [i_4] [i_5] [i_6])));
                        }
                    }
                }
            }
            arr_24 [i_2] [i_3] [i_3] = 12;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_14 = ((-(max(170428123, (arr_13 [i_7 + 1] [i_7 + 1] [i_7 + 1])))));
                        var_15 = ((13970 << (18446744073709551615 - 18446744073709551592)));
                        var_16 += (!192);
                        arr_30 [i_2] [i_3] [i_2] = 1920;
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_17 = (arr_27 [11] [i_9]);
            arr_35 [13] [i_9] = -1052528869;
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 12;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            {
                                arr_48 [i_10] [i_13] [i_10] [i_10] [i_10] [i_10] [12] = ((-60 ? 194 : 372383169779149157));
                                var_18 ^= (min(63, -89));
                                arr_49 [i_10] [1] [0] [i_11 - 3] [i_10] [i_10] = (((((((max((arr_37 [i_10]), (arr_17 [i_10] [15] [15])))) ? var_9 : var_4))) ? ((505 ? ((-1880145548 ? var_3 : 1880145547)) : (arr_39 [i_10]))) : (((var_1 ? var_7 : -1966830688)))));
                            }
                        }
                    }
                    var_19 += 85;
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 12;i_16 += 1)
                        {
                            {
                                var_20 &= ((((((-89 - (arr_39 [10]))))) ? ((((((max(0, var_9))) && 1)))) : ((4080985463 ? (arr_7 [i_12 - 1] [i_16 - 1]) : (arr_0 [i_12 - 1])))));
                                arr_57 [i_10] [i_10] [i_10] [i_16] = ((+(((arr_52 [i_11] [i_11 + 1] [i_11] [i_12 - 1] [i_11]) ? 363166730 : (arr_52 [i_10] [3] [3] [i_12 + 1] [3])))));
                            }
                        }
                    }
                    var_21 = ((((2424866279531891920 > (arr_0 [i_10]))) ? (((!(arr_0 [i_11 + 2])))) : var_1));
                }
            }
        }
    }
    #pragma endscop
}
