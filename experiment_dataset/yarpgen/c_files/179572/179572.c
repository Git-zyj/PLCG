/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = (((!var_10) * var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (max(var_16, var_3));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 = 0;

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                var_18 = 210;
                                arr_16 [i_2] [i_2] [i_2] [i_0] [i_4] [i_2] [i_4] = (((arr_8 [i_2 - 1] [i_2 - 2]) > (((!(max(var_7, var_7)))))));
                                var_19 *= (!((max((var_9 - var_5), ((min(var_12, 0)))))));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_20 &= (var_7 - var_12);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((((!242) ? var_2 : ((1 ? 1271918458018728344 : var_13)))))));
                                arr_24 [i_0] [i_1] [1] [i_0] [i_0] = (var_13 | 2320263225376449184);
                            }
                        }
                    }
                    var_22 &= ((!((!(arr_7 [0] [i_1] [i_1] [10])))));
                    arr_25 [i_0] [i_1] [i_1] = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                }
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    var_23 = ((((!var_8) ? (((arr_21 [i_0] [i_0] [i_0] [i_0]) - var_10)) : 1)));
                    var_24 = ((((((arr_15 [i_0] [i_8 + 1] [i_8 + 1] [i_8] [i_8]) * (arr_26 [i_0] [i_0] [i_0] [i_0])))) ? 4 : 4611686018427387904));
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    var_25 += (arr_28 [i_0] [i_1] [i_9]);

                    for (int i_10 = 1; i_10 < 20;i_10 += 1)
                    {
                        var_26 = (max(var_26, (((!(((((242 ? -1349224498 : (arr_32 [0] [0] [8] [i_10 + 1] [i_9])))) < ((var_11 ? 0 : -1349224479)))))))));
                        var_27 = (min(var_27, ((max((((167 < ((var_11 ? (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_13))))), (max(((min(1, (arr_29 [i_0])))), (((arr_23 [16] [i_1] [i_9] [i_10]) | var_6)))))))));
                        arr_35 [i_0] [i_0] [i_0] [i_0] = (arr_13 [19] [i_10] [i_10] [i_10] [i_10]);
                    }
                    for (int i_11 = 2; i_11 < 20;i_11 += 1)
                    {
                        var_28 += (min((max((4196 * 65524), 577428987)), ((((11191 ^ (arr_2 [2]))) << 1))));
                        arr_39 [i_0] [i_0] [i_0] = (~0);
                        arr_40 [i_0] = var_7;

                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            arr_45 [i_1] [i_12] [i_9] [i_11] [i_0] [i_12] = ((((min(var_5, (arr_2 [i_0])))) + (!1)));
                            var_29 = (min(var_29, var_6));
                            var_30 -= (max(((((arr_37 [i_9] [i_11 + 1]) && var_6))), 4294967276));
                        }
                        var_31 = (((!1) * ((((min((arr_21 [i_0] [i_1] [i_9] [i_11]), 6))) ? (max(var_9, (arr_38 [i_0] [i_0] [i_0] [i_0]))) : (arr_9 [i_9] [i_11 + 2] [i_11 + 1] [i_11] [i_11 + 2])))));
                    }
                    var_32 -= (max((arr_3 [i_0] [i_1] [i_9]), (((14646164339169789385 && (arr_13 [i_0] [i_1] [i_9] [i_9] [i_1]))))));
                    arr_46 [7] [i_0] = (min((((!(((arr_31 [i_0] [i_1] [i_9] [i_9]) && 1))))), (((((!(arr_14 [i_0] [1] [i_0] [i_1] [i_1] [i_9] [i_9])))) ^ var_8))));
                }
                for (int i_13 = 1; i_13 < 19;i_13 += 1)
                {
                    arr_50 [i_0] [i_1] [i_0] = var_3;
                    var_33 = (max(((max((arr_14 [i_0] [i_1] [i_0] [i_0] [i_1] [i_13] [i_0]), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_13 + 1] [i_13 + 1])))), (((arr_14 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1] [i_0]) << (arr_14 [i_0] [i_1] [i_0] [i_1] [i_1] [i_13] [4])))));

                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_34 = (max(var_34, (arr_17 [i_14] [i_14] [i_14])));
                        var_35 -= 17574217129024143604;
                        arr_55 [i_0] [i_0] [i_0] [5] = 13;
                        arr_56 [i_0] [i_0] [i_0] [i_0] = ((!(((6 + (!-108))))));
                    }
                }
                arr_57 [i_0] = ((((((arr_53 [i_0] [1] [i_1]) || (arr_53 [i_0] [i_1] [i_0])))) & (arr_0 [i_0] [i_0])));
                var_36 = ((!(((arr_12 [i_1] [i_0] [i_0] [i_0]) || var_11))));
            }
        }
    }
    var_37 = var_6;
    #pragma endscop
}
