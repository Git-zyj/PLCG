/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_20 = ((!(((((arr_1 [i_0 + 1] [i_0]) ? 0 : var_15))))));
        var_21 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_22 = ((-((max((min((arr_3 [i_1]), -72)), 1)))));
        var_23 = (((var_4 ? ((~(arr_3 [i_1])) : (((var_2 > (arr_4 [4]))))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_24 = ((+((max((arr_4 [i_2]), (arr_4 [i_2]))))));
        var_25 = (max(var_25, (((0 ? 9223372036854775807 : -41)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                {
                    var_26 -= ((((var_19 + (min(0, var_19)))) / ((((((arr_6 [i_4 + 1]) + 9223372036854775807)) << (((arr_3 [i_4 + 3]) - 32036)))))));
                    arr_12 [i_4] [i_3] [i_4 - 1] = (((-11 / 2309495967641440593) * 1));
                    var_27 = (min(-var_13, (min(var_2, var_19))));
                    var_28 = (!((min(((1 ? 19711 : 1)), ((var_2 ? (arr_7 [i_3]) : var_12))))));
                    var_29 = (arr_7 [i_3]);
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                {
                    var_30 = (((((((var_13 ? (arr_8 [i_5] [i_6] [i_7]) : 83)) * (var_13 / var_8)))) ? (max(((min(var_0, var_2))), (96 * var_1))) : (((min(var_1, var_15)) / var_18))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_26 [i_5] [i_6] [i_7] [i_8] [i_9] [0] = var_5;
                                var_31 = 52379;
                                var_32 = (min(var_32, ((max(0, ((var_9 ? (arr_16 [i_6 - 2] [i_9 + 3]) : (((45824 ? -41 : var_12))))))))));
                            }
                        }
                    }
                }
            }
        }
        var_33 = ((~(min(237296167, -116))));
        arr_27 [6] = ((!((((((var_15 ? (arr_3 [i_5]) : 97))) ? (((((arr_4 [i_5]) <= var_15)))) : ((var_7 ? 75 : (arr_0 [7] [i_5]))))))));
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {

                        for (int i_14 = 2; i_14 < 23;i_14 += 1)
                        {
                            var_34 = -1;
                            var_35 += (min(((-(arr_30 [0]))), (arr_30 [0])));
                            var_36 = 2939964335;
                        }
                        var_37 = ((-(min((arr_33 [i_10] [i_11] [i_10]), 1611346234))));
                        arr_44 [i_10] [i_11] [i_13] [i_13] = (arr_36 [2] [8] [i_13]);
                    }
                }
            }
        }
        var_38 = (max((((19 ? (arr_33 [i_10] [i_10] [i_10]) : (115 > var_15)))), ((((min((arr_37 [i_10] [4] [i_10]), var_1))) ? ((var_19 ? var_10 : var_1)) : (-2147483647 - 1)))));
    }
    for (int i_15 = 0; i_15 < 10;i_15 += 1)
    {
        var_39 |= (min(var_19, (((arr_41 [1] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]) | (arr_37 [10] [i_15] [i_15])))));
        var_40 = max((-2147483647 - 1), var_10);
    }
    for (int i_16 = 2; i_16 < 17;i_16 += 1)
    {
        var_41 -= (max(((((arr_1 [i_16] [i_16]) ? (max(var_18, 2147483647)) : ((var_19 ? var_15 : 115))))), (min(-2147483647, ((var_18 ? (-127 - 1) : var_2))))));
        var_42 = (max(var_42, 1));
        arr_51 [i_16] [i_16] = ((((~(arr_38 [14] [i_16 + 1] [i_16]))) >> (((arr_38 [i_16 - 1] [i_16 - 2] [i_16]) & (arr_42 [i_16 - 1] [i_16] [i_16])))));
        var_43 += var_4;
        var_44 += (max(1982221662428216031, (max(((max(var_5, (arr_11 [2] [i_16] [i_16])))), ((var_4 ? var_0 : var_17))))));
    }
    var_45 = (((((!var_19) <= var_8)) ? var_5 : var_18));
    var_46 = min((min(((45824 ? var_5 : var_10)), (max(2147483647, var_10)))), var_3);
    /* LoopNest 2 */
    for (int i_17 = 2; i_17 < 9;i_17 += 1)
    {
        for (int i_18 = 2; i_18 < 11;i_18 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 8;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 10;i_20 += 1)
                    {
                        {
                            arr_62 [1] [i_18] [i_19] [i_20] [i_17 + 3] = (max((arr_34 [i_17] [i_19] [i_20]), (min((((arr_13 [i_17]) ? var_1 : 28672)), (((var_5 ? var_12 : var_0)))))));
                            var_47 = (max((!var_19), (arr_31 [16] [i_17])));
                        }
                    }
                }
                arr_63 [11] [8] = (max((var_1 <= -965), ((((max((arr_5 [i_17] [i_18]), var_9))) ? ((max((arr_5 [4] [i_17]), var_18))) : (arr_32 [i_17] [0] [i_18])))));
            }
        }
    }
    #pragma endscop
}
