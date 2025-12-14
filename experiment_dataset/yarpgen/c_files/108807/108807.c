/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -59848;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
                        {
                            var_15 = (min(var_15, (((59844 > (arr_9 [i_2] [i_4 + 2] [i_4 - 3] [i_2]))))));
                            var_16 = ((var_1 ? (((arr_11 [i_1] [i_3] [i_1] [i_1] [i_1]) ? (arr_3 [i_0]) : (arr_3 [i_0]))) : (((!(arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]))))));
                        }
                        for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            arr_16 [2] [i_0] [i_1] [i_1] [i_2] [1] [i_1] = (arr_8 [9] [i_2] [i_5]);
                            var_17 *= (((arr_5 [i_2]) >= var_5));
                            arr_17 [i_0] [i_1] [i_2] [i_1] [i_1] [1] = var_9;
                        }
                        for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_18 = ((+(((arr_1 [8] [i_6]) ? var_10 : var_12))));
                            var_19 = ((arr_0 [5]) ? (arr_11 [i_1] [i_6] [i_6] [i_6 + 2] [i_1]) : var_0);
                            arr_20 [i_0] [i_1] [i_3] = ((((((arr_4 [i_0] [i_0]) / -32767))) ? (arr_11 [i_1] [i_1] [i_2] [i_6] [i_6]) : var_4));
                            var_20 = (var_4 ^ ((var_0 ? (arr_8 [i_0] [i_1] [6]) : (arr_6 [i_2] [i_2] [i_6]))));
                        }
                        arr_21 [i_3] [i_1] [i_1] [i_1] [1] = ((var_8 ^ (arr_13 [i_0] [i_1] [i_2] [i_0] [i_3])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 11;i_8 += 1)
            {
                {
                    var_21 = (i_8 % 2 == 0) ? ((((140949180 ? (arr_7 [i_0] [i_0] [i_7] [i_8]) : 37883)) * ((var_13 << (((arr_5 [i_8]) + 4705291628704113000)))))) : ((((140949180 ? (arr_7 [i_0] [i_0] [i_7] [i_8]) : 37883)) * ((var_13 << (((((arr_5 [i_8]) + 4705291628704113000)) - 5857206989123670832))))));
                    var_22 *= (((((var_2 >= (arr_13 [10] [i_7] [i_8 + 1] [i_8 + 2] [i_8])))) % (arr_27 [i_8] [i_8 - 2] [i_8 + 1] [i_8 - 3])));
                    arr_28 [i_8] [0] [i_8 - 1] = (((((arr_12 [i_7] [i_7] [7] [i_7] [i_8] [i_7] [i_7]) ? (arr_8 [i_0] [i_7] [i_8 - 2]) : var_0)) * 59848));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_23 = (((arr_32 [i_10 + 1] [i_10 + 2] [i_10]) != -var_13));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 13;i_13 += 1)
                        {
                            {
                                arr_42 [i_9] [i_10] [i_11] [i_10 + 1] [i_13 + 1] [i_12] [i_9] = ((((min((arr_31 [i_9] [13]), (arr_36 [i_11] [i_9] [i_9] [i_9])))) ? ((((arr_33 [8] [i_9] [1]) ? 2030822002 : ((((arr_29 [6]) <= 1077645830)))))) : (arr_35 [13] [i_9])));
                                arr_43 [13] [i_13 - 2] [i_13] [i_13] [i_9] = (arr_36 [i_13 - 1] [i_9] [i_9] [i_9]);
                            }
                        }
                    }
                }
            }
        }
        arr_44 [i_9] [i_9] = (((max(var_9, var_3)) >= ((((((-(arr_35 [i_9] [i_9])))) ? var_1 : ((((arr_29 [i_9]) >> (((arr_40 [i_9] [i_9] [i_9] [i_9]) + 22490))))))))));
        var_24 = (min(var_24, ((max(((max(var_13, ((((arr_36 [i_9] [10] [10] [i_9]) > (arr_37 [i_9] [i_9] [i_9] [i_9]))))))), (min((arr_41 [8]), (min((arr_39 [i_9] [i_9] [1] [i_9] [i_9] [i_9]), (arr_33 [14] [1] [i_9]))))))))));
    }
    #pragma endscop
}
