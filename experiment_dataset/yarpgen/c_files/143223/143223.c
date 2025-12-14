/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = var_8;

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_12 = ((var_9 ? ((var_6 - (arr_4 [i_0] [i_1]))) : (~var_1)));
            arr_5 [i_0] [11] = var_3;
            arr_6 [i_0] [i_0] [i_1 + 4] = (~var_3);
        }
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        var_13 = var_6;
        var_14 = (arr_1 [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_12 [i_3] = 27001;

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_15 [23] [i_3] [23] = var_3;
            arr_16 [i_4] [i_4] = ((((12521882021635013084 ? 16646144 : 75)) > (((-76 ? 127 : -89)))));

            for (int i_5 = 1; i_5 < 24;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 24;i_7 += 1)
                    {
                        {
                            arr_27 [i_7 - 1] [i_6] [i_5 - 1] [i_5] [24] [i_3] = (!var_5);
                            var_15 = ((var_3 ? (arr_11 [i_7 + 1]) : (arr_11 [i_7 + 1])));
                        }
                    }
                }

                for (int i_8 = 1; i_8 < 24;i_8 += 1)
                {
                    var_16 = (46 || 3883279237);

                    for (int i_9 = 1; i_9 < 24;i_9 += 1)
                    {
                        arr_35 [i_3] [4] [1] [i_8] [i_8 - 1] [i_8] [i_9 + 1] = (~65535);
                        var_17 = -6166371740015566115;
                    }
                    for (int i_10 = 1; i_10 < 24;i_10 += 1)
                    {
                        var_18 -= -9080789234604557727;
                        var_19 = ((31 ? 81 : -3850285304956855950));
                    }
                    var_20 = (((arr_28 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 1] [1] [i_8 + 1]) ? (var_4 <= var_9) : (arr_32 [i_5 - 1] [i_8] [i_8 - 1] [i_8 - 1])));
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    var_21 = (var_6 ? ((var_5 ? var_8 : var_7)) : (((var_4 ? var_1 : var_2))));
                    var_22 = var_0;
                    var_23 = (min(var_23, var_8));

                    for (int i_12 = 2; i_12 < 21;i_12 += 1)
                    {
                        var_24 = ((var_1 > (arr_33 [i_4] [i_5 - 1] [i_5])));
                        arr_43 [i_3] [i_5] = ((var_9 ? (arr_37 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_12 + 4]) : (((arr_39 [i_3]) ^ var_5))));
                        arr_44 [i_3] [i_4] [i_4] [i_4] [i_12] = (arr_17 [i_12 + 4] [i_5 - 1] [i_3]);
                    }
                }
                arr_45 [i_3] [i_4] [i_5] [i_5] = 5449;
            }
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                arr_48 [i_3] [15] [i_13] = (arr_21 [i_3] [7] [i_3] [i_3]);

                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {

                    for (int i_15 = 1; i_15 < 21;i_15 += 1)
                    {
                        var_25 = -var_3;
                        var_26 = (~var_6);
                    }
                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        var_27 = ((var_5 ? var_1 : var_3));
                        arr_57 [i_13] [i_13] = (((arr_38 [i_3]) + var_5));
                        var_28 = var_5;
                        var_29 = (((((var_9 ? var_1 : var_2))) ? var_1 : (((-9223372036854775807 - 1) & 2047))));
                    }
                    for (int i_17 = 2; i_17 < 24;i_17 += 1)
                    {
                        var_30 = var_8;
                        var_31 = (min(var_31, ((((arr_42 [i_17 + 1] [i_17] [i_17] [i_17] [i_17]) ? (arr_55 [i_17 - 2] [i_17] [i_17] [i_17] [i_17 - 2] [i_17]) : (arr_55 [i_17 - 2] [i_17 - 2] [i_17 - 1] [i_17] [17] [i_17]))))));
                    }
                    var_32 = (-9223372036854775805 || 127);
                    var_33 = (~var_2);
                    var_34 = ((!(arr_59 [i_13] [13] [i_4] [i_13] [i_13] [i_4])));
                }
                for (int i_18 = 1; i_18 < 22;i_18 += 1)
                {
                    var_35 = ((~(var_6 + var_6)));

                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        var_36 = (~3850285304956855949);
                        var_37 = -var_9;
                        arr_66 [i_3] [i_13] [i_18] [i_19] [i_19] = ((var_2 * (arr_40 [i_18 + 2] [i_18 + 2] [i_18 + 2] [i_18 - 1])));
                    }
                    for (int i_20 = 2; i_20 < 24;i_20 += 1)
                    {
                        var_38 = (max(var_38, (((arr_51 [i_18 + 1] [i_20] [i_18 - 1] [i_18 + 1] [i_18 - 1]) >> (var_4 - 7310221878549877406)))));
                        arr_69 [i_13] [i_18] [i_13] [i_4] [i_3] [i_13] = (((var_4 ? var_6 : 8382108640379738372)));
                    }
                    for (int i_21 = 1; i_21 < 24;i_21 += 1)
                    {
                        arr_72 [i_3] [i_3] [i_3] [i_13] [i_21] [i_21] [i_13] = -var_3;
                        arr_73 [i_3] [i_13] [17] [i_3] [i_3] = var_5;
                    }
                    var_39 = ((var_3 ? (arr_10 [i_18 + 1]) : 1715591093592207221));
                }
                var_40 = ((~(arr_70 [i_13] [i_4] [i_3])));
                var_41 = var_1;
            }
            arr_74 [i_3] = (-8382108640379738373 ^ (arr_49 [i_4] [i_4] [3] [i_4]));
        }
    }
    var_42 = (~-75);
    #pragma endscop
}
