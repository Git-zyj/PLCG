/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 ^= ((((min((((var_3 == (arr_0 [i_0])))), (max(27, 960))))) != 42097));
        var_12 = (min(var_12, ((42092 ? 23439 : 23448))));
        var_13 ^= (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_14 = (((((((min(23444, var_2))) ? 6567769921194485982 : ((min(var_0, 42096)))))) || var_8));
        arr_7 [i_1] [i_1] = (max((((!(((var_6 << (215 - 206))))))), (max(-var_9, ((max(23440, (arr_1 [i_1]))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_15 ^= ((~(arr_1 [i_3 + 2])));
                        arr_15 [i_1] [i_2] [i_3 + 1] [i_4] = ((((min((arr_14 [i_3 + 2] [i_3 + 2] [i_3 - 1]), var_3))) ? (min((arr_14 [i_3 + 1] [i_3 - 2] [i_3 - 2]), (arr_14 [i_3 + 2] [i_3 + 1] [i_3 - 1]))) : var_4));
                        arr_16 [i_3] = (min((~var_1), (min((!255), (max((arr_1 [i_2]), 1105178676))))));
                        arr_17 [i_1] [i_2] [i_3] [i_4] = 2421788568;
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_22 [i_5] [4] = ((var_2 ? ((max((arr_12 [i_3 + 2] [i_3 + 1] [i_3 - 1]), (-127 - 1)))) : 23448));
                        var_16 ^= ((((((((arr_5 [i_2]) ? var_2 : (arr_11 [i_1] [i_2] [i_3])))) ? (((arr_6 [i_2] [21]) ? (arr_18 [i_3]) : var_9)) : (arr_13 [i_2] [i_2] [i_3 + 1] [i_5] [i_1] [i_5]))) ^ ((-(min((arr_5 [i_1]), var_9))))));
                        var_17 = -42092;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_18 = 67108863;
                                arr_27 [5] [i_6] [i_2] [i_3] [i_2] [i_6] [3] = 238;
                            }
                        }
                    }
                    var_19 = (max(var_19, var_0));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                {
                    arr_32 [i_8] = (arr_2 [i_1]);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_20 ^= var_4;
                                arr_37 [i_1] [i_11] [i_9] [i_9] [i_9] [i_8] = (min(((-(arr_6 [i_8] [i_10]))), (arr_9 [i_1] [19])));
                            }
                        }
                    }
                    var_21 ^= (max(0, 1));
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        var_22 = var_7;
        var_23 = (arr_10 [i_12] [i_12]);
        var_24 = ((-(((arr_39 [i_12] [i_12]) - var_4))));
    }
    var_25 = (max(var_25, 16777215));
    #pragma endscop
}
