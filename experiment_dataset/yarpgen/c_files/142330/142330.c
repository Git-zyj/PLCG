/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 += (arr_0 [i_0] [i_0]);
                    var_16 = (arr_3 [i_0]);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_17 = (min(var_17, ((((~var_5) << (((((arr_6 [i_3] [i_3]) + 72)) - 20)))))));
        var_18 -= 15;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            arr_20 [i_3] [i_4] [i_6] [i_6] [i_3] = var_6;
                            var_19 += (((arr_5 [i_6] [i_3] [i_3]) / (arr_12 [i_3] [i_3] [i_3] [i_3])));
                            var_20 = var_6;
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            var_21 -= (min((min(((min(49, var_9))), ((~(arr_11 [i_4] [i_6] [i_4]))))), (arr_18 [i_3] [i_4] [i_5 - 2] [i_6] [i_3])));
                            arr_23 [i_8] [i_5] [i_5] [i_6] [i_3] &= var_0;
                            arr_24 [i_3] [i_3] [i_4] [i_5] [i_3] [i_8] = (arr_15 [i_3]);
                            arr_25 [i_3] [i_5] [i_6] [i_8] = (min((max((arr_1 [i_4] [i_5 - 1]), (arr_1 [i_5] [i_5 - 1]))), 57));
                        }

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_22 = (min(var_22, (((var_4 + ((var_3 ? var_14 : ((min(1, var_9))))))))));
                            var_23 ^= ((~(arr_5 [i_9] [i_6] [i_5])));
                            var_24 = (max(var_24, (((((20267 >> (((20257 ^ var_5) + 20229)))) >= ((((((arr_13 [i_9] [i_5 + 1] [i_4] [i_3]) ? 18446744073709551601 : var_5)) >= (-26 ^ var_9)))))))));
                            arr_29 [i_3] [i_3] [i_5] [i_6] [i_9] [i_3] [i_4] = min((-15 - -7525603855609844039), ((((~-75) ^ 0))));
                        }
                        var_25 -= (min(var_6, (min(((17179869183 ? 0 : var_2)), (((arr_9 [i_6]) * var_13))))));
                    }
                }
            }
        }
        var_26 = (min(var_26, ((max((((arr_27 [i_3]) ? var_0 : (arr_27 [i_3]))), ((((arr_2 [i_3] [i_3] [1]) ^ (arr_27 [i_3])))))))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        var_27 = 1284224298;

        /* vectorizable */
        for (int i_11 = 1; i_11 < 8;i_11 += 1)
        {
            var_28 = (((0 ? var_10 : var_14)));
            var_29 = var_5;
            var_30 -= (((arr_19 [i_10] [i_10] [i_11] [i_11 + 1]) >= var_7));
            arr_34 [i_11] [i_11] = 8215866045839816312;
            var_31 = (((19 ^ 167) ^ 1));
        }
        for (int i_12 = 1; i_12 < 10;i_12 += 1)
        {
            var_32 = ((((var_13 ? (arr_7 [i_12 - 1]) : (arr_7 [i_12]))) ^ ((var_1 ? var_2 : (((arr_7 [i_10]) ? (arr_36 [i_12] [i_10]) : (arr_15 [i_10])))))));
            arr_37 [i_10] = (min(((var_0 ? var_3 : ((1 ? var_11 : 9743058801629323031)))), ((((arr_5 [i_12 - 1] [i_12] [i_12 + 1]) ? (arr_5 [i_10] [i_10] [i_12 - 1]) : (arr_5 [i_12] [i_12] [i_12 - 1]))))));
        }
        var_33 = (min(var_33, ((((-8215866045839816313 + 9223372036854775807) >> (28643702315685997 - 28643702315685990))))));
    }
    var_34 = ((var_10 ? (((!(((var_11 ? var_1 : (-9223372036854775807 - 1))))))) : var_13));
    #pragma endscop
}
