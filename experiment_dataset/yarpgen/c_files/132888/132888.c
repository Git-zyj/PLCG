/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (var_1 | var_9)));
    var_13 = (max(var_13, var_9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (max((max((((arr_5 [i_1] [7]) + (arr_1 [i_0]))), ((-(arr_5 [i_1] [0]))))), 3928270462839696686));

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    var_14 = (max(var_14, (max((arr_2 [i_2]), ((-(((!(arr_2 [i_1]))))))))));
                    arr_10 [i_1] [i_1] [i_2] = ((((min((arr_8 [3] [i_1] [8]), (max((arr_2 [i_1]), (arr_9 [i_2])))))) ? (((-(arr_4 [i_1])))) : -0));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_14 [i_3] [i_1] [i_3] [i_0] = (min((max((arr_12 [i_0] [i_0 + 1] [i_1] [i_0 + 1]), var_10)), (max((arr_12 [12] [i_0] [i_1] [i_0 + 1]), (arr_12 [i_0] [1] [i_1] [i_0 - 1])))));
                    arr_15 [i_1] [i_1] [i_1] [i_3] = (((((~(arr_3 [i_1])))) << ((((~(arr_9 [i_0 - 2]))) - 1049627212))));
                    var_15 = (min((arr_11 [i_0]), (((((max((arr_9 [i_0]), (arr_0 [i_0] [i_0])))) ? (max(var_8, var_5)) : ((max((arr_13 [i_0] [i_0] [i_0 - 1] [i_0]), (arr_13 [i_0] [i_0] [i_0] [5])))))))));
                    arr_16 [i_0] [i_1] [i_3] = ((!((((((max(1, 13)))) / (((arr_0 [i_0] [i_1]) ? var_10 : var_1)))))));
                    var_16 = (max((arr_0 [i_1] [i_3]), var_1));
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_17 = (min(var_17, var_6));
                    arr_21 [i_0] [i_1] [0] = (min((((arr_0 [i_0] [7]) ? (max(var_2, (arr_20 [i_1] [14] [i_4] [9]))) : ((((!(arr_2 [i_0]))))))), ((max((((!(arr_3 [i_1])))), -var_11)))));
                    arr_22 [i_1] [12] = (max(((~(max(var_7, (arr_2 [i_0]))))), ((((max((arr_9 [i_1]), var_6))) ? ((var_10 ? var_1 : (arr_11 [i_0]))) : (((max(var_10, (arr_1 [i_0])))))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_18 = ((~(arr_4 [i_1])));
                    var_19 = (max(var_19, var_11));
                    arr_27 [i_0] [0] [i_5] [i_1] = (arr_0 [i_1] [0]);
                    arr_28 [i_5] |= (~(arr_8 [i_0] [i_0] [i_5]));
                }
                /* LoopNest 3 */
                for (int i_6 = 4; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_20 = (arr_25 [i_6] [3]);
                                arr_39 [i_0] [i_0] [i_0] [i_1] [i_0 - 1] [14] [i_0] = (max((max((arr_35 [9] [i_7] [i_0 + 1]), var_2)), var_4));
                                arr_40 [i_0] [9] [i_1] [12] [1] = (max(((min((~var_11), 63488))), var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, var_3));
    #pragma endscop
}
