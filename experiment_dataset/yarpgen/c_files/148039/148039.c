/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_17 ^= (((arr_1 [i_0] [i_0]) ? var_15 : (arr_1 [i_0 + 1] [i_0 - 2])));
        arr_3 [22] = (((!-18672) ? (arr_1 [i_0] [i_0]) : (((((min(var_3, (arr_2 [i_0]))))) & ((var_4 ? var_2 : (arr_1 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 *= (min(((6 ? 73 : 137)), (arr_7 [i_0] [2] [i_2 + 2] [i_0 - 2])));
                    var_19 = (max((((var_0 ? (arr_0 [i_0 + 1] [i_0 - 1]) : (arr_0 [i_0 - 1] [i_0 - 2])))), (max((arr_7 [i_2] [i_1] [i_2] [i_0]), (arr_6 [i_0] [i_1])))));
                    var_20 = ((((((arr_5 [i_1] [i_1]) ? (arr_1 [i_0] [i_0]) : ((max((arr_4 [i_1] [i_1] [i_2]), 68)))))) ? 29813 : ((((((arr_0 [i_0] [i_0]) ? var_14 : (arr_0 [i_0] [0])))) ? ((var_13 ? (arr_6 [i_0] [14]) : var_15)) : (((arr_7 [i_0] [i_1] [i_1] [i_0]) ? var_3 : var_15))))));
                }
            }
        }
    }
    var_21 = (((max(64932, -6129856189282400032)) + (((var_12 ? ((var_15 ? var_12 : var_4)) : var_6)))));

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_22 &= (((((arr_4 [i_3] [i_3] [i_3]) ? (arr_4 [i_3] [i_3] [17]) : (arr_4 [16] [21] [i_3]))) >= ((max((arr_4 [i_3] [10] [i_3]), (arr_4 [i_3] [i_3] [i_3]))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
        {
            arr_14 [i_3] [12] [i_3] = (((arr_8 [i_4] [i_4] [i_3]) < (arr_8 [i_3] [i_3] [i_4])));
            var_23 *= (((arr_4 [i_3] [i_4] [i_4]) ? var_12 : (arr_6 [i_4] [i_4])));
            var_24 = (min(var_24, (arr_4 [i_3] [i_4] [i_3])));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            arr_18 [i_3] = (((((var_10 | (min((arr_12 [i_3]), var_7))))) ? (arr_17 [i_3]) : ((((((var_10 || (arr_11 [i_3] [i_3] [i_3])))) <= (arr_12 [i_3]))))));
            var_25 = ((var_7 ? ((((max((arr_16 [i_3]), var_8))) ? ((45 ? var_9 : var_13)) : (arr_6 [i_3] [i_5]))) : ((var_15 ? (arr_2 [6]) : var_3))));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 20;i_7 += 1)
                {
                    {
                        var_26 = (((arr_21 [i_5] [i_6] [i_7]) ? (~55) : -25));
                        arr_27 [1] [i_5] [2] = ((var_2 ? var_13 : (max(0, 9))));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
        {
            var_27 ^= (max((max((max(var_1, (arr_15 [i_3] [i_8]))), (((!(arr_17 [i_3])))))), (((!(~var_5))))));
            var_28 = -6129856189282400039;
        }
        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            arr_33 [i_3] = ((var_16 ? (arr_32 [i_3]) : ((((arr_32 [i_9 - 1]) != var_2)))));

            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_29 = (((((0 ? ((min((arr_21 [i_12] [8] [8]), (arr_31 [i_12])))) : ((max(var_9, (arr_11 [i_3] [i_9] [i_10]))))))) ? 0 : (max((((arr_5 [i_3] [i_9]) ? (arr_1 [i_9] [i_11]) : var_8)), var_6))));
                            var_30 *= (((((((((arr_15 [i_3] [i_3]) ? (-127 - 1) : var_6))) - ((var_5 ? 32767 : 5823615182730806254))))) ? (arr_26 [i_3] [16] [i_3] [i_3] [i_3]) : ((((max(var_11, var_7))) ? var_3 : var_11))));
                            var_31 = ((((((arr_31 [i_9]) == (arr_40 [i_3] [i_3] [i_9 + 1] [i_12 - 4] [i_12])))) << (((arr_15 [i_3] [i_3]) + 58))));
                        }
                    }
                }
                var_32 = ((((arr_26 [i_3] [i_3] [5] [i_9 + 1] [i_3]) ? (arr_1 [i_10] [i_9]) : (arr_1 [1] [i_9]))));
                var_33 = arr_2 [i_3];
            }
            arr_41 [i_3] [i_3] = (arr_34 [i_9] [i_9] [6]);
        }
        arr_42 [i_3] = (((((var_15 ? (((arr_4 [18] [i_3] [i_3]) ? var_1 : (arr_30 [i_3] [i_3] [i_3]))) : ((-(arr_25 [i_3] [i_3] [19] [i_3])))))) ? 68 : ((-((max((arr_13 [i_3]), (arr_37 [i_3] [i_3] [7] [7] [i_3] [i_3]))))))));
    }
    var_34 = var_10;
    #pragma endscop
}
