/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= -var_17;
    var_21 = (max(var_21, var_12));
    var_22 -= -1167138153;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_23 = min(1, (arr_7 [9] [i_1] [9] [i_1]));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((((!(arr_8 [i_1] [i_3]))) ? (arr_7 [i_0 - 2] [i_1] [i_2] [i_3]) : var_10));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] = ((-(min(35771, (min(var_7, 87))))));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (((arr_5 [i_0] [i_0]) ? var_3 : ((min(35766, (arr_3 [i_0] [i_1] [i_2]))))));
                            var_24 = (arr_11 [i_0] [i_4] [i_2] [i_3] [i_0] [i_0 + 3]);
                            var_25 = (max(var_25, (((~(((arr_11 [i_0] [i_0 + 1] [i_0] [i_0 - 2] [8] [i_0 - 2]) & 78)))))));
                            var_26 += (((-29038 + 2147483647) >> (var_8 + 5036)));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            arr_20 [i_0 + 1] [i_1] [i_2] [i_1] [i_5] [i_0 + 1] = (((arr_18 [i_2] [i_3]) ? (arr_1 [0] [i_0 + 2]) : 69));
                            arr_21 [i_0 + 2] [i_3] [i_2] [i_0 + 2] &= (arr_7 [i_5 - 1] [i_0 - 1] [i_2] [i_1]);
                            arr_22 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0] = (((arr_14 [i_0 + 1] [i_0 + 3] [i_0 - 2] [i_0 + 1] [i_0 + 2] [i_0 + 1]) ? (arr_14 [i_0] [i_0] [i_0] [7] [i_0 + 1] [i_0 + 3]) : var_8));
                            arr_23 [i_0] [1] [i_5] = (arr_13 [1] [i_1] [i_2] [i_3] [i_3] [i_2] [10]);
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_27 [i_0] [i_0] [9] = var_16;
                            var_27 = (min(0, 1));
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_28 += ((((min(var_9, ((-856081742 ? (arr_15 [12] [6] [i_1]) : (arr_1 [i_7] [i_0 + 2])))))) | -0));
                            var_29 = ((29776 ? ((min((arr_1 [i_0 - 2] [i_1]), (arr_29 [i_7] [i_3] [1] [i_1] [i_0])))) : ((var_12 ? var_3 : var_8))));
                        }
                    }
                    arr_31 [i_0] [i_1] = 87;
                }
                var_30 = ((!(((arr_6 [i_0]) == (arr_6 [i_1])))));

                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_31 = (((arr_32 [i_0 + 1] [i_1] [i_8]) <= (~var_2)));
                    var_32 = (min(var_32, ((min(var_12, (((-95 ? (arr_9 [i_8] [i_0] [i_1] [i_0]) : -60))))))));
                }
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    arr_36 [i_0] [i_0] = -125;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_42 [i_0 + 2] [3] = (((arr_33 [i_0] [i_10] [i_11]) ? 35766 : 1));
                                arr_43 [i_0] [i_1] [i_9] [i_9] [6] [i_1] [i_11] = (arr_11 [i_0 + 1] [i_0 + 1] [9] [i_10] [i_0 + 1] [i_1]);
                            }
                        }
                    }
                    var_33 = (min(var_33, (((-((-(-32767 - 1))))))));
                    var_34 = (min((arr_41 [i_0] [i_0 + 1] [14] [14] [i_9]), -var_11));
                }
            }
        }
    }
    var_35 = var_3;
    #pragma endscop
}
