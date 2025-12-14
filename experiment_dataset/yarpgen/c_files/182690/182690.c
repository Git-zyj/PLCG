/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_17 = (((min((arr_2 [i_3]), (arr_8 [i_0] [i_0 + 4] [i_0] [i_0]))) == ((min(((min((arr_2 [12]), (arr_2 [i_2])))), ((~(arr_2 [i_0]))))))));
                        var_18 = (min(var_18, (((-(max((arr_1 [i_0]), ((-(arr_9 [i_0 + 1] [1] [i_2] [i_3]))))))))));
                        arr_11 [i_0] [1] [i_0] [i_0] [i_0] = ((-(((!(arr_4 [i_0]))))));
                        var_19 = (max((((!((max((arr_10 [1] [1]), (arr_2 [i_2]))))))), (((-(arr_10 [i_0 - 2] [i_0 - 2]))))));
                        var_20 = (arr_6 [i_0] [i_1] [i_2] [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_21 = (arr_2 [i_1]);
                        var_22 = (arr_4 [i_2]);
                        arr_15 [i_0] [i_1] [i_0] = ((((~((~(arr_6 [3] [3] [3] [i_4]))))) - (arr_1 [i_1])));
                        arr_16 [i_0] = (((((((~(arr_7 [i_0] [i_0])))) / (min((arr_4 [i_0]), (arr_14 [i_1] [i_1]))))) | (((((((arr_1 [i_0]) * (arr_5 [i_0])))) / (max((arr_2 [i_0]), (arr_0 [i_1]))))))));
                        var_23 = (((arr_7 [i_4] [i_0]) * (max((arr_3 [i_2]), (((!(arr_12 [i_1] [i_2] [i_4]))))))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_24 += ((~((min((arr_7 [i_2] [i_5]), (arr_6 [i_2] [i_2] [i_1] [i_0]))))));
                        var_25 = (max(((~(min((arr_0 [6]), (arr_0 [i_0]))))), (((((arr_13 [i_5] [i_0] [i_1] [i_0]) | (arr_2 [i_5])))))));
                        arr_19 [i_0] [i_1] = (((arr_13 [10] [10] [i_2] [i_2]) >= (((min((arr_3 [i_0]), (arr_5 [i_5]))) >> (((min((arr_5 [i_0]), (arr_0 [10]))) - 63))))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            var_26 = (max(var_26, (max(((((arr_3 [i_7]) && ((max((arr_17 [i_2] [i_6]), (arr_20 [4] [2] [2] [i_6] [i_6]))))))), (min((max((arr_8 [i_0 + 2] [i_1] [i_2] [i_0 + 2]), (arr_8 [i_6] [i_6] [i_1] [1]))), ((min((arr_6 [i_6] [i_2] [i_1] [i_0]), (arr_20 [i_0 + 2] [i_0] [i_0] [i_0 + 3] [i_0]))))))))));
                            var_27 = ((!(arr_5 [i_7])));
                            var_28 = (min(var_28, ((min((((!(arr_17 [i_6] [i_0])))), (arr_12 [i_0] [i_0 + 3] [i_1]))))));
                        }
                        var_29 = (min(var_29, (((~((min((arr_7 [i_6] [i_0]), (((!(arr_1 [i_0]))))))))))));
                        var_30 |= (min((((!(((arr_17 [i_0] [i_0]) || (arr_1 [i_2])))))), (arr_1 [i_2])));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_31 = (arr_9 [8] [i_8] [8] [i_0]);
                                var_32 += (arr_28 [i_9] [i_8] [i_2] [3] [i_0]);
                                var_33 = (((((((arr_3 [i_0]) != (arr_14 [i_2] [i_2]))))) == ((-(min((arr_29 [i_2]), (arr_4 [i_1])))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_34 = ((((~(arr_26 [i_0 + 3] [i_1] [i_1] [i_10]))) ^ (arr_6 [i_0 + 4] [i_0 + 4] [i_2] [i_10])));
                        var_35 = (min(var_35, (arr_6 [3] [i_1] [i_2] [i_10])));
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_36 -= (arr_14 [i_11] [4]);
                        var_37 = ((min(((((arr_5 [i_0]) < (arr_0 [i_11])))), (min((arr_4 [i_11]), (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]))))));
                    }
                    arr_36 [i_1] [i_1] = (min((((min((arr_13 [i_0] [i_1] [i_2] [10]), (arr_0 [i_0]))))), (max((((-(arr_33 [i_2] [i_1] [i_0] [4])))), (((arr_13 [i_0] [i_0] [i_0] [i_0]) - (arr_32 [i_0] [i_0] [i_1] [7] [i_0] [7])))))));
                    var_38 = max((((+(max((arr_4 [i_1]), (arr_13 [i_2] [i_1] [i_0] [i_0])))))), (max((max((arr_31 [i_0]), (arr_3 [5]))), (((arr_8 [i_0] [i_1] [12] [i_2]) ^ (arr_4 [0]))))));
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 0;i_12 += 1)
    {
        var_39 = ((!(arr_37 [i_12])));
        arr_39 [i_12 + 1] = (min((((((arr_38 [i_12]) - (arr_38 [i_12 + 1]))) - (arr_38 [4]))), (arr_38 [i_12])));
        arr_40 [i_12] [i_12] = (((arr_37 [i_12]) + (min((min((arr_38 [1]), (arr_37 [i_12]))), (arr_38 [i_12])))));
    }
    for (int i_13 = 2; i_13 < 9;i_13 += 1)
    {

        for (int i_14 = 4; i_14 < 10;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    {
                        var_40 ^= ((min((min((arr_44 [i_16] [2] [i_13]), (arr_8 [i_16] [i_15] [i_14] [1]))), (min((arr_9 [i_15] [9] [1] [i_15]), (arr_33 [i_16] [1] [i_14] [1]))))) < ((~(arr_30 [i_13] [i_14] [i_15] [9]))));
                        var_41 = (min(var_41, (((!((!((max((arr_12 [i_13] [i_14] [i_15]), (arr_31 [i_13])))))))))));
                        var_42 = (max(var_42, ((min((min((((arr_34 [i_13]) & (arr_6 [i_13 + 1] [i_14] [3] [i_16]))), (((~(arr_22 [i_14] [i_14])))))), (((~((~(arr_21 [i_15] [i_16])))))))))));
                        var_43 = (min(var_43, (((((((-(arr_22 [i_14] [i_16])))) * (arr_32 [i_13] [i_14] [i_15] [i_16] [i_15] [i_15]))) & (((-(arr_42 [i_14 + 3]))))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    {
                        arr_59 [i_13] [i_13] [i_17] [i_18] = ((-(min((arr_38 [3]), (((arr_44 [i_14 + 2] [i_14 + 2] [i_17]) - (arr_30 [i_18] [i_18] [i_18] [i_18])))))));
                        var_44 = (max((((((((arr_50 [i_13] [i_17]) / (arr_30 [i_13] [i_13] [i_13] [i_13])))) >= ((-(arr_42 [i_13])))))), (arr_23 [i_18] [i_14] [i_17] [i_17] [i_17])));
                    }
                }
            }
        }
        var_45 = (max(var_45, (((~(((max((arr_51 [i_13] [i_13]), (arr_25 [i_13 + 4] [i_13] [i_13] [i_13] [i_13]))))))))));
    }
    var_46 = ((-(min((max(var_7, var_8)), ((min(var_13, var_9)))))));
    #pragma endscop
}
