/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0 - 1] = 40918;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_13 [i_3] [i_1] [i_2] [i_3 + 1] [i_1 - 2] [i_2] = (arr_11 [i_2]);
                        arr_14 [i_2] = (arr_0 [i_0]);
                        arr_15 [i_0] [i_0] [i_0] [i_2] = (arr_5 [i_0 - 1] [i_3 + 1]);
                        var_13 = ((((arr_7 [i_0] [i_3 - 1] [i_2]) ? (arr_11 [i_2]) : ((3205198412 ? 45225 : (arr_7 [i_0] [i_0] [i_2]))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_0 + 1] [i_0] [i_5 + 1] [i_6] [i_5] [i_7] = ((min(1089768872, ((((arr_17 [i_5]) ? (arr_11 [i_5]) : 41795))))));
                                arr_27 [i_0] [i_4] [i_5] = (arr_24 [i_0 - 1] [i_5 + 1] [i_7 - 2] [i_7] [i_7]);
                                var_14 = ((((max((arr_22 [i_0 - 1] [i_0 - 1] [i_5 + 1] [i_6] [i_7 - 3]), (arr_10 [i_0] [i_5] [i_0 + 1] [i_7 - 3])))) ? ((((arr_18 [i_0 - 1]) ? (arr_1 [i_5 + 1]) : (arr_1 [i_5 + 2])))) : ((20329 ? (min(24639, 2874255726484837487)) : var_6))));
                                var_15 = (arr_5 [i_0 - 1] [i_0 - 1]);
                            }
                        }
                    }
                    var_16 ^= var_3;
                    arr_28 [i_5] = min(((2154659832616075494 ? (((arr_21 [i_5]) ? 18446744073709551609 : 3906286828)) : (((((arr_20 [i_0] [i_5] [i_0 - 1] [11]) <= (arr_10 [i_0] [i_5] [i_5] [i_5]))))))), (min(((51963 ? 16951653610830400468 : (arr_18 [i_0]))), (arr_16 [i_5]))));
                }
            }
        }
    }
    var_17 = (min(var_5, (max(var_1, (max(10275, var_2))))));

    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_18 += ((max((arr_29 [i_8] [i_8]), (arr_30 [i_8]))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 21;i_12 += 1)
                        {
                            {
                                var_19 ^= ((((max(((max((arr_42 [i_11] [i_10] [i_8] [i_8]), 204))), var_11))) ? var_12 : var_0));
                                arr_43 [i_11] [i_9] [i_10] [i_11] = (min((max(var_3, (arr_30 [i_12 + 1]))), (arr_30 [i_12 - 1])));
                            }
                        }
                    }
                    var_20 = (max((max(var_2, (arr_34 [i_8] [i_8]))), ((((arr_41 [i_8] [i_10]) - (arr_29 [i_8] [i_9]))))));
                    arr_44 [i_8] [i_8] [i_8] = min(((((var_1 || var_4) ? (!252) : (min((arr_37 [i_8]), (arr_34 [i_8] [1])))))), (((arr_30 [i_9]) / (arr_30 [i_8]))));
                    var_21 = (min(((max(var_8, (arr_37 [i_8])))), ((min(var_9, var_12)))));
                }
            }
        }
        var_22 = (min(var_22, (((max((arr_30 [7]), 16951653610830400472))))));
    }
    for (int i_13 = 2; i_13 < 21;i_13 += 1)
    {
        var_23 ^= (max((max((~var_2), (arr_46 [i_13] [i_13]))), var_4));
        var_24 = (((((4699441656535247345 ? (arr_46 [i_13 + 2] [i_13 + 2]) : (arr_46 [i_13 + 1] [i_13 + 1])))) ? (max((min((arr_45 [i_13 + 1] [i_13 + 1]), 3457040671)), (arr_45 [i_13 + 1] [i_13]))) : ((((55764 < (~var_10)))))));
        var_25 = (max(((min(var_9, 3))), (arr_45 [i_13] [i_13 + 1])));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                for (int i_16 = 4; i_16 < 20;i_16 += 1)
                {
                    {
                        var_26 = (max(var_26, (min((min(-1650, 1495090462879151156)), ((max((arr_49 [i_16 - 3] [i_13 - 2]), (arr_49 [i_16 + 3] [i_13 + 2]))))))));
                        var_27 *= 1089768880;
                        var_28 = (max((arr_47 [i_13 + 2]), (min((arr_52 [i_14] [i_14] [i_14] [i_15] [i_16 + 1]), (arr_47 [i_13 - 2])))));
                        var_29 = (max(var_29, (((-(arr_46 [i_15] [i_16]))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_17 = 1; i_17 < 21;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 23;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 23;i_19 += 1)
                {
                    {
                        arr_60 [i_13 + 1] = (((-9223372036854775807 - 1) <= (max((((arr_55 [i_13] [i_17] [i_18]) ? (arr_50 [i_19] [i_17 + 1] [i_18] [i_19]) : 3457040664)), (arr_52 [i_13] [i_13 + 1] [i_17] [i_13 + 1] [i_19])))));
                        arr_61 [i_13 + 1] [i_13 + 1] [i_13] [i_13] [i_13] [i_13] = ((~(arr_52 [i_18] [i_17] [i_18] [i_18] [i_19])));
                        var_30 -= (min((max(252, (arr_54 [i_17 - 1] [i_13 + 1] [i_13 - 2]))), ((((~(arr_57 [i_13] [i_17] [i_18])))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
