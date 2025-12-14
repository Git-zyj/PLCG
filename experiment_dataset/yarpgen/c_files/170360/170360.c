/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (arr_1 [i_0 - 2] [i_0 - 2]);
                var_19 = (((arr_0 [i_0] [i_1]) >> (((max(-5740335172182303986, (!var_16))) - 308583177))));
                var_20 = (min(var_20, (((!((((((arr_4 [i_0]) | 240)) % (arr_4 [i_0])))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                arr_16 [i_1] [i_1] [i_2] = ((((((arr_3 [i_1] [i_2]) / 2))) & (~var_1)));
                                var_21 = (max(var_21, ((((((~(arr_11 [i_0] [i_0 - 1] [i_3 - 1] [0])))) ? (~var_5) : (((arr_11 [i_0] [i_0 - 2] [i_3 + 1] [i_4]) * (arr_11 [i_0 - 2] [i_0 + 1] [i_3 + 1] [i_3]))))))));
                                var_22 -= (((min((((5 ? (arr_14 [6] [i_1] [8] [i_3] [i_4] [i_1] [i_0]) : (arr_1 [i_1] [i_1])))), 1457935060))) ? var_8 : (min((arr_6 [8] [i_0 - 2] [i_0 - 2] [i_4]), (arr_3 [i_0] [i_3]))));
                            }
                            for (int i_5 = 0; i_5 < 10;i_5 += 1)
                            {
                                var_23 = (min((((~(arr_12 [6] [i_0 - 2] [i_0 + 1] [i_0] [i_3 + 1] [i_3 - 1])))), var_14));
                                var_24 -= (arr_12 [i_0] [i_1] [i_1] [i_2] [i_3 - 1] [i_5]);
                            }
                            for (int i_6 = 1; i_6 < 7;i_6 += 1)
                            {
                                arr_23 [5] [i_2] [i_2] [i_2] [i_2] = var_15;
                                arr_24 [i_2] [i_3] [0] [5] [i_1] [0] [i_2] = ((~(!var_8)));
                            }
                            var_25 &= ((((((!((((arr_21 [0] [i_1] [i_2] [i_3] [i_0 - 2]) ? (arr_10 [i_0] [i_1] [i_2] [i_3 + 2]) : (arr_12 [2] [i_1] [i_1] [i_2] [i_2] [i_3])))))))) ^ (((min(var_16, (arr_18 [i_0] [i_1] [i_1]))) - (arr_1 [i_3] [i_3 - 1])))));
                            arr_25 [i_2] = var_3;
                            var_26 *= (!(~228));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_30 [i_8] [i_7] [i_8] = (((((max((min(37, 220)), (!var_17))))) >= (arr_21 [i_0] [i_8] [3] [i_0] [i_0])));
                            var_27 = (max(var_27, ((((-((var_0 | (arr_2 [i_8])))))))));
                            var_28 = (min(var_28, ((min((((-(arr_1 [7] [i_1])))), var_4)))));
                            var_29 = ((-((((~var_15) != (((arr_9 [i_7] [i_8]) ? 244 : 19)))))));
                        }
                    }
                }
            }
        }
    }
    var_30 = (min(var_30, ((min(var_1, (((var_2 ? 14 : 973112299))))))));

    for (int i_9 = 1; i_9 < 13;i_9 += 1)
    {
        arr_34 [i_9] = 244;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {
                    arr_39 [i_9] = (i_9 % 2 == zero) ? ((((((min(var_12, (arr_33 [i_10] [i_9]))))) ? (min((((arr_37 [i_9] [7] [i_9]) >> (((arr_33 [i_11] [i_9]) - 3988228670)))), (arr_38 [i_9]))) : var_16))) : ((((((min(var_12, (arr_33 [i_10] [i_9]))))) ? (min((((arr_37 [i_9] [7] [i_9]) >> (((((arr_33 [i_11] [i_9]) - 3988228670)) - 3664064597)))), (arr_38 [i_9]))) : var_16)));
                    arr_40 [i_9] [i_9] [7] [i_11] = 67;
                    var_31 = (min((((arr_35 [i_9 - 1]) ? (arr_35 [i_9 + 1]) : (arr_35 [i_9 + 1]))), ((min(7, var_15)))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    {
                        arr_50 [i_12] = (((arr_48 [i_12] [i_13] [i_14] [i_12] [20]) ? ((var_9 ? var_14 : var_11)) : ((((arr_44 [i_12] [i_14] [i_12]) | 7010)))));
                        arr_51 [i_12] [i_13] [i_12] [i_15] = var_0;
                        var_32 = var_13;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 22;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                {
                    arr_58 [i_17] [i_16] [i_17] |= var_15;
                    var_33 = ((var_15 - ((90 ? var_1 : var_12))));
                }
            }
        }
    }
    for (int i_18 = 3; i_18 < 22;i_18 += 1)
    {
        var_34 = (min(((var_11 / (max(var_6, var_1)))), (((((max(63, var_17))) / 127)))));
        var_35 = (min(var_35, 4294967295));
        var_36 = (arr_59 [22]);
    }
    /* LoopNest 2 */
    for (int i_19 = 3; i_19 < 15;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 16;i_20 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_21 = 2; i_21 < 13;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 16;i_22 += 1)
                    {
                        {
                            var_37 = ((16 ? -63 : ((0 ? ((var_13 - (arr_41 [1]))) : ((-(arr_69 [i_19] [i_20] [0] [5])))))));
                            var_38 = var_14;
                            var_39 = (min(var_39, ((((((~var_10) || ((min(var_12, 24))))) ? (arr_62 [i_19] [i_19]) : (((var_14 < ((min(-68, var_2)))))))))));
                            var_40 = (max(var_40, ((((arr_56 [i_20] [i_20]) != ((60729 ^ (((arr_54 [i_19 - 2] [i_21 + 2] [i_22]) ? var_12 : (arr_54 [4] [i_21] [i_22]))))))))));
                            var_41 = (((arr_49 [i_19 - 2] [i_20] [1] [i_21] [1] [i_22]) != (min((min(var_6, var_12)), (((var_7 ? var_8 : 31442)))))));
                        }
                    }
                }
                var_42 &= var_5;
            }
        }
    }
    #pragma endscop
}
