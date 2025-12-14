/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_4] [1] [i_0] [0] = (~var_4);
                                arr_17 [i_0] [i_1] [i_4] [i_3] [i_4] = (--1180856832);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_17 = (arr_9 [i_5 + 2] [i_5 + 1] [i_5 + 2] [i_5 + 2]);
                        var_18 = (-8088094787404142605 ? -1180856849 : 1180856844);
                        arr_20 [8] [i_5 + 1] [i_2] [i_1] [18] [i_0] = arr_12 [i_0] [i_0] [i_0] [i_0];
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            var_19 = arr_25 [i_0] [i_0] [i_2] [i_2] [i_7];
                            var_20 += (((arr_24 [i_0] [i_0] [i_1] [i_2] [i_6] [i_7]) ? var_7 : var_1));
                            var_21 = 33554400;
                        }
                        arr_26 [i_2] [i_2] = -1180856849;

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_22 ^= ((-8088094787404142612 ? 2104015976 : 65535));
                            var_23 = var_16;
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_33 [i_0] [i_2] [2] [i_0] [i_0] [i_0] [i_0] &= -7899275395654339889;
                            var_24 = (max(var_24, (((var_8 / (arr_9 [i_0] [i_1] [i_2] [i_1]))))));
                        }
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_25 = var_5;
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_12 [i_0] [i_2] [i_0] [i_10]);
                        }
                        for (int i_11 = 2; i_11 < 16;i_11 += 1)
                        {
                            arr_40 [i_0] [i_0] [i_0] [i_11] = var_9;
                            var_26 = (-3069988905441268471 <= 1180856857);
                            var_27 += (((-(arr_21 [i_11] [i_1] [5] [5]))) ^ (arr_5 [i_6 + 1]));
                        }
                    }
                    for (int i_12 = 1; i_12 < 17;i_12 += 1) /* same iter space */
                    {
                        var_28 = (max(var_28, var_6));
                        arr_45 [8] [8] [i_1] [i_2] [8] [i_12] = (max((max(var_14, 8088094787404142611)), (arr_1 [i_12 - 1])));
                        var_29 = (arr_28 [i_0] [i_12] [i_2] [i_1] [i_2] [5]);
                    }
                    arr_46 [i_0] [i_0] [i_0] = (max((arr_5 [i_1]), (((arr_30 [5] [i_1] [i_2] [i_2] [i_0]) + (((arr_30 [7] [i_1] [i_2] [i_0] [i_0]) ? var_16 : -1180856832))))));
                    arr_47 [i_1] = -var_9;
                }
            }
        }
        arr_48 [i_0] [i_0] = ((var_1 >= ((~(arr_31 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 17;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                {
                    arr_54 [i_0] [1] [4] = (max(((((max(var_13, 0))))), 4294967295));
                    arr_55 [i_0] [17] [17] = ((((((((arr_36 [i_13 - 1] [i_0]) / (arr_4 [i_0]))) + (var_2 * 1526654552)))) ? ((((0 ? 502415325 : 1342819207)))) : var_14));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 19;i_16 += 1)
                        {
                            {
                                var_30 = (max((min((((~(arr_43 [i_14] [i_13] [i_14] [i_15])))), ((var_7 ? var_4 : 8088094787404142619)))), 3069988905441268470));
                                var_31 = (arr_49 [i_0] [8] [i_14]);
                            }
                        }
                    }
                    var_32 = ((-(((arr_29 [i_0] [i_0]) - var_9))));
                }
            }
        }
        var_33 *= (((21040 / (arr_43 [i_0] [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 19;i_18 += 1)
        {
            for (int i_19 = 3; i_19 < 17;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 19;i_20 += 1)
                {
                    {
                        var_34 = -8088094787404142625;
                        var_35 = (var_13 > 23559);
                        var_36 -= ((-(arr_67 [i_17] [14] [i_17] [i_17])));
                    }
                }
            }
        }
        var_37 = (var_6 / var_13);
    }
    var_38 = 1181999238;
    var_39 = var_0;
    var_40 -= var_15;
    var_41 = (max(4294967274, 5322));
    #pragma endscop
}
