/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    arr_10 [7] [7] [7] [i_2] = (((arr_3 [i_0]) ? (min((((arr_1 [i_1]) ? (arr_5 [i_0] [i_1] [4]) : (arr_9 [i_1]))), (max((arr_8 [i_0] [i_1] [i_2]), (arr_9 [i_0]))))) : (arr_0 [i_2])));
                    arr_11 [i_0] [i_0] [i_0] [8] = ((((!(((-(arr_4 [i_0] [i_1] [8]))))))));
                    arr_12 [i_0] [i_1] [i_2] = (((!((((arr_6 [i_2] [1] [i_0]) ? (arr_9 [i_0]) : (arr_1 [4])))))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 7;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_3] [i_4] = (arr_5 [i_5] [i_4] [i_0]);
                                var_18 = (!(arr_16 [i_0] [i_0] [i_0]));
                                var_19 = (min(var_19, ((max((((!(arr_7 [i_1] [i_3] [i_4] [i_3])))), (((arr_18 [i_0] [i_0]) ? (arr_13 [i_0] [i_4]) : (arr_6 [i_0] [i_3] [i_4]))))))));
                            }
                        }
                    }
                    arr_20 [i_0] = (arr_7 [i_0] [i_1] [i_3] [i_3]);
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 2; i_7 < 8;i_7 += 1)
                    {
                        var_20 -= (arr_9 [i_0]);
                        var_21 = ((~(arr_5 [3] [i_0] [3])));
                        var_22 = (arr_21 [i_0] [i_1] [i_6] [9]);
                    }
                    /* vectorizable */
                    for (int i_8 = 4; i_8 < 8;i_8 += 1)
                    {
                        arr_27 [i_0] [i_1] [i_6] [i_1] = (arr_7 [i_0] [i_0] [i_6] [i_8]);
                        arr_28 [8] = (((arr_23 [i_1] [i_1] [i_0]) ? (arr_4 [i_0] [i_1] [i_6]) : (((arr_16 [i_0] [i_0] [i_8]) ? (arr_26 [i_0] [i_0] [i_6] [i_8] [i_0]) : (arr_13 [i_1] [i_8])))));
                        var_23 = (min(var_23, ((((-(arr_24 [0] [3] [i_6] [i_6] [i_6])))))));
                    }
                    arr_29 [i_6] [i_1] [i_0] &= ((((((arr_16 [i_0] [i_1] [i_0]) ? (arr_14 [i_0] [i_6]) : ((~(arr_6 [i_0] [i_0] [i_0])))))) ? ((-(arr_24 [i_0] [i_0] [i_1] [i_6] [i_6]))) : (arr_18 [i_1] [i_1])));
                }
                var_24 = (max(var_24, (arr_5 [i_0] [i_0] [i_1])));
            }
        }
    }
    var_25 = ((((((min(var_15, var_9))))) ? var_10 : var_9));
    /* LoopNest 2 */
    for (int i_9 = 3; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            {
                arr_36 [i_9] = ((!((!((min((arr_30 [i_9] [i_10]), (arr_32 [i_9] [17]))))))));
                var_26 = (((((((((arr_32 [i_9 - 2] [13]) ? (arr_31 [i_10]) : (arr_33 [i_9] [i_9])))) ? ((((arr_34 [5] [5]) ? (arr_33 [i_9] [i_10]) : (arr_31 [i_9])))) : ((-(arr_34 [i_9] [6])))))) ? (arr_34 [i_9] [i_10]) : (arr_35 [i_10])));
            }
        }
    }
    #pragma endscop
}
