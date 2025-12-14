/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_15 = (arr_2 [i_0]);

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                arr_16 [i_0] [i_0] [i_0] = arr_9 [1];
                                arr_17 [i_0] = ((+(((arr_4 [i_1 - 3]) - (arr_4 [i_1 - 2])))));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                arr_21 [i_5] = ((-(((-var_9 >= (arr_13 [7]))))));
                                var_16 = var_4;
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 12;i_6 += 1)
                            {
                                var_17 = ((((var_2 | (arr_20 [i_0] [i_1 - 2] [i_2] [i_2 - 1] [i_3 + 1] [i_6] [i_3 + 1])))) && (arr_0 [i_0] [i_6]));
                                var_18 += arr_24 [i_2];
                                var_19 = (arr_7 [i_1 - 2] [i_1 - 2]);
                                var_20 = (arr_10 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_2 - 2]);
                            }
                        }
                    }
                }
                var_21 = (arr_5 [i_0] [4] [i_1]);

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_32 [i_9] [i_1] [i_8] = ((~((~((1871393434 % (arr_29 [i_7] [i_7] [i_9])))))));
                                var_22 += (arr_1 [i_7]);
                                var_23 = (min(1, (arr_6 [i_0] [i_0] [0])));
                                arr_33 [i_9] [11] [11] [11] [i_8] [i_9] = ((((((var_7 ? var_8 : var_9))) && ((min((arr_15 [i_0] [1] [4] [i_0] [i_0] [i_0]), (arr_14 [i_0] [1])))))) ? (max(var_6, var_1)) : (arr_0 [i_0] [i_0]));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_24 = var_9;
                                arr_39 [i_10] = ((((+(((arr_15 [i_0] [i_0] [i_1 - 1] [i_7] [i_10 + 1] [8]) % 52404)))) & (((((var_8 ? var_11 : (arr_10 [i_0] [i_1] [i_1] [i_1]))) > var_0)))));
                            }
                        }
                    }
                }
                for (int i_12 = 1; i_12 < 11;i_12 += 1) /* same iter space */
                {
                    arr_43 [2] [i_1 + 1] [i_12] [i_12 + 1] = var_7;
                    arr_44 [i_12] [i_1] [i_12] = (-1861152562 / 13119);
                }
                for (int i_13 = 1; i_13 < 11;i_13 += 1) /* same iter space */
                {
                    arr_48 [10] [2] = ((-(((arr_13 [i_0]) ? (arr_13 [i_0]) : (arr_13 [i_0])))));
                    var_25 = var_0;
                    arr_49 [i_0] [i_0] [i_1] [2] = var_3;
                    arr_50 [i_0] [10] [i_13] [i_1] = arr_36 [1] [i_13] [i_1] [i_0];
                }
                var_26 = ((var_10 ? var_10 : var_12));
            }
        }
    }
    var_27 = (max((max(var_11, var_0)), 4294967295));

    for (int i_14 = 3; i_14 < 13;i_14 += 1)
    {
        arr_54 [i_14] [i_14] = (var_9 <= ((~(arr_53 [i_14]))));
        var_28 += ((+((max((arr_51 [i_14 - 3]), (arr_53 [i_14 - 3]))))));
        var_29 = (max((min((arr_52 [i_14]), var_2)), (arr_51 [i_14 - 1])));
        arr_55 [i_14] [i_14] = ((13127 ? 52404 : 52404));
    }
    #pragma endscop
}
