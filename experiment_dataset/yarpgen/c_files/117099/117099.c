/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_10 = 18446744073709551615;

            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_11 [2] [4] [i_0] [i_3] = 1;
                    arr_12 [i_0 + 1] [i_0] [i_2] [i_3] = (arr_8 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1]);
                    arr_13 [6] [i_3] [2] [i_1] [14] [6] &= -25521;
                    var_11 = (((arr_5 [i_2 - 2] [i_0] [i_0 + 2] [i_1]) ? (arr_5 [i_2 - 2] [i_0] [i_0 + 2] [i_3]) : (arr_5 [i_2 - 2] [i_0] [i_0 + 2] [2])));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    var_12 = (max(var_12, ((((arr_6 [i_0 - 1] [i_2 + 1] [12] [10]) ? (arr_6 [i_0 + 1] [i_2 - 2] [7] [i_4]) : 1)))));
                    arr_16 [i_0 + 2] [6] [i_2 + 1] [i_4] [i_0] = var_2;
                    arr_17 [i_0] = (((var_5 ? 1 : var_1)));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_13 = (((arr_0 [i_0 - 1]) - (arr_0 [i_5])));
                    arr_20 [i_0 + 2] [i_0] [i_2 - 1] = ((-(arr_18 [i_0] [i_0])));
                    arr_21 [i_0] [i_1] [i_2] [i_5] = var_6;
                    arr_22 [i_0] [8] [3] [i_0] [i_0 + 1] = (!var_6);
                    var_14 = ((((32 ^ (arr_0 [i_0 + 1])))) ? var_1 : (arr_2 [i_0] [i_0 - 1]));
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_2 + 1] [1] [i_2 - 1] = 32;
                    arr_27 [i_0 + 3] [i_2] [i_0] [i_6] = (((arr_2 [i_0] [i_2 + 1]) ? var_5 : (((arr_23 [0] [1] [i_2] [i_2 - 2] [i_2]) ? var_3 : (arr_19 [i_6])))));
                    var_15 = (~5628317653844070410);
                }
                var_16 = (arr_3 [i_0]);
            }
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_17 = (min(((-(arr_23 [i_0 + 3] [1] [i_0 + 1] [i_0 - 1] [i_0 + 2]))), (((((arr_9 [i_0 + 2] [i_7] [i_0] [i_0] [i_7] [0]) / 109)) + ((var_0 ? var_0 : var_0))))));
            arr_31 [i_0] [i_0 - 1] [0] = (((~1) * ((~(arr_29 [9] [i_0])))));
            arr_32 [7] [i_0] = (((((min(var_7, var_5)))) ? (((((var_1 ? (arr_30 [i_7] [i_0]) : var_7))) ? (((!(arr_25 [i_0 - 1] [i_7] [i_7])))) : (arr_6 [i_0 - 1] [i_0 + 3] [i_0 + 1] [i_0 + 2]))) : 1));
        }
        /* vectorizable */
        for (int i_8 = 3; i_8 < 15;i_8 += 1)
        {
            arr_36 [i_0] = ((var_1 ? ((var_5 ? var_8 : 1)) : 1));
            var_18 = ((+((((arr_35 [i_0 + 1] [i_8 - 2] [i_8 - 1]) > -10739)))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {
                        var_19 = ((7 > ((1 ? var_4 : var_1))));
                        var_20 = ((var_0 || (arr_0 [i_0 - 1])));
                    }
                }
            }
        }
        var_21 = ((+(((arr_0 [i_0 + 1]) ? (arr_38 [i_0 + 1] [i_0] [i_0 + 1]) : (arr_38 [i_0 + 2] [i_0 - 1] [i_0])))));
        var_22 = (min(var_22, ((((min(1, (arr_24 [i_0] [1])))) ? (arr_19 [i_0 + 1]) : var_5))));
        var_23 *= ((!((min(216, -120)))));
    }
    var_24 = var_7;
    var_25 = ((((49264 ? var_3 : var_3)) ^ (~var_0)));
    var_26 = var_0;
    #pragma endscop
}
