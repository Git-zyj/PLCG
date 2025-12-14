/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_1, (((var_10 ? 0 : var_12)))));
    var_14 = var_9;
    var_15 = (var_5 ? var_0 : ((-1449238453 ? (var_4 / var_4) : var_10)));

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_16 = (min(var_16, ((max(-1434898195, 65517)))));
                        arr_9 [i_0 - 2] [24] [i_0 - 2] [24] [i_1 + 3] |= ((~((var_12 ? (arr_8 [i_0] [i_0 + 1] [i_0 - 1] [1] [i_0 + 1]) : ((max(var_12, var_7)))))));
                        arr_10 [i_0] [i_0] [i_2] [i_0 - 2] [i_2] = (((arr_8 [i_3] [0] [0] [i_1 + 1] [0]) ? ((-6166 ? 65535 : 255)) : (max(var_0, 65526))));
                        var_17 = (max(var_17, ((41 * (min((var_1 * 0), (((var_11 ? (arr_1 [i_0] [19]) : (arr_4 [i_3] [i_1] [i_2]))))))))));
                        var_18 |= 9223372036854775808;
                    }
                }
            }
            var_19 *= ((-(arr_8 [i_1 + 1] [i_1] [i_1] [i_1] [i_1])));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
        {
            var_20 += ((-(arr_5 [0] [i_4 + 1] [i_0])));
            arr_14 [i_0] [i_4 - 2] = var_4;
            arr_15 [i_0] [i_0] = var_12;
        }
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    arr_21 [i_0] [20] [14] [15] = var_1;
                    var_21 = (min(var_21, var_0));
                }
            }
        }
    }
    for (int i_7 = 3; i_7 < 21;i_7 += 1)
    {
        var_22 = (max(var_22, (((!((max((arr_22 [i_7 - 2]), 0))))))));
        var_23 = 844152194;
    }

    for (int i_8 = 2; i_8 < 13;i_8 += 1)
    {
        arr_28 [i_8] [i_8 - 2] = ((0 ? ((min(var_2, var_5))) : (((arr_11 [i_8 + 3]) / var_9))));
        arr_29 [i_8] [i_8] |= (max(var_5, ((1 ? (arr_0 [i_8 - 2]) : 18446744073709551615))));
        var_24 ^= 35;
        var_25 ^= (arr_18 [i_8 + 1] [i_8 - 2] [i_8 - 1]);
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 13;i_11 += 1)
                {
                    {
                        var_26 = (min(var_26, ((((arr_7 [i_11] [15] [i_11] [i_11] [i_11 + 2] [i_11]) ? ((-(arr_7 [i_11] [i_11] [i_11] [i_11] [i_11 + 2] [11]))) : (((arr_7 [i_11] [i_11] [i_11] [17] [i_11 + 2] [i_11]) ? -31055 : (arr_7 [23] [i_11] [i_11] [i_11] [i_11 + 4] [23]))))))));
                        arr_38 [i_10] |= (max(((844152194 / (arr_27 [i_8 + 3]))), ((min((arr_35 [i_8 + 3] [1] [i_10] [i_11 + 4] [i_11]), (arr_35 [i_8 + 3] [i_9] [i_8 + 3] [i_11 + 4] [1]))))));
                        arr_39 [i_9] = 18446744073709551615;
                    }
                }
            }
        }
    }
    for (int i_12 = 4; i_12 < 8;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 6;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 8;i_16 += 1)
                        {
                            {
                                var_27 += ((((((arr_12 [i_13 + 1] [i_16 - 2]) ? (arr_36 [i_16 + 2]) : (arr_36 [i_16 + 2])))) ? (arr_17 [i_13 + 2]) : ((max((arr_36 [i_16 - 1]), 198)))));
                                var_28 ^= (-32767 - 1);
                                var_29 = (max(((-(arr_6 [i_13 + 4] [i_12 + 2] [i_16 + 1]))), (arr_6 [i_13 + 3] [i_12 - 2] [i_16 + 2])));
                                var_30 = arr_35 [i_12] [i_12 - 2] [i_12] [i_12] [i_12 - 1];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 10;i_18 += 1)
                        {
                            {
                                arr_59 [i_12] [i_17] [i_14] [i_13] [2] [i_12] = ((!((((arr_6 [i_12 - 2] [i_13] [i_13 - 1]) ? (arr_6 [i_12 - 1] [i_13] [i_13 + 4]) : (arr_6 [i_12 - 1] [i_12 - 1] [i_13 + 1]))))));
                                arr_60 [i_12 - 2] [i_13] [i_12 - 2] [i_12] [i_12 - 2] [i_12 - 2] [i_12 - 2] = (1204290629 / 2122552066);
                            }
                        }
                    }
                    arr_61 [i_12] [i_12] [i_14] = ((~(((arr_1 [9] [i_12 + 2]) ? (((arr_3 [i_12 - 2] [i_12] [i_12 - 2]) ? 23267 : var_0)) : ((var_9 ? (arr_45 [i_14]) : var_8))))));
                }
            }
        }
        var_31 |= (((arr_0 [i_12]) ? (((arr_0 [14]) ? (arr_17 [i_12]) : (arr_17 [i_12 - 4]))) : (~-10)));
    }
    #pragma endscop
}
