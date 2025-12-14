/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    var_21 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_22 = (((((min(var_10, (arr_1 [i_1])))))) ? var_11 : (+-65535));
                var_23 = ((((max(((var_14 ? 50682 : var_1)), (arr_0 [i_0 - 1])))) ? (max((max(var_19, var_13)), ((max(var_19, 14))))) : (((arr_1 [i_0 + 1]) ? (arr_0 [i_1]) : (arr_2 [i_0] [i_1] [i_0])))));
                var_24 = (((((min((arr_2 [i_0] [i_1] [i_0]), var_19)) * var_3)) * (((min(12823, 12850))))));
            }
        }
    }
    var_25 = -var_18;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_2] = (!var_9);
                var_26 = (arr_0 [i_2 - 1]);

                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_27 = (min(var_27, ((((!var_9) ? (!0) : (((!(arr_6 [i_2 - 1])))))))));
                                var_28 = ((var_1 ? ((max(var_16, 8055337455816398040))) : (max(((var_2 ? var_19 : var_3)), 118))));
                                var_29 = (min(var_29, ((max((arr_5 [i_2]), ((((arr_14 [i_2 - 1] [i_4 - 1]) ? (arr_14 [i_2 - 1] [i_4 + 1]) : var_4))))))));
                                arr_21 [i_2 - 1] [i_3] [i_4 + 1] [i_2] [i_6] = ((((~(max(var_2, var_16)))) << (((min(((~(-127 - 1))), (~var_15))) + 110))));
                            }
                        }
                    }
                    var_30 = (arr_2 [i_2] [i_2] [i_4]);
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_27 [i_2] [i_2] [i_2] [i_2 - 1] [16] &= (max((((!(arr_17 [4] [i_3 + 1] [4])))), (max((arr_17 [12] [i_3 - 1] [12]), (arr_17 [1] [i_3 - 1] [1])))));
                                arr_28 [i_2] [i_2] [i_4] = (((arr_18 [i_8] [i_8] [i_8] [i_8] [i_4 - 2] [i_3] [i_2 - 1]) * ((max((arr_18 [i_8] [i_8] [i_8] [i_8] [i_4 - 2] [i_3] [i_2]), (arr_18 [i_8] [i_8] [i_8] [i_4] [i_4 - 2] [i_3] [i_3]))))));
                                var_31 = var_9;
                            }
                        }
                    }
                    arr_29 [i_2] [i_3 - 1] [i_4] = (((((((max(var_4, (arr_9 [i_2] [19] [i_4])))) ? var_16 : var_0))) + ((var_3 ? ((var_5 ? (arr_5 [i_4]) : var_3)) : (((arr_4 [i_2]) ? var_7 : var_11))))));
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 19;i_11 += 1)
                        {
                            {
                                arr_37 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] = (max((min((max(8055337455816398040, var_0)), (arr_36 [i_2] [i_3 - 1] [i_2] [i_3] [i_3 - 1] [i_3 - 1]))), (((((max((arr_33 [i_2] [i_3 - 1] [i_2] [i_2]), 1350575852455282137))) || var_3)))));
                                arr_38 [i_10] [10] [10] [i_10] [i_10] [i_2] [i_10] = ((-(arr_20 [i_2] [i_2])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
