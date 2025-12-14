/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (16186 / -1);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [0] &= (((((min(var_6, (arr_0 [i_0]))))) / ((5528856811907196638 >> (((arr_2 [i_1] [i_0]) - 168))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        var_18 = (((((max(-3023, 174)))) | ((var_13 * (arr_1 [i_3 + 1])))));
                        var_19 = var_7;
                        var_20 = (((var_2 * var_11) >> (((arr_6 [i_3] [i_0]) / var_2))));
                        arr_9 [i_0] [i_0] [6] [1] = ((var_10 ? ((((var_1 | var_0) | (arr_3 [i_0] [i_0] [i_0])))) : (min(2828223846, ((((arr_0 [i_0]) != (arr_2 [1] [i_3 + 2]))))))));
                    }
                }
            }
            var_21 = (max(((81 != (((82 != (arr_8 [i_0] [i_0] [4])))))), var_7));
            arr_10 [i_0] = 31490;
            arr_11 [i_0] [4] &= var_13;
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            arr_15 [i_0] [i_0] = ((min((((arr_5 [i_0] [5] [i_0]) || (arr_8 [i_0] [i_0] [3]))), (174 || var_13))));
            var_22 = ((82 ? ((((arr_8 [i_4] [i_4 - 1] [i_0]) | (arr_8 [i_0] [i_0] [i_4 - 1])))) : (min(3022706914, 69))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] [16] [16] [16] = (((arr_8 [i_4 - 1] [i_5] [i_7]) <= 174));
                            arr_24 [7] [7] [17] [i_0] [i_5] [i_6] [i_7] = (max((((arr_17 [i_4 - 1] [i_4 - 1] [i_4]) / var_13)), ((((arr_0 [i_4 - 1]) + (arr_6 [i_4 - 1] [i_0]))))));
                            var_23 &= (max(var_15, ((min((arr_17 [i_7] [i_6] [i_4 - 1]), 47617)))));
                            var_24 = ((((max(((169 ? 47617 : 82)), (arr_3 [i_0] [i_4 - 1] [i_4 - 1])))) ? ((((197 * (arr_1 [i_7]))) / ((max((arr_1 [i_7]), var_1))))) : ((max(186, 136)))));
                        }
                    }
                }
            }
            arr_25 [i_0] [i_0] = (min((max((arr_5 [i_0] [i_4 - 1] [i_4 - 1]), (arr_8 [i_4 - 1] [i_4 - 1] [i_4 - 1]))), (((arr_5 [i_0] [i_4 - 1] [i_4 - 1]) | (arr_5 [i_0] [i_4 - 1] [i_4 - 1])))));
        }
        arr_26 [i_0] [i_0] = (((((58 ? ((min(var_11, (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : var_1))) ? (max((arr_20 [i_0] [i_0]), (min((arr_13 [i_0] [i_0] [i_0]), (arr_19 [7] [i_0]))))) : 170));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_25 = (arr_21 [i_8] [i_9] [1] [i_8] [1]);
            var_26 = (var_15 != var_15);
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            var_27 = (((((arr_13 [i_8] [i_10] [i_10]) + 2147483647)) >> (((((arr_1 [17]) ? (arr_12 [i_8] [i_10]) : -453943084)) - 2865175145))));
            arr_35 [i_8] = var_8;
            var_28 = (max(var_28, (arr_13 [i_8] [i_10] [i_8])));
            var_29 &= 82;
        }
        arr_36 [2] [2] &= ((var_8 * ((((arr_18 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) && (arr_32 [i_8]))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                {
                    arr_42 [i_8] = ((170 ? (-1456992127 / 69) : (arr_30 [i_11] [i_8])));
                    arr_43 [i_11] [i_8] = ((var_5 ? (((arr_14 [i_8] [i_11]) | (arr_17 [i_8] [i_11] [i_12]))) : (arr_31 [i_12] [12] [12])));
                    arr_44 [i_8] [i_8] = ((var_2 / (arr_7 [i_8])));
                    var_30 = (min(var_30, (arr_39 [i_8] [i_12])));
                }
            }
        }
    }
    #pragma endscop
}
