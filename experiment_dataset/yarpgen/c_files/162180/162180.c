/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (max(93, (((((arr_1 [9]) - (arr_0 [i_0] [i_0]))) - var_8))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_17 = ((var_0 & (max(var_9, (max(var_12, (arr_3 [i_1] [i_0])))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_0] [i_1] = max(var_1, (((((min(var_0, 162)))) * var_12)));
                        var_18 = (((((var_16 | (arr_8 [i_0 - 3] [i_0] [i_0 - 3])))) ? (arr_8 [i_0 - 3] [i_0 - 3] [i_0 - 3]) : (arr_8 [i_0 - 3] [i_0 - 2] [i_0 - 3])));
                        var_19 = (arr_10 [i_0] [i_1] [i_2] [i_3]);
                        var_20 = var_11;
                    }
                }
            }
        }
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            var_21 = (((max((var_16 || 158), (max(151, 5729409995144686899)))) <= ((var_3 / (arr_2 [i_0])))));
            arr_17 [i_0] = min((((arr_15 [i_0 + 1] [i_0] [i_0 + 1]) - var_11)), (arr_7 [i_4] [i_4] [i_4 - 1]));
        }
    }
    for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (var_3 + 238)));
        arr_20 [i_5] = ((var_7 ? (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5 - 2] [i_5]) : (((arr_11 [i_5] [i_5] [i_5] [i_5] [i_5 - 2] [12]) << (var_6 - 1099291157694889104)))));
        var_23 = (min(var_23, ((min((min((var_14 * var_1), (max(6621608471398995029, 240)))), (((((arr_15 [i_5 - 2] [i_5 - 2] [i_5 - 2]) == var_9)))))))));
        var_24 = (arr_18 [i_5] [i_5 - 2]);
        arr_21 [i_5] = ((((((!95) || var_9)))) / (((arr_16 [i_5] [i_5]) + (arr_5 [i_5 - 1]))));
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 16;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    {
                        var_25 = (((arr_26 [i_6] [i_6 - 3]) ? (((var_4 - (arr_31 [13])))) : (arr_23 [i_6])));

                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_26 = var_10;
                            var_27 = ((((-3 ? (arr_26 [i_8] [i_8]) : (arr_23 [i_6]))) - (arr_9 [i_10] [i_7] [i_8] [i_7])));
                            var_28 ^= ((arr_3 [i_6 - 3] [i_6 - 2]) + (arr_34 [i_6 - 3]));
                            var_29 = (var_14 * (arr_22 [i_9]));
                        }
                        for (int i_11 = 4; i_11 < 15;i_11 += 1)
                        {
                            arr_41 [9] [i_6] [i_8] [i_6] [i_6] = (arr_30 [i_11 - 2] [i_11 + 1] [i_6 - 1] [i_11 + 2] [i_6 - 1]);
                            var_30 = (min(var_30, ((((0 ? var_0 : (arr_0 [i_11] [i_7])))))));
                            var_31 ^= var_16;
                        }
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            var_32 = (max(var_32, -171228015));
                            var_33 -= var_7;
                        }
                        var_34 = (min(var_34, (arr_32 [i_6] [i_7] [8])));
                        var_35 = (min(var_35, (((arr_25 [i_6 - 1] [i_7] [i_6 - 2]) & 10))));
                        arr_45 [i_9] [i_6] [i_8] [i_8] [i_6] [i_6 + 1] = (~var_3);
                    }
                }
            }
        }
        var_36 = (arr_27 [i_6] [i_6 + 1]);
    }
    var_37 = var_16;
    #pragma endscop
}
