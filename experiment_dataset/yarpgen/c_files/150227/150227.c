/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_10));
    var_18 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_20 = arr_4 [i_1];
                                var_21 = arr_10 [i_0] [i_0] [i_2] [i_3] [i_0];
                                var_22 = (arr_0 [i_0]);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_23 = (max(var_23, (102904521 * 173)));
                        var_24 = (arr_15 [i_0] [17] [i_5] [i_1] [i_2] [i_5]);
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_6] [i_6] = (((!(!20))));
                        var_25 = ((((arr_5 [i_1 - 1] [i_1 - 1]) && (arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                        var_26 = (arr_4 [i_0]);
                        var_27 = (max(var_27, (((arr_7 [i_0] [i_0] [i_0] [i_0]) * (((((arr_0 [i_6]) / (arr_14 [i_0] [i_0] [i_1] [i_2] [i_0]))) * (arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                        var_28 = (min(var_28, (arr_17 [i_0] [3])));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_29 = (arr_20 [11] [i_0]);
                        var_30 = (arr_4 [i_1 - 1]);
                        var_31 = (arr_10 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1]);
                        var_32 = 173;
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_33 = (((arr_3 [i_1 + 1]) + ((((arr_12 [12] [i_0] [i_1] [12] [12]) != (arr_20 [i_0] [i_0]))))));
                        var_34 = (arr_0 [i_0]);
                        var_35 = (arr_15 [6] [i_2] [i_8] [i_8] [i_0] [i_0]);
                        var_36 = (((arr_3 [i_2]) == 102904517));
                    }
                    arr_23 [i_1] [i_1] [i_1 + 1] [i_0] = (((((arr_8 [i_2] [i_1 + 1] [i_1 - 1] [i_1 + 1]) ^ (arr_8 [8] [i_1 - 1] [i_1 + 1] [i_1 - 1]))) >> (arr_6 [i_0] [i_0] [i_2])));
                    var_37 = (arr_6 [i_1 + 1] [i_1] [i_1]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 17;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 0;i_13 += 1)
                        {
                            {
                                var_38 = (arr_36 [i_9]);
                                arr_37 [15] [i_10 - 2] [i_11] [i_9] [i_12] [i_13 + 1] = (102904526 <= 4192062775);
                                var_39 = (((-(arr_33 [i_13] [i_13] [12] [i_12] [i_12] [i_11 + 3]))));
                                arr_38 [1] [8] [i_9] [i_12] [1] [i_10 - 1] = (((((-(arr_25 [i_9])))) - (arr_33 [i_9] [12] [12] [i_9] [i_12] [i_13 + 1])));
                                var_40 = (arr_28 [i_10 - 1] [8] [i_9] [i_11 - 1]);
                            }
                        }
                    }

                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        var_41 = (arr_30 [i_9] [i_9] [i_9] [i_14]);
                        var_42 = (!34);
                        var_43 = ((((!(arr_39 [i_9] [i_9] [i_9] [i_9])))));
                    }
                    var_44 = (((arr_30 [i_9] [10] [i_10] [0]) > 83));
                    arr_41 [i_9] = (((arr_30 [i_9] [i_9] [i_9] [i_9]) | (arr_29 [i_10])));
                }
            }
        }
    }
    #pragma endscop
}
