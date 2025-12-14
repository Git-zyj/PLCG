/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((var_3 ? var_6 : var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = var_10;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, (((((((arr_4 [i_2] [i_2] [i_2 + 4]) >> (((arr_4 [i_2] [i_2] [i_2 - 1]) - 39513))))) ^ ((-(((arr_9 [i_0] [i_1]) ? var_7 : (arr_11 [i_2] [i_2 + 1] [i_2] [i_2] [i_0]))))))))));
                                var_14 = ((((((arr_12 [i_4] [i_4 + 3] [i_2] [i_4 + 2] [i_4 - 3] [3] [i_4 + 2]) + (arr_4 [i_2 - 1] [i_1 - 3] [i_1 - 3])))) ? (arr_11 [i_2] [i_2] [i_2] [i_3] [i_2]) : ((((arr_3 [i_2] [i_4 - 2]) || (arr_2 [i_1 - 3]))))));
                                arr_15 [i_2] [i_1] [i_2] [i_0] [i_4] [i_4] = (arr_2 [i_2]);
                                arr_16 [i_2] = ((var_7 ? var_3 : ((var_3 ^ (((arr_12 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3] [i_4]) & var_9))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_19 [i_5] = ((!((min(var_5, var_7)))));
        var_15 = (min(var_15, (((+(((arr_18 [i_5] [i_5]) ? (((arr_18 [i_5] [i_5]) ? (arr_18 [i_5] [i_5]) : (arr_17 [1]))) : var_8)))))));
        arr_20 [i_5] = (arr_18 [i_5] [i_5]);
        var_16 = (min((arr_17 [i_5]), (arr_17 [i_5])));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_17 = (((((arr_18 [i_6] [i_6]) >> (((((arr_17 [i_6]) ? var_10 : var_2)) - 63)))) % (((((max(var_2, (arr_17 [i_6])))) << (((arr_17 [i_6]) / var_9)))))));
        var_18 = ((min((arr_21 [i_6] [i_6]), (arr_21 [i_6] [i_6]))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 13;i_8 += 1)
            {
                {
                    arr_31 [i_8] [i_7] [i_7] [i_6] = (((((arr_21 [i_7 - 1] [i_7 - 1]) ? (arr_27 [i_7 - 1] [i_7 - 1] [i_8 - 3] [i_8 - 3]) : (arr_21 [i_7 - 1] [i_7 - 1]))) >> (((arr_21 [i_7 - 1] [i_7 - 1]) ? (arr_27 [i_7 - 1] [i_7 - 1] [i_8 - 3] [i_8 - 3]) : (arr_21 [i_7 - 1] [i_7 - 1])))));
                    var_19 = (((20563 / (min(44633, 1183177006)))));
                    arr_32 [0] = (((var_8 & var_0) / (arr_29 [i_7 - 1])));
                    var_20 = ((((arr_26 [i_7 + 1] [i_7 + 1]) & (arr_21 [i_7 - 1] [i_7 + 1]))));
                }
            }
        }
    }
    for (int i_9 = 3; i_9 < 18;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 4; i_10 < 18;i_10 += 1)
        {
            var_21 = (arr_40 [2]);
            arr_41 [i_9] = (((arr_39 [i_9] [i_10 + 2] [i_9]) ? ((((arr_33 [i_10]) << (((arr_34 [i_9 + 3]) - 14161203598400673301))))) : ((min((arr_33 [i_10 - 1]), var_0)))));
        }
        var_22 = ((((((arr_34 [i_9 - 1]) % (arr_34 [i_9 + 3])))) ? (((min((arr_39 [i_9 + 2] [i_9] [i_9 + 2]), (arr_38 [i_9] [15] [i_9 + 1]))))) : (((arr_34 [i_9 - 1]) + (arr_34 [i_9 - 1])))));
        var_23 = ((((max(var_6, var_9) | (((arr_34 [i_9]) * var_4))))));
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                {
                    arr_48 [3] [i_11] [i_11 - 2] [3] = (((arr_38 [i_9 + 3] [i_11 - 1] [9]) + ((min((arr_43 [i_9 - 3] [i_11 + 1]), (arr_38 [i_9 + 1] [i_11 - 1] [i_11]))))));
                    arr_49 [i_9] [18] [9] = (!48450);
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            {
                                arr_54 [i_9] [i_9] [i_9] [i_13] [i_9 - 1] [i_9 - 2] [i_9] = (((arr_50 [i_11] [i_13] [i_13] [i_14]) & (arr_33 [i_12])));
                                var_24 = ((!(arr_43 [i_11 - 2] [i_9 - 3])));
                                var_25 = ((var_2 == ((((((var_3 > (arr_51 [i_13] [i_13] [i_9] [i_13]))))) ^ (var_9 / var_2)))));
                                var_26 = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_15 = 3; i_15 < 18;i_15 += 1) /* same iter space */
    {
        var_27 = var_0;
        arr_59 [i_15] = (arr_47 [i_15] [i_15 + 2] [i_15 + 1] [i_15]);
        arr_60 [i_15] [i_15] = (((((var_5 ? (arr_44 [i_15 + 1]) : (arr_44 [i_15 + 1])))) != ((27980 ? 16242 : ((-3508285656208478758 ? 107 : (arr_34 [18])))))));
        arr_61 [i_15] = (arr_44 [i_15]);
    }
    var_28 = var_1;
    var_29 = var_5;
    #pragma endscop
}
