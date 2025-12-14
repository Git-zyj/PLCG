/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (((((min((arr_1 [i_0]), (arr_0 [i_0]))))) ? ((~((~(arr_1 [i_0]))))) : (min(((((arr_0 [i_0]) <= (arr_1 [i_0])))), (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (((+(max((((arr_3 [i_2] [i_0]) ? (arr_3 [i_1] [i_0]) : (arr_3 [i_0] [i_0]))), (arr_1 [i_0]))))))));
                    var_13 &= ((((((((((arr_3 [i_2] [1]) || (arr_1 [i_0]))))) % ((-(arr_2 [i_1])))))) ? (((arr_4 [i_0] [i_0] [i_0]) ? ((-(arr_4 [i_0] [i_1] [i_2]))) : (((arr_0 [i_2]) ? (arr_1 [i_1]) : (arr_4 [i_1] [i_1] [i_2]))))) : ((~((((arr_0 [i_0]) < (arr_1 [2]))))))));
                }
            }
        }
        var_14 = ((~(((((~(arr_4 [i_0] [i_0] [i_0]))) <= ((~(arr_3 [i_0] [i_0]))))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_17 [i_6] [i_5] [i_5] [i_4] [i_3] [i_6] = ((((!(((arr_6 [i_4]) && (arr_0 [i_3]))))) ? (((arr_4 [i_6] [i_4] [i_6]) ? (((arr_5 [i_6] [i_6] [i_6]) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_6 [i_3]))) : ((((arr_1 [i_0]) ? (arr_1 [i_6]) : (arr_1 [i_0])))))) : (arr_15 [i_0] [i_0] [1] [i_5] [i_6])));
                            var_15 = (max(var_15, ((((((((((arr_10 [i_6]) & (arr_0 [i_5])))) | ((~(arr_5 [i_4] [i_4] [i_4])))))) ? (((((~(arr_4 [i_4] [i_4] [i_6])))) ? ((((arr_4 [i_3] [i_3] [i_5]) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_6]) : (arr_10 [i_0])))) : (max((arr_5 [i_0] [i_4] [i_0]), (arr_0 [i_0]))))) : (((~((~(arr_10 [i_4])))))))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            var_16 += (((((!(arr_14 [i_0] [i_0] [i_4] [i_5] [i_7])))) <= (((arr_19 [i_7] [8] [i_5] [i_4] [i_4] [i_3] [i_0]) + (arr_10 [i_3])))));
                            var_17 += ((((arr_5 [i_4] [i_4] [i_4]) ? (arr_15 [i_0] [i_3] [i_4] [i_5] [i_7]) : (arr_5 [i_0] [14] [i_0]))));
                            var_18 = (((arr_15 [i_0] [i_3] [i_7 + 1] [i_0] [i_3]) * ((((!(arr_10 [i_3])))))));
                            var_19 = (((arr_12 [i_0] [i_3] [i_3] [i_3] [i_7] [i_3]) ? (((!(arr_4 [i_3] [i_4] [i_7])))) : ((((arr_19 [i_0] [i_0] [i_3] [i_4] [i_4] [i_0] [i_0]) || (arr_8 [i_0] [i_5] [14]))))));
                        }
                        arr_20 [i_0] [6] [i_0] [i_4] [i_0] [i_5] = ((~((-(arr_3 [i_4] [i_5])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    var_20 = (max(var_20, (((-(arr_2 [i_0]))))));
                    arr_26 [i_8] [i_8] [i_8] = (!((((arr_1 [i_8]) ? (arr_1 [i_0]) : (arr_1 [i_9])))));
                    var_21 &= ((((!((max((arr_6 [i_8]), (arr_22 [i_8])))))) ? ((((max((arr_3 [i_0] [i_8]), (arr_6 [i_0])))) ? (((arr_3 [i_8] [i_0]) ? (arr_21 [i_8] [i_8]) : (arr_24 [i_0] [i_0]))) : (((~(arr_15 [i_0] [i_8] [i_9] [6] [i_8])))))) : ((((((arr_4 [i_0] [i_8] [i_9]) ? (arr_25 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_8] [i_0])))) ? (arr_6 [i_9]) : ((min((arr_4 [i_0] [i_8] [i_9]), (arr_2 [i_9]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {

                /* vectorizable */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_22 = ((!(arr_3 [i_12] [i_10])));
                    var_23 = (min(var_23, (((-(arr_2 [i_10]))))));
                    var_24 = (arr_4 [i_11] [1] [1]);

                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        var_25 = (min(var_25, ((((!(arr_30 [i_10])))))));
                        arr_38 [i_11] [i_12] [i_10] [i_10] [i_11] = ((arr_15 [i_13] [i_12] [i_12] [i_11] [i_10]) == (arr_12 [i_13] [i_13] [i_12] [i_10] [i_11] [i_10]));
                    }
                }
                var_26 = (max(var_26, (((((arr_2 [i_10]) ? (arr_2 [i_10]) : (arr_2 [i_10])))))));
                var_27 = ((((((((arr_31 [i_11] [i_10] [i_11]) ? (arr_27 [i_10] [i_10]) : (arr_35 [0] [i_10] [i_10] [i_11])))))) * ((-(max((arr_33 [i_10] [i_11] [1]), (arr_35 [i_10] [i_10] [i_10] [i_10])))))));
            }
        }
    }
    #pragma endscop
}
