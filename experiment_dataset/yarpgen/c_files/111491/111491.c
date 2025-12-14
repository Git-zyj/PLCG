/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((~((min(162, (var_12 <= -947549680)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = var_0;
                var_16 = (arr_1 [i_1]);

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_17 = (arr_2 [8]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 6;i_4 += 1)
                        {
                            {
                                arr_11 [i_3] [i_3] [i_2] [i_3] [i_4 + 1] = (~(arr_7 [i_2] [i_3 - 1] [i_4 + 2] [i_4] [1] [i_4 + 3]));
                                arr_12 [i_0] [i_1] [i_3] [i_0] [i_3] [i_4] = (!-var_9);
                                arr_13 [i_3] = (+(max((max((arr_7 [i_0] [i_1] [i_1] [i_2] [i_3] [5]), var_13)), (arr_1 [i_0]))));
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_0] |= (arr_1 [i_1]);
                            }
                        }
                    }
                    var_18 = ((((((arr_0 [6] [i_1]) ? (~var_11) : ((var_0 ? var_5 : var_0))))) ? (min(var_12, -488839429)) : (~-1655869127)));
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_23 [0] [i_0] [i_0] [i_0] [i_0] [6] [i_0] = ((var_1 ? ((var_8 ? ((max(2020641831, (arr_0 [i_6] [i_5])))) : var_7)) : (max(var_3, (min(488839417, var_3))))));
                                arr_24 [i_0] [3] [i_0] [8] [2] = ((((max(var_5, var_13))) ? ((var_4 ? var_6 : var_4)) : (arr_16 [i_7])));
                                arr_25 [2] [2] [i_5] [i_6] [i_7] |= ((((arr_18 [i_0] [i_1] [i_1] [i_1]) ? (arr_18 [i_0] [i_1] [i_5] [i_5]) : var_10)));
                                arr_26 [i_7] [0] [i_5] [i_1] [i_0] |= (-(((arr_18 [i_1] [i_5] [i_1] [i_0]) ? var_1 : (arr_18 [i_0] [i_0] [i_0] [i_0]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((-(arr_4 [i_0] [i_1] [i_8]))))));
                                arr_32 [i_0] [i_1] [i_5] = arr_27 [i_0] [i_1] [i_1] [0] [i_9] [5];
                                arr_33 [i_0] [i_1] [0] [i_1] [i_9] [i_9] = ((((min(((var_4 ? var_3 : (arr_1 [7]))), (min(var_3, 947549674))))) ? ((((max(var_0, (arr_27 [i_0] [i_1] [i_1] [i_0] [7] [0])))) ? ((~(arr_29 [i_1] [6] [7]))) : (~var_6))) : var_5));
                                arr_34 [i_5] [i_0] [i_8] [i_1] |= (!var_6);
                                var_20 *= (max(var_3, 33442));
                            }
                        }
                    }
                    var_21 = ((!((min((((arr_31 [i_1] [i_1] [3]) ? var_9 : var_9)), ((min(85, var_10))))))));
                }
                arr_35 [i_0] |= (arr_20 [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 20;i_12 += 1)
            {
                {
                    var_22 = (~var_6);
                    arr_43 [i_10] [10] [i_10] [6] = (((arr_39 [i_10]) ? (var_13 | var_13) : (max(((((arr_36 [i_10 + 2] [i_12]) ? var_11 : (arr_39 [i_10])))), -var_7))));
                }
            }
        }
    }
    var_23 ^= (+-25);
    #pragma endscop
}
