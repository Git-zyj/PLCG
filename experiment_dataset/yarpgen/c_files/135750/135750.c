/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(64853, var_6))) ? 682 : 51));
    var_15 &= ((var_6 * ((((((var_10 >> (var_6 - 1412542320))) == var_3))))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_16 = (max(((52 * (arr_1 [i_0 - 2]))), (arr_1 [i_0 - 2])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((((((arr_1 [i_2 + 3]) | (arr_1 [i_2 - 1])))) ? ((min((arr_1 [i_1 - 1]), (arr_1 [i_0 - 1])))) : ((64853 * (arr_1 [i_1 - 1]))))))));
                    var_18 = 203;
                }
            }
        }
        arr_8 [i_0] = (((max(((min(220, 59))), (max(2344396187145644397, (arr_0 [i_0] [i_0]))))) ^ 13));
    }
    for (int i_3 = 4; i_3 < 19;i_3 += 1)
    {
        var_19 = ((!((((arr_0 [i_3 - 1] [i_3 - 2]) ? 17879277795330564861 : (arr_0 [i_3 + 1] [i_3]))))));
        arr_12 [i_3] [9] = ((((((~(arr_10 [i_3 - 1] [15]))) ? ((((arr_11 [i_3] [i_3 - 4]) ? (arr_4 [i_3] [8] [i_3]) : var_11))) : (max(682, 16102347886563907219))))));
    }
    for (int i_4 = 4; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_20 = 609;
        arr_17 [i_4] = ((((arr_15 [i_4]) != (arr_7 [i_4] [i_4] [8] [i_4]))));
        var_21 = ((~(max(((1 ? 10960879801837130341 : 1)), (arr_7 [i_4] [i_4] [i_4] [i_4 - 1])))));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        var_22 = (((((arr_11 [i_4 - 2] [i_4 - 2]) ^ 9411361869743682154)) & (((~(arr_13 [i_4 - 4] [i_5 - 1]))))));
                        var_23 = (arr_6 [i_4] [i_4] [i_6 - 1]);
                        var_24 = ((((min((arr_15 [i_4 - 3]), (arr_15 [i_4 - 1])))) ? ((((!(arr_15 [i_4 - 2]))))) : (arr_15 [i_4 - 4])));
                    }
                }
            }
        }
        arr_25 [i_4] = ((min(-8510977120688578389, (arr_23 [i_4] [i_4] [i_4 - 1] [i_4 + 2]))));
    }
    for (int i_8 = 4; i_8 < 16;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 17;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 15;i_12 += 1)
                        {
                            {
                                var_25 = 1810571603;
                                arr_41 [i_8 - 1] [i_8 - 2] [i_9] [i_10] [i_10] [i_11] [i_11] = (arr_30 [i_8] [i_9] [i_10] [i_12]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 4; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 16;i_14 += 1)
                        {
                            {
                                var_26 = (min(var_26, (((~(arr_33 [i_8 - 2] [i_10 - 3] [i_13 - 1]))))));
                                var_27 = ((~(!var_12)));
                                var_28 = max((min(696, 2484395695)), (arr_9 [i_10]));
                            }
                        }
                    }

                    for (int i_15 = 2; i_15 < 17;i_15 += 1)
                    {
                        var_29 = (min(var_29, 1));
                        var_30 *= ((130 ? ((max(-609, 63488))) : (1 / 123)));
                    }
                    for (int i_16 = 2; i_16 < 17;i_16 += 1)
                    {
                        var_31 = (65535 ^ 130);
                        var_32 = (min((((!1) + (max((arr_22 [i_8] [8] [i_8] [i_16]), 0)))), ((((arr_51 [i_8] [i_8] [i_8] [i_8 - 4]) != (max(1, (arr_22 [6] [2] [i_10] [i_16 - 2]))))))));
                        var_33 = ((max(var_1, (arr_16 [i_10 - 1]))));
                        var_34 = (arr_6 [i_8] [i_9 + 1] [i_16]);
                    }
                    for (int i_17 = 1; i_17 < 16;i_17 += 1)
                    {
                        arr_55 [i_8 + 1] [i_8] [i_9] [i_10 - 2] [i_8 + 1] = (arr_44 [10] [i_9] [i_9]);
                        arr_56 [i_8] [i_9] [i_9] [i_10] [i_17 - 1] [i_9] = ((~(((arr_5 [i_8 + 1] [i_8 + 1] [i_17]) ? (arr_5 [i_8 - 1] [i_9 - 2] [14]) : (arr_46 [i_8] [i_9 - 2] [i_10] [i_17 + 1] [i_17 - 1] [i_17 - 1])))));
                    }
                    var_35 = var_0;
                    arr_57 [i_10 - 2] = -195608795;
                }
            }
        }
        var_36 = (min(var_36, ((min(63488, 6993111060075373888)))));
    }
    #pragma endscop
}
