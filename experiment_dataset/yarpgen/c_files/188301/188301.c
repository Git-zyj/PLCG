/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (!var_8)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = (arr_1 [11]);
        arr_4 [2] = ((!(((((1 ? 65531 : 697725158061388683)) << (1428 - 1407))))));
        var_13 = (max((((~(min(var_10, var_9))))), (max(((max((arr_1 [4]), var_3))), ((-(arr_3 [i_0] [i_0])))))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                {
                    arr_12 [i_1 + 1] = (max((arr_11 [i_1] [i_2 - 1] [i_2 - 1]), (max(697725158061388698, -var_10))));
                    arr_13 [i_1 - 1] [1] [i_1 - 1] = arr_6 [i_3];
                    var_14 = (max(var_14, (arr_5 [i_1 + 2])));
                }
            }
        }
        arr_14 [i_1] &= (((arr_9 [12]) ? var_5 : (((arr_5 [i_1 + 3]) ? (arr_6 [i_1 + 3]) : (max((arr_8 [i_1] [i_1]), var_10))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_15 = (arr_19 [i_5] [i_5] [i_5] [i_5]);

                        for (int i_7 = 3; i_7 < 22;i_7 += 1)
                        {
                            arr_26 [1] [i_4] [i_5] [3] [i_7] [i_7] = (!var_0);
                            var_16 -= (arr_5 [i_4]);
                        }
                        for (int i_8 = 2; i_8 < 22;i_8 += 1)
                        {
                            arr_29 [1] [i_5] [9] = ((((max(1428, (arr_17 [i_8 + 1] [i_8 - 2])))) || (!var_4)));
                            var_17 = (max(var_17, (((!(arr_28 [i_1] [i_8 + 1] [i_6] [i_1 - 1] [4] [16] [16]))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_18 = (-(arr_22 [i_6] [i_6] [14] [i_6]));
                            var_19 = (max(var_19, (((-(!245))))));
                            var_20 = (arr_21 [i_1] [i_1] [i_6] [i_9]);
                            arr_32 [i_1] [i_1] [i_1] = (arr_28 [i_1 - 3] [i_1 + 1] [i_1 - 2] [12] [i_1] [i_1 + 1] [i_1 + 2]);
                            arr_33 [i_1] [i_4] [i_5] [i_6] [i_9] [i_9] = (((arr_31 [i_6] [i_1 - 1] [17] [i_1 + 1] [i_1 + 1] [i_1 + 3]) ? (arr_9 [i_1 - 3]) : var_9));
                        }
                        var_21 = (max(var_21, ((max((((!(var_1 % var_4)))), (arr_11 [14] [i_4] [i_4]))))));
                        var_22 = ((!((min((arr_11 [i_1] [i_1 - 2] [i_1 + 1]), var_0)))));
                    }
                    var_23 -= (arr_15 [i_5]);
                    arr_34 [18] [i_4] = (min(var_5, ((-(arr_23 [12] [12] [2] [i_1 - 3])))));
                }
            }
        }
        var_24 -= (max((max((arr_16 [i_1 + 2] [i_1 + 4]), (arr_11 [3] [i_1 + 1] [i_1]))), 1));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 23;i_12 += 1)
                {
                    {
                        arr_42 [i_1] [i_1] [i_1] [i_10] [i_11] [i_12] = (max(-var_10, ((var_2 ? (arr_9 [i_1 + 2]) : (arr_9 [i_1 + 4])))));
                        var_25 = (min(var_25, var_4));
                        var_26 = (max((max((arr_38 [i_1 + 3] [i_12 + 1] [i_1 + 3] [i_1 + 3]), (arr_38 [i_1 - 3] [i_12 - 2] [i_12] [i_12]))), (arr_38 [i_1] [i_10] [i_11] [15])));
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        arr_46 [i_13] [i_13] = max((((!(arr_44 [i_13])))), (((arr_18 [i_13] [i_13] [i_13] [i_13]) ? (arr_44 [i_13]) : (arr_44 [i_13]))));
        arr_47 [i_13] [i_13] = (max(((max((arr_17 [i_13] [i_13]), (arr_17 [i_13] [i_13])))), (max((max((arr_19 [i_13] [4] [i_13] [i_13]), (arr_23 [i_13] [i_13] [i_13] [2]))), ((var_5 ? var_2 : var_7))))));
        arr_48 [i_13] [i_13] = (min((arr_37 [i_13] [i_13] [i_13]), var_4));
        var_27 ^= ((!((max((!var_3), var_5)))));
    }

    for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
    {
        arr_52 [i_14] = (max(-var_4, (arr_35 [i_14] [i_14])));
        arr_53 [i_14] [i_14] = var_9;
        /* LoopNest 3 */
        for (int i_15 = 3; i_15 < 17;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 19;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 18;i_17 += 1)
                {
                    {
                        arr_62 [i_17] [i_14] [i_16] [i_14] [i_14] = (arr_38 [i_14] [i_15 - 1] [i_16] [5]);

                        /* vectorizable */
                        for (int i_18 = 1; i_18 < 16;i_18 += 1)
                        {
                            arr_66 [i_14] [i_14] [i_14] [i_14] = -var_3;
                            arr_67 [i_14] [i_14] = (arr_37 [i_15 + 1] [i_17 - 1] [i_17 - 1]);
                            var_28 ^= ((-((var_7 ? var_6 : var_5))));
                        }

                        for (int i_19 = 0; i_19 < 19;i_19 += 1)
                        {
                            var_29 = (((max(var_6, var_9))));
                            arr_70 [i_14] [i_15] [i_15] [i_14] [i_15] = ((~(((~var_4) ? (max((arr_30 [i_15]), var_2)) : var_2))));
                        }
                        arr_71 [14] [14] [6] [2] [10] |= (max(((max((arr_23 [14] [i_15] [i_16] [i_15 - 2]), (arr_37 [i_17 - 2] [i_15 - 1] [i_16])))), (max(var_9, (arr_23 [14] [20] [i_16] [i_15 - 2])))));
                    }
                }
            }
        }
        var_30 |= (arr_17 [13] [i_14]);
        var_31 = (min(var_31, ((max((((-(max(var_9, var_7))))), (max((((var_9 ? var_9 : (arr_28 [i_14] [i_14] [i_14] [i_14] [1] [i_14] [i_14])))), var_0)))))));
    }
    for (int i_20 = 0; i_20 < 19;i_20 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 19;i_21 += 1)
        {
            for (int i_22 = 1; i_22 < 17;i_22 += 1)
            {
                {
                    var_32 |= (max(((max(var_0, (arr_78 [i_22 + 1] [i_21] [i_20] [5])))), (var_4 * 9705855188696951431)));
                    var_33 = (min(var_33, var_10));
                }
            }
        }
        var_34 = min(((var_9 ? (arr_28 [2] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]) : var_0)), var_3);
        arr_80 [i_20] [i_20] = ((-((max(1, -1)))));
        arr_81 [i_20] = ((max(var_9, (arr_54 [i_20]))));
    }
    var_35 = (max(var_7, (((((var_2 ? var_10 : var_8)) >= ((var_4 ? var_9 : var_9)))))));
    #pragma endscop
}
