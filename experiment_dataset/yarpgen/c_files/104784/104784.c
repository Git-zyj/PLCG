/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_11 = (max(var_11, 1));
        arr_2 [2] |= (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_12 = (max(var_12, -1));
        arr_5 [i_1] = ((-(((arr_3 [i_1]) * 1))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_13 = (min(var_13, (arr_6 [i_2] [i_2])));
        var_14 ^= ((~((((((arr_4 [i_2] [i_2]) ? 0 : (arr_7 [i_2])))) ? ((((!(arr_7 [i_2]))))) : var_4))));
        var_15 = (max(var_15, (((~((((arr_4 [i_2] [i_2]) && (!var_10)))))))));
        var_16 *= (min(0, (((((arr_6 [i_2] [i_2]) && -4708)) ? (((!(arr_6 [i_2] [i_2])))) : ((((arr_6 [i_2] [i_2]) && (arr_4 [i_2] [i_2]))))))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_17 |= ((1 & ((((arr_15 [i_3] [i_4] [i_5] [i_6]) != 0)))));
                        var_18 *= (arr_16 [i_4] [i_5]);
                    }
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        var_19 = (max(var_19, ((max(((((max((arr_11 [i_5] [i_7]), (arr_12 [i_3] [i_5])))) ? (((122 ? (arr_9 [i_3]) : 1))) : (((arr_18 [i_3] [i_3] [i_4] [i_5] [i_5] [i_7]) ? (arr_17 [i_3] [i_4] [i_5] [i_7]) : (arr_12 [i_3] [i_4]))))), ((((arr_14 [i_4 - 3] [i_7 + 1]) * var_7))))))));
                        arr_22 [i_3] [i_3] = (max(var_9, var_7));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_20 = var_6;
                        arr_27 [i_3] [i_8] = ((0 ? (((arr_11 [i_4 - 2] [i_4 - 3]) ? (arr_11 [i_4 - 2] [i_4 - 3]) : (arr_11 [i_4 - 2] [i_4 - 3]))) : 1));
                    }
                    var_21 = var_7;
                    arr_28 [i_4] [i_5] = 1;
                    arr_29 [i_4] [i_4] [i_4] = (max((((-(((arr_18 [i_3] [i_4] [i_5] [i_5] [i_5] [i_5]) ? var_2 : var_8))))), ((var_8 / (arr_13 [i_4] [i_4 + 1] [i_4] [i_4 + 1])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    var_22 = -123;
                    arr_35 [i_3] [i_3] = ((((((((arr_19 [i_3] [i_3] [i_3] [i_9] [i_9] [i_10]) - (arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))) - (arr_23 [i_3] [i_3] [i_3] [i_3])))) ? (~var_3) : ((~(((arr_24 [i_3] [i_3] [i_9] [i_9] [i_9] [i_10]) ^ 1))))));
                    arr_36 [i_3] [i_9] [i_9] [i_10] = (arr_12 [i_3] [i_3]);
                    var_23 = (max(var_23, (arr_8 [i_3] [i_10])));
                }
            }
        }
        var_24 = (min(var_24, -var_1));
    }
    var_25 = 24081;
    var_26 = var_8;
    #pragma endscop
}
