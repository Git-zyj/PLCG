/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((max(((max(var_9, var_16))), (~var_18))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (((var_17 & var_10) >> (((!((max((arr_3 [i_1] [i_1]), var_1))))))));

                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    var_21 &= (max(59, 11349221827206347798));
                    var_22 += (arr_2 [i_1] [i_1 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_4] = (max(5289361979780443151, (((!(arr_2 [i_0 - 2] [i_1 - 1]))))));
                                var_23 = ((+((max((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), var_11)))));
                            }
                        }
                    }
                    var_24 = ((786398146 >> (18446726481523507200 - 18446726481523507173)));
                }
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    var_25 -= (max(32045, 12609));
                    arr_16 [7] [7] [5] [i_1] = ((!((max((max((arr_5 [8] [8] [i_1] [8]), (arr_7 [i_1] [1] [i_1] [i_1]))), (((!(arr_3 [i_1] [i_1])))))))));
                }
                for (int i_6 = 4; i_6 < 15;i_6 += 1)
                {
                    var_26 = (arr_7 [i_0] [i_0] [i_0] [i_1]);
                    var_27 = (max(var_0, (arr_8 [i_0] [i_0] [4] [i_0] [i_0 + 1] [i_0])));
                    var_28 = (min(var_28, (((~(((arr_15 [i_0 + 1] [i_0 + 1] [i_6] [i_6]) ? (arr_5 [i_0 + 2] [i_1 - 1] [i_1 - 1] [i_0 + 2]) : (arr_5 [i_0 - 4] [i_1] [i_1] [i_1]))))))));
                }
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    var_29 = (max(var_29, ((!(((((max(var_3, var_6))) * var_3)))))));
                    arr_22 [i_1] = var_11;
                    var_30 = (max(7097522246503203818, 3146808726671541309));
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_31 = (max((((var_4 <= (arr_3 [i_1] [i_1])))), (arr_19 [i_1] [i_1] [i_1])));
                                arr_30 [i_0 + 1] [10] [0] [i_8] [10] |= (((!var_7) ? (((~(arr_0 [i_0])))) : (((arr_23 [8] [8]) ? ((var_3 ? var_6 : (arr_28 [i_0 - 4] [i_1 - 1] [i_1] [i_8] [i_0] [i_1]))) : (arr_3 [i_8] [8])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_32 = var_10;
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 0;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 13;i_15 += 1)
                        {
                            {
                                arr_43 [i_11] [i_12] [8] [8] [i_11] = (max((arr_8 [i_15 - 2] [11] [i_15] [i_14 + 1] [i_12 + 1] [i_12 + 1]), (max((arr_8 [i_15 - 1] [i_14 - 1] [i_14 + 1] [i_14 + 1] [i_12 + 1] [i_12 + 1]), (arr_8 [i_15 + 2] [i_12 + 1] [i_15 - 2] [i_14 - 3] [i_12 + 1] [i_12 + 1])))));
                                var_33 = (min(var_33, ((max((max((arr_12 [i_14 - 3] [i_15 + 2]), (arr_12 [i_14 - 1] [i_15 + 1]))), (!var_9))))));
                            }
                        }
                    }
                    var_34 *= ((max((arr_23 [i_12 + 1] [i_12 + 1]), (arr_23 [i_12 + 1] [i_12 + 1]))));
                }
            }
        }
    }
    #pragma endscop
}
