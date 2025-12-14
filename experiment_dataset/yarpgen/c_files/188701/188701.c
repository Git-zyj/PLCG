/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = ((((min((((1 ? 1 : 4426))), (min((arr_0 [i_1]), (arr_1 [i_0])))))) ? ((((!((!(arr_4 [i_0]))))))) : (((arr_4 [i_0]) ? (min((arr_1 [i_1]), (arr_3 [i_0]))) : ((((arr_0 [8]) >> (((arr_4 [i_0]) - 16581883427540923601)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                arr_13 [i_0] [i_0] [i_0] [6] = (arr_10 [i_0] [i_2] [i_2] [i_3] [i_4] [i_1]);
                                var_15 = (min((max(((min(58185, 1))), (max((arr_4 [i_0]), -9223372036854775807)))), (((((9223372036854775807 ? 9223372036854775807 : 19914)) % 58222)))));
                            }
                            for (int i_5 = 0; i_5 < 14;i_5 += 1)
                            {
                                arr_16 [i_2] [i_0] = ((-(arr_5 [i_0] [i_3])));
                                var_16 += (max(((((arr_1 [i_0]) > (arr_1 [i_2])))), (min((arr_1 [i_2]), (arr_1 [i_0])))));
                            }
                            arr_17 [i_0] [i_1] [i_1] [i_1] = (arr_3 [i_0]);
                        }
                    }
                }
                arr_18 [i_0] = (max((arr_2 [i_0]), (arr_2 [i_0])));
                arr_19 [i_0] = ((((((arr_8 [i_0] [i_0] [i_0] [10] [i_0]) ? (((max((arr_15 [i_0] [i_1] [i_1]), (arr_0 [i_0]))))) : ((-(arr_1 [5])))))) ? ((((!(arr_6 [i_0]))) ? (max((arr_3 [i_0]), (arr_1 [i_1]))) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_1]))) : (max((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]) ? (arr_8 [i_0] [0] [5] [i_1] [i_1]) : (arr_4 [i_0]))), (arr_7 [i_0] [i_0] [i_0] [i_0])))));
                var_17 = (min(((min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_1]), ((((arr_14 [i_0] [i_0] [i_0]) < (arr_0 [i_0]))))))), (max(((-9223372036854775807 ? -2091717795 : 2305843009079476224)), (arr_3 [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                {
                    var_18 -= max(((max((arr_24 [i_6]), (min((arr_25 [i_6] [i_6]), (arr_20 [4] [i_8])))))), (max((arr_26 [i_8] [i_7 + 2] [i_8]), (arr_22 [i_7 + 3]))));
                    var_19 = (max(var_19, (arr_21 [i_8])));
                    arr_28 [8] [8] [i_6] = (min(((max((arr_25 [i_7 + 3] [i_7 - 1]), (arr_25 [i_7 + 3] [i_7 - 1])))), (min((arr_20 [13] [i_7]), (max((arr_24 [i_6]), (arr_26 [i_6] [i_7] [i_8])))))));
                    arr_29 [i_6] [i_7 + 2] [i_6] = (max(((((min((arr_26 [i_8] [i_7 - 1] [i_6]), (arr_24 [1]))) > (arr_25 [i_6] [8])))), (arr_26 [i_8] [i_8] [i_8])));
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_20 = (!8184);
        var_21 = (((min((arr_32 [i_9]), (arr_32 [i_9]))) | (((!((((arr_32 [i_9]) ? (arr_31 [i_9]) : (arr_30 [i_9])))))))));
        var_22 = (arr_30 [i_9]);
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 20;i_12 += 1)
                {
                    {
                        arr_41 [i_9] [i_9] [i_10] [i_11] [i_11] [i_12] = (max((((!((max((arr_38 [i_9] [5] [i_9] [16] [5]), (arr_33 [i_9] [i_10 + 2] [i_9]))))))), (min((min(-465700221, 2091717795)), (arr_32 [i_9])))));
                        arr_42 [i_9] [i_9] [i_10] [i_11] [i_12 + 2] [1] = (max(((((max((arr_36 [21]), (arr_37 [i_9] [i_9])))) ? ((-(arr_31 [i_9]))) : (arr_37 [i_9] [i_11]))), (max(((max((arr_36 [i_9]), (arr_38 [i_10] [i_10] [i_10] [i_10] [14])))), (((arr_34 [i_11] [i_9] [i_10 - 1]) + (arr_31 [i_9])))))));
                    }
                }
            }
        }
        var_23 = ((((((-(arr_37 [0] [i_9]))) + 2147483647)) >> (min((((arr_37 [i_9] [i_9]) / (arr_31 [i_9]))), ((max((arr_35 [i_9]), (arr_33 [i_9] [i_9] [i_9]))))))));
    }
    var_24 = var_3;
    var_25 = (min(((var_5 & (((var_10 ? var_2 : var_12))))), var_1));
    #pragma endscop
}
