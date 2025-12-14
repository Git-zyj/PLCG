/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_12));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (!var_1);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (((var_9 ? (arr_6 [i_0] [i_1] [i_2]) : ((var_13 ? var_3 : var_0)))));
                    var_15 = (min((((((-10635 && (arr_7 [i_0] [i_1] [i_2]))) || ((((arr_1 [i_0]) ? -11347 : -42)))))), (max((max(var_4, var_10)), ((((arr_5 [3] [i_1] [i_2] [i_2]) || 104)))))));
                    var_16 = (arr_4 [i_0] [i_0] [6]);
                }
            }
        }
        arr_9 [i_0] = (max((((((104 ? var_5 : 53167787))) ? ((var_9 ? var_12 : var_4)) : ((max(var_10, var_10))))), ((min(var_3, var_4)))));
    }
    for (int i_3 = 4; i_3 < 14;i_3 += 1)
    {
        arr_12 [i_3] = ((((min(var_5, -var_7))) ? (var_1 * var_3) : (((!104) ? (99 * 10609) : 41))));
        arr_13 [i_3] = var_12;
    }
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            {

                /* vectorizable */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    arr_22 [i_4] [i_5] [i_6] = ((-100 ? 100 : 1987235042));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_30 [8] [i_5] [i_5] [i_5] [i_6] [i_5 + 1] [10] = (((25808 * (arr_24 [i_4]))));
                                arr_31 [3] [i_7] [i_6] [i_5 + 2] [i_4] = ((arr_20 [i_8 + 1] [i_8 - 2]) & (arr_18 [i_5 + 2] [i_4 - 1]));
                                arr_32 [20] [i_5] [i_6] [i_7] [i_8 + 1] &= (((var_10 | var_10) ? var_10 : (var_7 * var_13)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_18 = (min(var_18, var_5));
                                arr_38 [i_4] [i_5] [i_6] = 56622;
                            }
                        }
                    }
                    arr_39 [i_4 - 1] [i_5] [i_6] = var_11;
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    arr_42 [i_11] [i_11] = (((~var_7) ? (arr_36 [i_11] [i_11] [i_5] [i_5 + 1] [i_5] [i_5 + 2] [i_5]) : (var_6 / var_12)));

                    for (int i_12 = 3; i_12 < 24;i_12 += 1)
                    {
                        var_19 *= -41;
                        var_20 = (min(var_20, (~1)));
                        var_21 = (arr_41 [i_12]);
                    }
                }
                for (int i_13 = 3; i_13 < 21;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                arr_52 [i_15] [7] [i_5] [i_13] [i_5] [i_4] = (100 * 42);
                                arr_53 [i_4] [22] [i_5] [i_5] [i_13] [i_14] [i_15] = ((((min(var_7, (min(-42, var_9))))) ? ((((var_1 ? 103 : (arr_15 [i_4] [i_4 - 1]))) | 22326)) : ((max(var_7, 1)))));
                                arr_54 [16] [i_5] [i_5] [i_5] [i_15] = 3151320901766118404;
                                var_22 = -47;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        for (int i_17 = 4; i_17 < 23;i_17 += 1)
                        {
                            {
                                var_23 += ((((var_4 ? (arr_28 [i_17] [i_17 + 1] [i_17] [i_17] [3]) : var_5)) * ((var_2 - (arr_28 [i_17] [i_17 - 4] [10] [i_17] [i_17 - 4])))));
                                var_24 = (max(((1987235042 ? 42 : 1)), ((198 ? -1987235038 : 198))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 3; i_18 < 24;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 24;i_19 += 1)
                        {
                            {
                                arr_66 [i_18] [i_13] [1] [i_4] = ((!(arr_29 [i_4 + 2] [i_5 + 2] [i_13] [i_19 - 1] [20])));
                                arr_67 [i_4 - 1] [i_5 + 2] [i_13 - 2] [i_18] [i_19] = ((var_5 | ((((var_7 ? 255 : 0)) | var_7))));
                                arr_68 [i_4] [i_4] [i_4 + 1] [1] [i_4] = 5;
                                var_25 = -var_7;
                            }
                        }
                    }
                }
                for (int i_20 = 3; i_20 < 24;i_20 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 25;i_22 += 1)
                        {
                            {
                                arr_77 [i_4] [i_5 + 2] [i_4] [i_21] [i_4] [i_20] [i_20] = var_7;
                                var_26 = (min(var_26, (((((var_5 ? ((var_3 ? var_13 : (arr_72 [i_4 - 1] [1] [24] [i_21] [i_22]))) : (~36))) | (((-((var_3 ? 65535 : -30))))))))));
                                var_27 = (min(var_27, (((var_11 | ((((min(var_6, 9))) << (((arr_61 [i_4] [i_21]) + 17539)))))))));
                                arr_78 [i_4] [i_20] [i_20] [i_21] [4] = ((var_3 ? (((min(4294967295, 4294967295)) | (~255))) : (((((4186112 ? -95 : -21368)) | ((var_4 ? (arr_41 [i_4 + 2]) : (arr_48 [i_20] [i_20]))))))));
                                arr_79 [i_4] [9] [i_20] [i_21] [i_22] [i_20] = (((((min(-2985289898688032085, var_10)) | (var_0 | 39))) | var_4));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 25;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 25;i_24 += 1)
                        {
                            {
                                var_28 = ((-104 * (((arr_76 [i_5 - 1] [i_4 - 1]) * 1))));
                                var_29 = (min(var_29, var_3));
                                var_30 = (min(var_30, (((!(((-((min((arr_69 [i_4 + 1] [i_5] [i_24]), var_10)))))))))));
                            }
                        }
                    }
                }
                var_31 = (min(var_10, ((~(arr_69 [i_4] [i_5 + 3] [20])))));
                var_32 = (max(var_6, ((-(var_12 | var_7)))));
            }
        }
    }
    var_33 = var_5;
    #pragma endscop
}
