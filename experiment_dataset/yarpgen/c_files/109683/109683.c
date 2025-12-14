/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (((!(arr_0 [i_0]))));
        var_14 = (~(((arr_1 [i_0]) & (min(-31445, 0)))));
        var_15 = (var_10 || ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        var_16 = ((((var_8 ? ((var_2 ? var_2 : 644028474)) : (arr_0 [i_0])))) ? var_10 : var_2);
        arr_2 [i_0] = (((((((arr_0 [i_0]) ? 39805 : -125))) ? 39810 : (arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        var_17 = (((arr_4 [i_1 + 1]) <= (arr_4 [i_1 - 4])));
        var_18 = 8;
        arr_6 [i_1] = ((((-96 ? 517911115 : var_0)) ^ (arr_5 [i_1])));

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            arr_9 [5] [i_1] [i_1] = (arr_3 [i_1 - 1]);
            var_19 = ((arr_4 [i_1 - 2]) ? ((~(arr_4 [i_1 + 1]))) : (arr_1 [i_1 - 4]));
        }
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_20 = (min(var_20, (arr_13 [i_3 - 3] [i_3 - 1] [13] [i_3])));
                        var_21 = -644028474;
                        var_22 = ((((var_6 ? (arr_4 [15]) : var_1)) != 31445));
                    }
                }
            }
            var_23 *= ((25165824 ? var_0 : var_9));
            var_24 = var_6;
        }
        /* LoopNest 3 */
        for (int i_6 = 4; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                        {
                            var_25 = (-644028474 < ((((arr_1 [i_1]) && (arr_21 [i_9] [i_8] [i_6 + 1] [2])))));
                            var_26 = ((((-31445 ? (-127 - 1) : (arr_12 [i_8] [i_1] [i_1])))) ? ((((-16256 || (arr_19 [i_1] [i_1]))))) : 406110030);
                            arr_30 [i_9] [i_1] [i_7] [i_1] [i_1] = ((~(((arr_14 [i_1] [i_6] [i_7] [i_8]) & (arr_26 [i_9] [i_8] [i_8] [i_7] [i_6] [i_1])))));
                        }
                        for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_1] [i_6 + 3] [i_8] [i_1] = (!var_9);
                            var_27 ^= ((-6765131878012073650 ? (arr_7 [i_10]) : (arr_8 [i_10])));
                            arr_36 [i_1] [i_1] [i_1] = (!var_10);
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            arr_39 [14] [i_6] [5] [i_1] [17] [i_8 + 2] [i_11] = (((arr_11 [i_11] [i_8 - 2]) ? (arr_11 [i_8] [i_8 - 2]) : (arr_25 [i_1] [i_11] [i_8 - 2] [i_1])));
                            var_28 = (var_6 ^ (arr_18 [i_1 - 3]));
                        }
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_29 = (11889 ^ var_6);
                            var_30 = (arr_31 [i_1] [i_7] [9]);
                            arr_43 [i_6] [i_1] [i_8] = var_6;
                        }
                        var_31 = (~0);
                    }
                }
            }
        }
    }
    var_32 = var_7;
    #pragma endscop
}
