/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_16 | 9223372036854775807);

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_21 = (max((min(32134, 32134)), (arr_0 [i_0 - 1])));
        var_22 = (arr_1 [i_0]);
        arr_4 [i_0] [11] = (!var_5);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0] [14] [i_2] [14] = ((((min((arr_9 [i_0] [i_1 + 2] [i_2]), 19643))) ? -22560 : ((-((var_3 ? var_0 : (arr_5 [i_1])))))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_23 = (arr_3 [i_0]);
                        arr_15 [i_0] [i_0] [i_0] = (max(1, 19928));
                        var_24 = (((var_17 < ((var_14 ? var_10 : (arr_6 [19] [3]))))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        arr_18 [i_2] [i_2] = (max(var_12, (arr_12 [i_0] [i_0] [i_0 + 1] [i_1 - 2] [i_2 - 1] [i_2 - 2])));
                        arr_19 [i_0 - 2] = (min((arr_3 [i_0 - 1]), var_1));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        var_25 = arr_1 [i_0];
                        var_26 = (arr_12 [i_0 + 2] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]);

                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            arr_24 [12] [i_1] [i_2 + 1] [i_1] [i_0 + 2] = (arr_5 [i_6]);
                            arr_25 [i_0] [i_1] [13] [13] [i_2 + 1] [3] [i_6] = var_13;
                            var_27 = (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_26 [i_0] [i_0] [i_2] [i_5] [i_2] [i_6 + 1] = (arr_20 [i_0] [i_0 + 2] [i_1 + 3] [i_1] [i_2 - 1] [i_6 - 1]);
                        }
                    }
                    var_28 = (min((max(33401, var_13)), var_19));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_34 [i_0] [i_0 + 1] [i_0] [1] [i_0 - 1] [i_8] = ((var_6 || ((min(((~(arr_5 [i_7]))), ((min(45623, 45607))))))));
                                var_29 = -1701405621;
                                var_30 = ((-(min((arr_22 [i_1 + 1]), (arr_22 [i_1 - 2])))));
                            }
                        }
                    }
                    arr_35 [i_0 - 1] [i_0 - 1] [i_0] = (min((arr_5 [i_0]), (!249206038187700610)));
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 22;i_9 += 1) /* same iter space */
    {
        var_31 = (((-7013 ? 2147483647 : 46958)));
        var_32 = ((+(min((arr_33 [i_9] [i_9] [i_9]), (arr_28 [1] [i_9 - 2] [i_9 + 2])))));
        arr_38 [i_9] [i_9] = (!(((-(arr_3 [i_9])))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {
                    arr_43 [i_9 + 1] [i_10] [i_11] [i_11] = (min(33401, (~-1)));

                    for (int i_12 = 1; i_12 < 23;i_12 += 1)
                    {
                        var_33 = (arr_1 [i_11]);

                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            var_34 = (((max(var_13, (arr_17 [i_11] [i_11] [0] [0] [i_9 - 1] [0]))) % var_1));
                            var_35 = (min(((min((max((arr_33 [i_10] [i_10] [19]), var_13)), var_1))), (arr_16 [i_9 - 1] [i_9 - 1])));
                            var_36 = var_0;
                            arr_48 [2] [2] [i_10] [i_11] [i_10] [i_12] [i_12] = ((-var_16 || (arr_11 [i_9] [i_9] [i_11] [i_9 - 1])));
                        }
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            arr_53 [i_10] [12] = min(((~(arr_41 [i_9] [i_12 - 1] [i_9 + 2] [i_12]))), (arr_51 [i_10]));
                            arr_54 [i_9] [i_9 + 2] [i_9 - 2] [i_9 - 1] [i_10] [i_9 - 1] = var_11;
                            arr_55 [i_9] [23] [i_11] [i_12] [i_14] [i_12] [i_10] = var_13;
                            var_37 = (arr_33 [i_10] [i_10] [20]);
                        }
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            var_38 = (min((((~(arr_0 [i_9 - 2])))), (arr_50 [i_9 - 2] [i_10] [i_10] [i_12 - 1] [i_10])));
                            arr_58 [i_9] [i_10] [i_10] [i_10] [i_10] [i_15] = (arr_50 [i_9 + 1] [i_10] [i_9 + 1] [i_9 + 1] [i_10]);
                        }
                    }
                    for (int i_16 = 1; i_16 < 22;i_16 += 1)
                    {
                        var_39 = ((!(arr_16 [i_9 - 1] [i_10])));
                        var_40 = 3024043576;
                    }
                    for (int i_17 = 2; i_17 < 23;i_17 += 1)
                    {
                        var_41 = (((~(arr_45 [i_9 + 1] [i_9 - 2] [i_17 + 1] [i_10]))));

                        for (int i_18 = 0; i_18 < 24;i_18 += 1)
                        {
                            arr_69 [i_9] [i_10] [i_9] [i_9] [i_10] = (min(-131072, 29994));
                            var_42 = max((arr_29 [i_17 - 1] [i_9 + 1]), 7022);
                            arr_70 [i_9 + 2] [i_10] [i_10] [i_11] [i_10] [i_18] [1] = (arr_30 [i_9] [i_9 + 2] [i_10] [i_17 - 2]);
                        }
                    }
                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        arr_73 [i_9] [16] [i_10] [15] = (((arr_31 [i_9] [i_9] [i_10] [i_10] [i_10] [i_11] [i_19]) ? 32134 : var_11));
                        arr_74 [i_9] [i_9] [i_9] [i_10] = var_15;
                        arr_75 [i_9] [22] [i_10] [2] = (arr_9 [19] [i_9 + 2] [i_9 + 2]);
                    }
                }
            }
        }
    }
    var_43 = ((((min(1, (var_6 ^ var_3)))) ? var_4 : (max(var_3, (~var_15)))));
    #pragma endscop
}
