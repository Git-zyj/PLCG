/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((((max(var_14, var_15))) && var_16))), (((var_4 / var_9) ? (((46242 ? 48919 : 16617))) : (min(var_3, var_16))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_7 [i_1] [i_1] [i_1] = var_6;

            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    arr_12 [i_1] [10] [i_1] [4] [i_1] = ((!(((var_10 ? (arr_6 [i_0]) : var_8)))));
                    arr_13 [i_0] [i_0] [i_1] = (((((var_16 ? var_2 : (((var_7 ? var_9 : var_11)))))) ? ((var_3 + (min((arr_6 [6]), var_3)))) : (((var_14 ? ((var_0 ? var_4 : var_12)) : (~var_7))))));
                    arr_14 [i_1] = var_3;
                    var_18 = var_0;

                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 14;i_4 += 1)
                    {
                        arr_18 [13] [i_1 + 2] [i_1 + 1] [i_1] [i_1 + 1] = ((var_10 | (arr_17 [i_2 - 2] [i_2] [14] [i_2 - 2] [i_1] [i_1 + 1] [i_1])));
                        var_19 *= ((-((var_4 ? var_16 : var_4))));
                        var_20 = var_1;
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_23 [i_1] [i_1] [i_2] [3] [9] = (((var_15 ? (arr_9 [i_1 - 1] [i_3 + 2] [10]) : var_5)) | var_1);
                        var_21 = (((0 ? 18615 : 48891)));
                    }
                }
                arr_24 [i_1] [i_1] [i_1] = (((arr_21 [i_0] [12] [i_2 - 1] [i_1 - 1] [i_1]) ? (((arr_17 [i_2 + 1] [i_2] [i_2] [i_2] [i_2 - 2] [i_1 - 1] [i_0]) ? var_16 : var_0)) : var_5));
            }
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                arr_29 [i_0] [i_1 + 2] [i_6] [i_1] = var_6;
                var_22 = (min(var_22, ((((((arr_28 [i_0] [i_1 + 2] [i_6]) / var_2)) >= (arr_28 [10] [i_1] [i_6 - 1]))))));
                var_23 = ((((var_9 ? (arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : var_11))) ? var_9 : 16620);
                arr_30 [i_0] [i_1] [i_0] = var_16;
                var_24 ^= ((-var_1 ? var_16 : var_10));
            }
            arr_31 [i_1] = (47946 > 16632);
        }
        for (int i_7 = 3; i_7 < 14;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                var_25 = -var_9;

                /* vectorizable */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    arr_38 [i_9] [i_7] [i_7] [i_0] = (arr_27 [i_0] [i_7 - 1] [i_8] [i_9]);

                    for (int i_10 = 3; i_10 < 13;i_10 += 1)
                    {
                        arr_41 [i_0] [i_7 - 3] [i_7] [1] [i_9] [i_7] [7] = (arr_37 [i_10 + 2] [10] [i_10 + 2] [i_10] [i_10 - 2] [i_10 - 3]);
                        arr_42 [i_0] [i_7] [i_8] = ((var_0 ? (var_6 && var_1) : ((var_7 >> (var_0 - 48713)))));
                    }
                }
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                var_26 = ((((min(6106270880652340454, var_12))) && var_14));
                arr_45 [6] [6] [i_11] [i_7] = (arr_22 [i_0] [i_0] [i_0] [i_0]);
                arr_46 [i_7] [i_7] = ((((var_7 ? var_13 : var_9))) ? ((var_6 ? var_13 : (arr_37 [i_7 - 2] [12] [1] [i_11] [i_11] [i_11]))) : (var_1 + var_15));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    arr_53 [i_7] [i_7 - 2] [i_12] [i_13] [i_13] [i_13] = var_5;

                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        arr_56 [i_7] [i_7 - 3] [12] [i_7 - 3] [i_14] [i_13] [i_13] = arr_50 [1];
                        arr_57 [i_7] [i_7] [i_7] [i_7 - 2] [i_7 + 1] = var_12;
                    }
                }
                for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
                {

                    for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
                    {
                        arr_63 [i_7] [i_7 - 2] [i_0] [i_12] [i_7 - 2] [i_0] [i_7] = (var_2 / var_14);
                        arr_64 [i_0] [i_7] [i_0] = (var_3 / var_11);
                        arr_65 [i_0] [i_7] [5] = var_1;
                        arr_66 [i_0] [i_7 - 1] [i_12] [i_15] [i_16] [i_7] = ((var_6 ? var_9 : var_6));
                    }
                    for (int i_17 = 0; i_17 < 15;i_17 += 1) /* same iter space */
                    {
                        arr_69 [i_12] [i_7] [i_15] [i_12] [i_7] [i_0] = var_13;
                        arr_70 [i_7] [i_15] [i_12] [i_7] = (arr_62 [i_0] [i_7 - 3] [i_12] [i_7 + 1] [i_17]);
                    }
                    var_27 ^= (arr_54 [i_0] [i_7 - 2] [i_7 + 1] [i_15] [9] [i_7]);
                    arr_71 [i_0] [i_7] [i_0] [i_0] = (((arr_2 [i_0]) < var_14));
                }
                for (int i_18 = 0; i_18 < 15;i_18 += 1) /* same iter space */
                {
                    arr_74 [5] [i_7] [i_12] [i_7] [i_12] [i_18] = (var_15 ^ var_11);
                    var_28 = (~var_13);
                }
                for (int i_19 = 0; i_19 < 15;i_19 += 1) /* same iter space */
                {
                    arr_77 [i_7] [i_12] [i_7] [i_7] = (((arr_36 [i_0] [i_7 - 2] [i_0] [i_7 - 2]) | var_10));

                    for (int i_20 = 2; i_20 < 11;i_20 += 1)
                    {
                        var_29 = var_5;
                        arr_81 [i_0] [i_7 - 2] [i_12] [i_12] [i_7] [i_20] = ((var_12 || (arr_3 [i_20 - 2])));
                        arr_82 [i_7] [1] [i_7] [i_7] [i_19] [i_20] = (arr_25 [i_7] [i_7] [i_7 - 3] [12]);
                        var_30 = -var_16;
                    }
                    arr_83 [i_0] [i_7] = ((var_15 >> ((((var_14 ? var_15 : var_0)) - 2603074647))));
                }
                arr_84 [i_0] [i_7] [i_12] [i_7 + 1] = ((var_11 ? var_13 : (arr_0 [i_7 - 3] [i_7 + 1])));
            }
            arr_85 [i_7] [i_7] = var_5;
        }
        arr_86 [i_0] = var_12;
        arr_87 [i_0] = ((min(var_13, var_3)));
    }
    #pragma endscop
}
