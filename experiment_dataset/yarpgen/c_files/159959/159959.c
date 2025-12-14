/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_1 - 2] = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1] [1] [i_3] [i_0] = (min((((max(16352, 4294967267)) > (((max(1, 1)))))), (((arr_1 [i_0]) > (arr_0 [i_0])))));
                                arr_19 [i_0] [i_3] [i_4] = (!1);
                                arr_20 [i_0] [i_1 - 2] [6] [i_3 + 1] [i_4 + 3] = (((min(((min(2, var_10))), (min((arr_1 [i_0]), var_9)))) + (((1 | 110) ? 4294967285 : 1))));
                                arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_4] [i_0] = (max((var_1 > 1), (max((arr_17 [i_4 + 1] [i_4] [i_4 + 1] [7] [i_4 - 4] [i_3]), var_0))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        arr_25 [i_0] [i_1 - 2] [10] [i_0] [i_0] &= (((min((arr_14 [10] [i_0 + 2] [i_1 - 1] [3] [i_0 + 2]), 2260633557)) + (arr_4 [i_1 + 1] [i_1])));
                        arr_26 [i_0] [i_1 - 2] [i_1 - 2] [i_0] [i_5 - 1] [i_5] = arr_17 [i_0] [i_1 + 1] [10] [i_5] [i_1 + 1] [i_2 + 2];
                        arr_27 [i_0] [i_0] [i_0] = (((arr_5 [i_0] [i_0]) | var_5));
                        arr_28 [i_0] [i_0] [i_0] [i_0 - 1] = 2147483647;
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_7] [i_7] = ((~(arr_4 [i_0] [i_1])));
                            arr_34 [i_0] [i_0] = (((arr_1 [i_0]) > (arr_1 [i_0])));
                        }
                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            arr_37 [6] [i_1 + 1] [i_1] [i_1] [i_1 + 2] [4] |= (~0);
                            arr_38 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = (arr_0 [i_0]);
                            arr_39 [i_8 + 1] [i_0] [i_2] [i_0] [i_0] = (i_0 % 2 == zero) ? ((((arr_12 [i_0]) + (arr_12 [i_0])))) : ((((arr_12 [i_0]) - (arr_12 [i_0]))));
                            arr_40 [i_8 + 1] [i_6 - 1] [i_0] [i_0] [i_1] [i_0] = ((4294967293 + (arr_2 [i_6 + 3] [i_0 + 1])));
                        }
                        for (int i_9 = 1; i_9 < 17;i_9 += 1)
                        {
                            arr_45 [i_0] [i_1 - 1] [i_1 - 1] [i_6 + 2] [i_0] = ((var_0 + (arr_23 [i_0] [i_0 + 1] [i_0 - 1])));
                            arr_46 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_6 + 3] [i_9 + 1] [i_9] [0] = -13;
                        }
                        arr_47 [i_0] = ((243 ? (arr_1 [i_0]) : var_10));
                        arr_48 [i_0] [2] [i_0] [i_0 + 2] |= -1;
                    }
                    arr_49 [i_0] [i_0] [i_2] [i_1] = ((var_11 | (arr_5 [i_0] [i_0])));
                    arr_50 [1] [i_0] [1] [i_0] = ((var_7 + ((((((arr_22 [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0 + 1]) < (arr_5 [i_0] [i_1]))) ? 42978 : var_2)))));
                }
            }
        }
        arr_51 [0] = (((-(arr_24 [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0]))));
        arr_52 [i_0] = (((-(arr_43 [i_0] [10] [i_0] [i_0] [i_0]))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_55 [0] &= (((((arr_53 [18]) > 0)) ? (arr_54 [i_10]) : (arr_54 [i_10])));
        arr_56 [i_10] [i_10] = ((max((arr_53 [i_10]), (((arr_53 [i_10]) / (arr_54 [i_10]))))));
    }
    var_17 = (var_4 + var_15);
    var_18 = (min((1 + -91), (min(24, var_0))));
    #pragma endscop
}
