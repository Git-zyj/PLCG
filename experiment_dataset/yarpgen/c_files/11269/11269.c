/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(var_16, (((((-(arr_0 [14]))) / ((-((var_8 ? (arr_0 [6]) : (arr_1 [i_0] [i_0]))))))))));
        var_17 = ((-((((max(3899, 30272))) ? (arr_0 [i_0]) : (var_5 <= 461234583)))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = var_4;
        arr_5 [i_1] = (53498 > 17562816154269109060);
    }
    for (int i_2 = 3; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_18 *= (((((arr_6 [i_2 + 1] [i_2]) ? (arr_6 [i_2] [i_2 + 2]) : var_11)) <= (var_5 / 3903)));
        var_19 = ((((((-(arr_1 [i_2] [i_2]))))) <= ((+(((arr_6 [11] [1]) ? var_7 : (arr_0 [6])))))));
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    {
                        var_20 = (max(var_20, ((((arr_12 [i_3 + 3] [i_3] [i_5 - 1] [i_3]) * -252)))));

                        /* vectorizable */
                        for (int i_6 = 4; i_6 < 10;i_6 += 1)
                        {
                            var_21 = (min(var_21, (arr_7 [i_2 - 1])));
                            var_22 = ((((~(arr_12 [i_2] [i_3] [i_5] [i_6]))) << (((arr_11 [i_2] [i_3]) - 190))));
                        }
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            arr_23 [i_7] [i_4] [i_7] |= var_8;
                            var_23 = (var_6 ? (arr_9 [i_2] [i_3] [i_5]) : (((~var_0) % ((var_12 & (arr_12 [7] [i_3] [i_4] [i_5]))))));
                            var_24 = arr_19 [i_2] [i_7 - 1] [13] [i_4 - 1] [i_5 + 1];
                            var_25 = var_2;
                        }
                        var_26 = (((max(var_6, -762195704))));
                        var_27 = (max(var_27, ((((((arr_17 [i_2] [i_4 - 1] [i_2 - 3] [9]) | (((arr_18 [i_2 - 3] [i_2] [i_2] [i_2]) ? -762195688 : var_6)))) / var_14)))));
                        var_28 = ((min(((var_4 ? 3250082459 : 233)), ((((arr_3 [i_5] [i_3]) != (arr_11 [i_2] [2])))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 12;i_10 += 1)
                {
                    {
                        var_29 *= 245;
                        arr_31 [i_8] [i_8] [i_9 - 1] [i_8] |= 762195686;

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            arr_35 [i_2 - 1] [i_8 + 1] [i_9] [i_9] [i_11] = arr_3 [i_2] [i_8 - 2];
                            var_30 = (arr_9 [1] [i_8] [i_10]);
                            var_31 = (((arr_33 [i_10 + 1] [i_8 - 2] [i_8 - 1] [i_2 - 2] [i_2 - 1]) | (arr_29 [i_10 + 1] [i_9] [i_8 - 2] [i_2 + 3])));
                            var_32 = var_0;
                        }
                        arr_36 [i_2] [i_2] [i_2] [i_9] = (arr_34 [i_9] [12] [i_9] [i_10] [i_10]);
                        arr_37 [7] [i_9] = ((-((-(((arr_21 [i_9] [i_10] [i_9] [i_9] [i_8] [i_2 + 1] [i_9]) ^ 3008247512463407218))))));
                    }
                }
            }
        }
        var_33 = (~762195704);
    }

    for (int i_12 = 4; i_12 < 23;i_12 += 1)
    {
        var_34 = (arr_39 [i_12]);
        var_35 = ((949446929 ? (arr_38 [i_12 - 3]) : 36655));
    }
    #pragma endscop
}
