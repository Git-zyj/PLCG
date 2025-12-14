/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_20 ^= -7898;
        arr_3 [i_0] [i_0] = var_6;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_21 = (max(var_21, ((min(((((7898 ^ (arr_6 [i_1] [i_2] [i_1]))) | (min(var_13, var_1)))), (arr_0 [i_2]))))));
                var_22 = (max(var_22, (arr_1 [i_1] [23])));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_23 = (arr_4 [3]);
                    var_24 += 46;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_25 += ((((28129 ? -20316 : var_6)) >= ((((arr_5 [i_1]) < 7897)))));
                                arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_8 [i_1] [7] [2]) >> var_9));
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = var_0;
                                var_26 ^= 7891;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_19 [i_1] [i_2] [i_2] [i_1] &= (arr_0 [i_1]);
                    var_27 = (((((arr_8 [i_1] [i_2] [i_6]) ? (arr_9 [i_1] [i_2] [i_6] [i_1]) : -7902)) & ((~(arr_8 [i_1] [i_2] [0])))));
                    var_28 -= ((var_3 ? 226000671 : (arr_5 [i_2])));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 7;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_24 [i_1] [2] [i_6] [2] [2] = var_5;
                                arr_25 [i_1] [i_2] [i_6] [5] [i_7] [i_2] [i_8] = (arr_14 [i_1] [i_2] [i_2] [i_7 + 3] [i_8] [1] [i_7 - 1]);
                                var_29 *= ((arr_10 [i_1] [i_1] [i_7 + 2] [i_7]) <= var_3);
                            }
                        }
                    }
                }
                var_30 = ((-7897 ? (arr_17 [i_2] [i_1]) : (min((((arr_10 [i_1] [i_2] [i_2] [i_1]) & (arr_20 [i_1]))), var_13))));
            }
        }
    }
    var_31 = (-2147483647 - 1);
    var_32 -= (((((-871533259 ? -28 : (-127 - 1)))) ? ((((max(2147483647, 219)) | 2174457314))) : ((var_17 ? (((var_18 ? var_15 : -513586132))) : ((1 ? -786129416 : 278008449267657873))))));
    #pragma endscop
}
