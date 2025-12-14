/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~((~(max(var_1, var_7)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 += (min((min((min((arr_0 [i_0]), (arr_1 [i_0]))), (min((arr_0 [i_0]), (arr_0 [1]))))), (arr_1 [i_0])));
        var_12 = min((min((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [19]))), (arr_0 [i_0]))), (((((min((arr_0 [i_0]), (arr_1 [i_0])))) ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (arr_1 [7])))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_13 = (min(var_13, ((max((min((arr_2 [i_1] [i_1]), (arr_0 [i_1]))), (min((arr_0 [i_1]), (((~(arr_3 [18] [0])))))))))));
        arr_4 [i_1] = (arr_0 [i_1]);
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        arr_8 [i_2 + 1] = ((((min(((((arr_3 [i_2 + 1] [1]) ? (arr_6 [i_2]) : (arr_3 [i_2] [16])))), (min((arr_5 [8]), (arr_2 [i_2] [i_2])))))) ? (min((arr_6 [i_2]), (min((arr_2 [i_2 - 1] [i_2]), (arr_5 [i_2]))))) : (arr_0 [i_2])));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_14 = (min((min((max((arr_9 [i_3]), (arr_16 [i_2] [i_3] [i_3] [i_4] [i_5]))), ((max((arr_16 [i_5] [i_2 - 2] [i_4] [i_3] [i_2 - 2]), (arr_7 [i_5])))))), (((((min((arr_11 [i_3]), (arr_12 [i_4] [i_4])))) ? (((min((arr_11 [i_2]), (arr_6 [i_5]))))) : ((~(arr_15 [i_2] [i_2] [i_2 - 2] [i_2]))))))));

                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            arr_20 [i_6] [14] [i_6] [i_6] [i_2 + 1] [i_2 + 1] = (min(((max((arr_7 [i_5]), (arr_15 [i_2] [i_3] [i_4] [i_5])))), (min((min((arr_17 [i_2] [i_2]), (arr_12 [i_6 + 1] [i_4]))), (((!(arr_3 [14] [i_6]))))))));
                            arr_21 [i_6] [i_5] [i_6] [i_3] [i_2 - 2] = ((+(((!((min((arr_0 [19]), (arr_5 [i_4])))))))));
                            var_15 = (((arr_13 [i_2]) ? (min((min((arr_17 [i_4] [i_2]), (arr_14 [i_4] [i_5] [i_6]))), ((max((arr_7 [i_4]), (arr_16 [i_5] [i_5] [i_5] [i_5] [i_5])))))) : ((((!(arr_19 [i_6] [1] [1] [i_5] [i_6])))))));
                            var_16 = (arr_7 [7]);
                            var_17 = (arr_11 [i_2]);
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_26 [15] [i_3] [i_4] [13] [7] [i_5] = ((((((min((arr_5 [i_5]), (arr_10 [i_7])))) ? (arr_3 [i_7] [i_3]) : (arr_11 [i_5])))) ? (arr_12 [i_2] [i_2]) : (arr_12 [i_3] [i_4]));
                            arr_27 [i_7] [i_7] [i_5] [4] [i_3] [i_3] [i_2] = (arr_15 [i_2] [i_2] [i_4] [14]);
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 15;i_9 += 1)
            {
                {
                    var_18 = arr_22 [i_2] [i_8] [i_2] [i_9] [i_9];
                    var_19 = (arr_24 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 - 3]);
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_39 [i_2 - 3] [i_8] [i_9 - 1] [i_10 + 2] [i_8] [i_9] = (min((((((min((arr_31 [i_8] [i_9] [i_11]), (arr_13 [i_2])))) ? (((arr_9 [i_10 - 1]) ? (arr_12 [i_2] [i_2]) : (arr_18 [i_8] [i_8] [i_8]))) : (arr_10 [i_10])))), ((-(((arr_37 [i_9] [i_9] [i_9] [i_2]) ? (arr_32 [2] [2] [i_10] [i_9]) : (arr_37 [i_11] [i_8] [i_9] [i_10 - 1])))))));
                                var_20 = (-(((!(arr_1 [9])))));
                            }
                        }
                    }
                }
            }
        }
        var_21 += (((min(((max((arr_3 [i_2 + 1] [1]), (arr_19 [8] [6] [i_2 - 1] [6] [i_2])))), (arr_24 [i_2 - 2] [2] [3] [i_2] [i_2 - 2])))) ? (min((min((arr_24 [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 3]), (arr_16 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 - 1]))), (arr_24 [10] [i_2] [10] [i_2] [2]))) : ((min(((-(arr_33 [i_2 - 2] [i_2] [i_2] [i_2]))), (arr_1 [i_2])))));
    }

    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_22 = (min((arr_41 [i_12] [1]), (max(((min((arr_41 [i_12] [i_12]), (arr_1 [i_12])))), (arr_40 [i_12])))));
        arr_43 [i_12] = (max(((-(((arr_40 [i_12]) ? (arr_0 [i_12]) : (arr_40 [1]))))), ((max((((arr_0 [i_12]) ? (arr_41 [i_12] [i_12]) : (arr_42 [i_12]))), ((-(arr_42 [i_12]))))))));
    }
    #pragma endscop
}
