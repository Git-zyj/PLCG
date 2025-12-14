/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(16383, ((((max(4294967295, -90))) ? var_8 : ((1750478461164395645 ? var_11 : var_5))))));
    var_13 &= (max((((((var_0 ? var_0 : 89))) / (-84 - 1750478461164395645))), var_9));
    var_14 |= (((max(38836, ((var_4 ? 0 : var_8)))) / ((((var_4 && (16383 != var_1)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [6] = (var_3 && ((!(arr_1 [i_0]))));
        arr_3 [i_0] = (arr_0 [i_0]);

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_1] [i_0] [i_1] = var_5;

            for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
            {
                arr_9 [11] [11] [i_2] [i_0] = ((4294950912 + (arr_5 [i_1 + 2] [i_2])));

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_12 [i_2] [i_2] [i_2] |= var_9;
                    arr_13 [i_2] [i_0] [i_2] = 3;
                    arr_14 [i_2] [i_2] [6] [i_1] = (arr_4 [i_1 - 1] [i_1]);

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_2] [i_0] |= (arr_8 [i_1 - 3]);
                        arr_18 [i_0] [i_1] [i_2] [i_0] [i_4] = 1071644672;
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_22 [i_0] [i_3] [12] [i_2] [i_5] &= (((arr_11 [i_1 - 3] [i_2] [i_1 - 3] [10] [10] [i_2]) << (((arr_5 [i_5] [i_1 - 2]) - 1331725824))));
                        arr_23 [i_0] [i_1] [i_0] [1] = ((var_11 ? (arr_16 [i_5] [i_3] [14] [i_2] [14] [i_0] [i_0]) : (~14428)));
                        arr_24 [i_0] [i_0] [i_0] [i_2] [i_3] [i_0] [i_0] = (((arr_20 [i_0] [i_1 + 1]) ? (arr_20 [i_0] [i_1 - 1]) : (arr_20 [i_0] [i_1 - 1])));
                        arr_25 [i_1] [i_0] = ((~(arr_15 [i_0] [i_1 - 2] [i_1] [i_1 - 1] [i_1])));
                    }
                }

                for (int i_6 = 3; i_6 < 12;i_6 += 1)
                {
                    arr_30 [i_0] = ((var_1 != (arr_15 [3] [i_6] [i_6 - 1] [i_6] [i_6])));
                    arr_31 [i_0] [i_0] [i_1] [i_2] [i_0] = (arr_15 [i_2] [i_2] [1] [i_6] [i_0]);
                    arr_32 [i_0] [i_0] [i_0] [i_0] = (arr_29 [i_6 - 3] [i_6 - 3] [i_6] [i_6] [i_6] [1]);
                }
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
            {
                arr_36 [i_0] = (arr_28 [i_1 + 2] [i_1 + 2] [i_7] [i_1] [i_7] [i_7]);
                arr_37 [i_0] = (0 / (arr_8 [i_1 - 2]));
            }
            arr_38 [8] [i_1] = (((173 || 106) && (arr_20 [i_1] [i_1])));
            arr_39 [4] = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]);
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            arr_43 [i_0] [i_0] [i_0] = ((var_10 ? var_5 : (arr_19 [i_0] [i_0] [10] [i_0] [i_8])));
            arr_44 [i_0] [i_0] [i_0] = (((arr_40 [i_0]) ? (arr_40 [i_8]) : (arr_40 [i_0])));
            arr_45 [14] [i_0] [i_8] = (!468694530);
            arr_46 [i_0] [i_0] = var_9;
        }
        for (int i_9 = 2; i_9 < 13;i_9 += 1)
        {
            arr_49 [i_0] [i_9] = (arr_34 [i_0] [i_9]);

            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                arr_53 [i_0] = (arr_40 [i_0]);

                for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                {
                    arr_57 [i_9] [i_9] [i_10] [i_11] |= 2611375396;

                    for (int i_12 = 1; i_12 < 11;i_12 += 1)
                    {
                        arr_60 [i_10] [i_12 + 2] [i_0] = 38836;
                        arr_61 [i_0] [i_9] [i_10] [i_0] [i_0] = (arr_40 [i_0]);
                    }
                    for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
                    {
                        arr_64 [i_0] [i_9] [i_0] = (1683591887 || var_3);
                        arr_65 [i_0] [i_0] [i_9] [i_9] [i_0] [1] [i_13] = (var_1 ^ 16383);
                    }
                    for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
                    {
                        arr_69 [10] [14] [i_10] [i_10] [i_9] = (((4294950912 >> (var_7 - 58))));
                        arr_70 [i_11] [i_11] [i_0] = ((var_7 + (arr_66 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                }
                for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
                {
                    arr_73 [i_10] [i_10] [i_0] [i_9] [i_0] = (arr_42 [i_15] [i_9 - 2] [i_10]);
                    arr_74 [i_0] [i_10] [i_15] [i_0] = (!1683591899);
                }
                arr_75 [i_0] = -2611375396;
            }
            arr_76 [i_0] = ((!(arr_62 [i_0] [i_0] [i_0])));
        }
    }
    #pragma endscop
}
