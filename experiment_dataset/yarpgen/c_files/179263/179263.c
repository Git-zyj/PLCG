/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = (((~563478836) <= (((((min(var_9, var_1))) ? (arr_4 [15] [i_3]) : (arr_4 [i_0] [i_1]))))));
                        arr_13 [i_3] [i_3] [i_2] [13] [i_1] [13] = (min((min(var_1, (arr_1 [i_3]))), ((((arr_1 [i_0]) > (arr_1 [i_3]))))));
                        arr_14 [i_2] [i_3] = (((3041099759 ? 78 : var_12)));
                        arr_15 [13] [i_2] [i_1] [i_0] = (((-92 || (arr_6 [i_1] [i_2]))));
                    }

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_0] &= (((!(arr_4 [i_1] [i_1]))) ? (((arr_8 [i_4] [i_2] [i_1] [i_0]) ? (arr_16 [i_4]) : (arr_16 [i_4]))) : (!3041099749));
                        arr_19 [i_4] [i_2] [i_1] [i_0] [i_0] = ((((var_5 ? -92 : (arr_6 [i_0] [i_2]))) <= var_2));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        arr_22 [i_5] = (-(arr_1 [i_2]));
                        arr_23 [i_0] [10] [i_1] [i_0] = (arr_3 [i_5 + 3]);
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((arr_9 [i_5 + 4] [i_1]) ? ((((!(arr_5 [i_0] [i_1] [i_2] [i_2]))))) : ((var_0 ? 3041099758 : var_12)));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 9;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_39 [i_6] [i_6] [i_6] [i_9] [i_10] = (((arr_10 [i_6] [i_6 - 1] [i_8] [i_10] [i_10] [1]) ? (arr_10 [i_6 + 1] [i_6 + 1] [i_10] [i_10] [11] [11]) : (-32767 - 1)));
                                arr_40 [i_6] [i_9] [i_8] [i_7] [i_6] = ((~(arr_21 [i_6] [i_6 - 3] [i_8] [i_9] [i_8] [i_9])));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            {
                                arr_50 [i_6] [i_7] [i_6] [i_12] [i_12] = ((((-(arr_11 [i_12] [i_7] [i_7] [i_11]))) - (arr_10 [i_6 - 3] [i_6] [i_6] [i_11] [i_12] [6])));
                                arr_51 [i_13] [i_6] [i_6] [i_6] [i_6 + 1] = ((((141 ? 3041099759 : 1))) ? 157 : var_10);
                            }
                        }
                    }
                    arr_52 [4] [i_11] = ((~((16352 ? var_4 : 1))));
                }
                for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
                {
                    arr_55 [8] = (arr_26 [i_6]);
                    arr_56 [i_14] [i_6] [i_6] [i_6 - 2] = ((+((1 ? 8640 : ((((arr_9 [i_6 - 1] [i_6 + 1]) ? (arr_43 [i_6] [i_6 - 2] [i_7] [i_14]) : (arr_31 [i_6]))))))));
                    arr_57 [i_6 - 1] [i_6 - 1] [i_7] [i_6] = ((-79 || (arr_38 [i_6 - 2] [i_7] [i_14])));
                }
            }
        }
    }
    var_15 = var_14;
    #pragma endscop
}
