/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    var_21 = min((var_1 & var_14), var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] = var_12;
                            var_22 = -var_15;
                            var_23 |= ((max((!125), (!var_8))));
                            arr_12 [i_3 + 2] [i_2] [3] = (arr_10 [i_0] [i_0]);
                            arr_13 [i_0] [i_0] [i_0] [i_0] = -84;
                        }
                    }
                }
                arr_14 [i_0] = 101;

                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    arr_18 [i_4] [i_4] = (~-112);

                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        arr_22 [i_4] [i_1] [i_1] [i_1] [i_1] [i_1] = max((max(var_8, var_11)), (((max((arr_10 [i_0] [i_0]), var_17)))));
                        var_24 += (((arr_8 [i_0] [i_1] [i_0]) >= var_16));
                        var_25 = -var_15;
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_27 [i_1] [i_4] [i_1] [i_1] [i_1] = ((-(arr_2 [i_4 + 2] [i_4 - 1] [i_0])));
                        var_26 ^= (arr_25 [i_0] [i_1] [0] [i_6]);
                        arr_28 [i_4] [i_1] [i_1] [i_1] [i_4] [i_6] = ((!(-127 - 1)));
                    }
                    arr_29 [0] [i_4] [0] = (arr_24 [i_4]);
                }
                for (int i_7 = 3; i_7 < 12;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_27 = (max(var_27, ((((-((-84 ? var_0 : 47))))))));
                                var_28 = -var_3;
                            }
                        }
                    }
                    var_29 = var_10;
                    arr_39 [i_7] = (-127 - 1);

                    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                    {

                        for (int i_11 = 4; i_11 < 10;i_11 += 1)
                        {
                            arr_46 [i_11] [3] [i_11] [i_10] [i_1] [8] = -17943;
                            arr_47 [i_11] [i_1] [i_7] [i_10] [i_11] = 49;
                            var_30 = var_12;
                        }
                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 11;i_12 += 1)
                        {
                            arr_50 [i_0] [i_1] [i_7] [i_7] [i_12 + 1] = (-0 ? (arr_1 [i_7 + 1]) : (49 + -75));
                            arr_51 [i_10] [i_12] = (arr_49 [i_7 - 3] [i_12] [i_12 + 1] [i_12 - 1] [i_12 + 2]);
                        }
                        arr_52 [i_10] = ((!(arr_25 [i_7 + 1] [i_7 - 3] [i_7 - 1] [i_1])));
                    }
                    for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                    {
                        arr_55 [i_0] [i_0] [i_13] [i_13] [i_13] [i_0] = var_14;
                        arr_56 [i_0] [i_0] [i_1] [i_13] [i_0] [i_13] = (min(var_0, ((((max((arr_4 [i_7 - 1]), var_8))) ? (~-85) : ((101 / (arr_0 [i_0])))))));
                        arr_57 [i_0] [11] [i_13] [i_13] = (-(arr_37 [i_0] [6] [6] [i_0] [i_13]));
                        arr_58 [i_13] [i_1] [i_1] [2] [i_1] [i_1] = (-1936326238 / 1464712025);
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        {
                            arr_66 [i_15] [i_1] [i_14] [i_1] = max(((-(arr_25 [i_1] [i_1] [i_1] [i_15]))), var_2);
                            var_31 = (((arr_48 [i_0] [i_0] [i_1] [10] [i_14] [i_15]) != -1));
                            var_32 = ((!(!377020350)));
                            var_33 = max(var_4, var_16);
                            var_34 = arr_21 [i_0] [i_1] [i_14] [i_0] [i_1];
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
