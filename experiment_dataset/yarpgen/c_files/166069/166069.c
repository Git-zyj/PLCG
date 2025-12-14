/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (var_5 % 161)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = ((arr_2 [i_0]) ? var_0 : 0);
            var_13 = var_4;
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_0] = (arr_3 [i_0]);

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_14 = (max((max(((max(60351, var_8))), 5184)), var_0));
                arr_14 [i_3] [i_0] [i_2 - 1] [i_3] = ((-472657471 <= (((max((arr_4 [i_0] [i_0] [i_3]), -12832))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_22 [i_0] [i_2 - 1] [i_2 - 1] [i_3] [i_3] [i_5 + 1] = (-12832 & -1325886269488935429);
                            var_15 = 1325886269488935426;
                            var_16 = (min(var_16, (((((((arr_18 [i_0] [1] [i_2 - 1] [i_2 - 1] [i_5 - 2]) && (arr_10 [i_5 + 2])))) * var_1)))));
                            var_17 = arr_17 [i_2 - 1] [i_2] [i_4] [i_4];
                        }
                    }
                }
            }
            for (int i_6 = 2; i_6 < 8;i_6 += 1)
            {
                var_18 = (!((!(arr_0 [i_0] [i_2 - 1]))));
                arr_25 [i_0] [i_0] [i_0] [i_0] = (min(((~((30 * (arr_4 [i_0] [i_0] [i_0]))))), (min((arr_13 [i_6 + 1] [i_2 - 1] [i_6 - 2]), (arr_24 [i_6 + 2] [i_2 - 1])))));
                arr_26 [i_0] [i_0] [i_0] = (max(var_11, var_4));
            }
            /* vectorizable */
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                var_19 ^= ((var_5 + (arr_15 [i_0] [i_0] [i_0] [i_0])));
                var_20 = (arr_16 [i_0] [i_7]);
            }

            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {

                /* vectorizable */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    arr_36 [i_9] [i_2 - 1] [i_8] [8] [i_9] = (((arr_8 [i_2 - 1] [i_2 - 1] [i_8 - 1]) + (arr_8 [i_2 - 1] [i_2 - 1] [i_8 - 1])));
                    var_21 = (min(var_21, (arr_27 [i_0] [i_2] [i_8] [i_9])));

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_22 = 1449451743041091325;
                        arr_41 [i_9] [i_2] = var_5;
                        var_23 = -1;
                        var_24 += ((73 >> (50 - 19)));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_25 = (((312205439 ? 60351 : var_1)));
                        arr_44 [i_0] [i_0] [i_9] [i_0] = 70;
                    }
                    var_26 = (((~var_6) + -7023708408658887163));
                }
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    var_27 = (((((1348440462 ? var_4 : -115))) ? ((max(158, 0))) : ((var_7 ? 64 : var_6))));
                    var_28 &= (max(((max(var_0, var_9))), (max(-20, (((arr_0 [i_0] [i_0]) ? 1 : var_7))))));
                    var_29 = ((!(arr_39 [i_0] [i_0] [i_8 - 1] [2] [i_8] [i_2])));
                }

                /* vectorizable */
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    arr_53 [i_0] [i_2] [8] = var_5;
                    var_30 = (min(var_30, -1325886269488935418));
                    arr_54 [i_0] [i_2] [i_0] [i_13] [i_13] [i_2] = (((arr_47 [i_0] [i_8 - 1] [i_8] [i_2 - 1]) - var_6));
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        {
                            var_31 = var_4;
                            arr_59 [0] [i_2] [i_2] [8] [i_2] [i_2 - 1] [i_2 - 1] = (arr_57 [i_0] [i_2 - 1] [5] [i_14]);
                        }
                    }
                }

                /* vectorizable */
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    var_32 = -7;
                    arr_63 [3] [i_2] [i_16] = (arr_0 [i_0] [i_2]);
                    arr_64 [i_16] = var_1;
                    arr_65 [i_16] [i_2] [i_2] [i_16] = ((var_0 ? 60336 : (arr_55 [i_0] [5] [i_8] [i_8])));
                }
            }
            var_33 = ((var_4 ? ((max(1996, (arr_56 [i_0] [i_2 - 1] [0] [i_2])))) : var_11));
        }
        arr_66 [i_0] = (!var_5);
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {
                {
                    arr_71 [i_0] = -1;
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 11;i_20 += 1)
                        {
                            {
                                var_34 = (min(var_34, (arr_55 [i_0] [i_17] [i_18] [i_19])));
                                var_35 = ((~((-((max(5184, var_9)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_21 = 0; i_21 < 11;i_21 += 1) /* same iter space */
    {
        arr_80 [1] [i_21] = (max(-104, (((arr_67 [i_21] [2]) - -1325886269488935418))));
        var_36 = ((~((((((arr_70 [i_21] [i_21] [i_21]) / (arr_55 [i_21] [i_21] [i_21] [i_21])))) ? (-28241 * 1) : -12832))));
        var_37 = (max((arr_39 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21]), -1325886269488935418));
        arr_81 [i_21] [3] = var_2;
        arr_82 [i_21] = 4096;
    }
    var_38 = (((((var_6 ? -94 : 141))) > 2549157771));
    #pragma endscop
}
