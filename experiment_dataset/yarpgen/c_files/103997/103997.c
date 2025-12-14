/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 8684;
    var_15 = 175;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (max(var_16, 38242));
                var_17 = var_4;
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {

                    for (int i_5 = 2; i_5 < 7;i_5 += 1)
                    {
                        arr_15 [i_2] [i_2] [i_2] [i_2] = ((~(~1)));
                        var_18 -= (arr_2 [i_2]);
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_18 [i_2] [i_4] [i_3] [i_2] = (arr_16 [i_2] [3] [i_3] [i_3] [9] [i_6]);
                        var_19 = (max(var_19, 6144726852969839911));
                        var_20 = (max(var_20, ((((arr_10 [i_6] [i_2]) ? (((((5583535736068316935 ? (arr_1 [9]) : var_6))) ? var_11 : (((arr_1 [i_4]) ? -1750091693923165717 : (arr_10 [i_6] [i_2]))))) : ((max(1, ((min(var_13, 1)))))))))));
                        var_21 = (max(-14775, (min(var_8, 1))));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_22 = ((-8684 ? var_6 : (arr_19 [i_2])));
                            arr_24 [9] [i_2] [i_2] [i_7] [i_8] = 127;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_28 [i_2] = var_3;
                            var_23 = (((((arr_26 [i_2] [i_3] [i_3]) <= var_5)) ? 80 : (arr_25 [i_3] [i_3] [i_3] [i_3] [i_3])));
                            arr_29 [1] [i_2] [i_4] [i_2] [i_2] = -var_2;
                        }
                        arr_30 [6] [i_4] [i_3] [i_4] |= 185;

                        for (int i_10 = 1; i_10 < 8;i_10 += 1)
                        {
                            arr_33 [i_3] [i_7] [8] |= ((((((((((arr_10 [5] [i_10 + 2]) ? var_4 : 1)) + 2147483647)) << (((var_13 + 87) - 10))))) ? -1 : 0));
                            var_24 += ((((max(var_8, ((var_10 << (var_7 - 99)))))) & ((((max((arr_22 [i_4] [i_7]), (arr_26 [i_3] [i_3] [i_4])))) ? (min(var_12, var_13)) : var_8))));
                            arr_34 [i_2] [i_3] [1] [i_7] [i_2] = (((((2 ? ((1 ? 91 : 74)) : (arr_13 [i_2] [i_3] [1] [i_7] [i_10] [i_10 + 2])))) ? (var_10 + var_1) : (((23012 + 1) ? (((max((arr_26 [i_2] [i_3] [i_4]), 1)))) : ((var_0 ? var_5 : var_12))))));
                            var_25 = (max(var_25, 144));
                        }
                    }
                    arr_35 [i_2] [i_3] [i_2] = ((!(((214 ? (arr_27 [i_2] [i_2] [i_3] [i_4] [i_2]) : 246)))));
                }
            }
        }

        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_38 [i_2] = (((((42 ? (arr_21 [i_2] [i_11] [i_11] [i_2] [i_2]) : 7971661570941140377))) ? (arr_3 [i_2] [i_2] [i_11]) : var_11));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        {
                            arr_46 [i_2] [i_11] [i_12] [i_13] [i_14] [i_2] = arr_7 [1] [i_11] [i_11];
                            arr_47 [i_2] [i_2] = -15253;
                            arr_48 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_20 [i_2] [i_11] [i_12] [i_12] [i_12]);
                        }
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            var_26 |= (max((min(((max(-2673, var_0))), ((-6311671119399016235 ? var_2 : 3029547927)))), (!-var_12)));
            arr_51 [i_2] = ((2939261064641451477 ? ((((min(var_0, 14159))) ? (~var_3) : -1569190398)) : (((((var_8 ? 1223224241795217375 : var_2))) ? ((max(var_3, 9))) : var_4))));
        }
    }
    for (int i_16 = 0; i_16 < 11;i_16 += 1)
    {
        arr_54 [i_16] = -var_11;

        /* vectorizable */
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            arr_57 [4] [i_16] [i_17] |= (((((arr_55 [3] [3] [3]) ? var_3 : 405846865719601330)) <= (arr_2 [i_16])));
            arr_58 [i_16] [10] [i_16] = var_2;
        }
        var_27 = (min((!var_6), 1));
    }
    for (int i_18 = 2; i_18 < 12;i_18 += 1) /* same iter space */
    {
        var_28 = ((((max(((5288475446435425636 ? (arr_0 [i_18]) : (arr_59 [i_18]))), ((min((arr_60 [i_18]), (arr_1 [i_18]))))))) ? (((arr_60 [i_18 + 1]) ? 1 : ((max((arr_2 [i_18]), var_0))))) : 102));
        arr_61 [i_18 - 1] = (max(118, (max(var_12, var_5))));
        var_29 = (((arr_60 [i_18 - 1]) ? (arr_1 [i_18 - 1]) : var_8));
        arr_62 [i_18] = (((max((((var_11 ? var_1 : -3834113777093516662))), ((var_5 ? (arr_59 [i_18]) : 1)))) ^ ((((!(arr_60 [i_18 - 1])))))));
    }
    for (int i_19 = 2; i_19 < 12;i_19 += 1) /* same iter space */
    {
        arr_67 [i_19] = ((-4038371457307021431 ? 7436454617735857077 : 96));
        /* LoopNest 2 */
        for (int i_20 = 3; i_20 < 12;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 10;i_21 += 1)
            {
                {
                    arr_76 [i_19] [2] [i_20] [i_20] = 1535301519;
                    var_30 = (min((max(var_7, -1535301499)), (10361 > 9223372036854775807)));
                    var_31 = var_11;
                }
            }
        }
        var_32 = (arr_3 [i_19 - 2] [i_19] [i_19 - 1]);
    }
    #pragma endscop
}
