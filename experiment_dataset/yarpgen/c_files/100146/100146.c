/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 8518368875089051372;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_12 [i_1] = (((arr_3 [i_2 + 1] [i_1 - 1]) ? (arr_3 [i_2 + 1] [i_1 - 1]) : (arr_3 [i_2 + 2] [i_1 + 2])));
                        arr_13 [i_0 - 1] = (((((849168322 ? 16775706742682295243 : -5036792540757816330))) ? (((~(arr_9 [i_0])))) : ((-3680 ? var_3 : var_4))));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_17 [i_4] [12] = (((arr_2 [i_2 - 1] [i_1 + 1]) ? var_6 : (arr_2 [i_2 - 1] [i_1 - 1])));
                        arr_18 [i_4] [6] [i_2] [6] = ((var_4 ? (arr_16 [i_2 - 1] [i_1] [i_0 - 1] [i_1 + 1]) : (arr_16 [i_2 - 2] [8] [i_0 + 1] [i_1 - 1])));
                        var_11 = (max(var_11, ((((arr_6 [i_0 - 1] [i_1 + 1] [i_2 - 2]) ? (arr_6 [i_0 - 2] [i_1 + 2] [i_2 + 2]) : (arr_6 [i_0 - 2] [i_1 + 2] [i_2 + 1]))))));

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_12 = (min(var_12, (arr_0 [i_0 - 2] [i_5])));
                            var_13 ^= arr_0 [9] [i_2];
                            arr_21 [i_0] [i_1] [13] [i_4] [i_4] = var_0;
                            var_14 = (((arr_19 [i_5] [7] [7] [i_2] [i_2] [i_1] [11]) ? (arr_0 [i_2 - 1] [i_4]) : (arr_19 [i_2 - 1] [i_2 + 1] [11] [i_2] [i_2] [i_2 + 1] [10])));
                        }
                    }
                    var_15 = (arr_8 [i_0 + 1] [i_2 + 2] [i_1 + 2] [1]);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_16 += (((arr_5 [i_0 - 2] [i_1 - 1] [i_6 - 1]) ? -756165993 : (arr_5 [i_0 + 1] [i_1 - 1] [i_6 - 1])));
                                var_17 = (arr_23 [i_0 + 1] [i_1 + 2] [i_2 + 1]);
                                arr_30 [i_0] [5] [i_2 - 1] [i_6 - 1] [i_2] = (((1 ? (arr_3 [i_0] [i_0]) : 1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_18 = (((arr_28 [i_0 - 1] [i_0 + 1] [i_2 + 2] [i_8 + 2] [i_8]) ? (arr_29 [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_10 [i_0 - 2] [10] [11] [9])));
                                var_19 = (var_6 * (arr_33 [i_2 - 2]));
                                arr_36 [i_0] [8] [9] [i_0] [i_0] &= (arr_26 [11] [i_1 + 1] [i_1 + 1] [6] [3]);
                            }
                        }
                    }
                }
            }
        }
        var_20 = (((~var_8) >> (-1691509332 - 18446744072018042227)));
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    {
                        var_21 = ((var_2 - ((((arr_32 [i_12] [i_11] [11] [i_0]) * var_5)))));
                        arr_44 [10] [i_12] [i_11] [i_12] [i_10] = ((-(((var_9 && (arr_25 [10] [i_10] [3]))))));
                        var_22 = ((var_4 - (((arr_10 [5] [5] [5] [i_0]) ? var_2 : 1671037331027256373))));
                    }
                }
            }
        }
        var_23 = ((~-3288305196756063841) ^ var_1);
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 1;i_13 += 1)
    {
        var_24 = (!var_2);
        var_25 += (((-9436 ? (arr_46 [i_13]) : var_2)));
    }
    for (int i_14 = 0; i_14 < 11;i_14 += 1)
    {
        var_26 |= ((((arr_22 [i_14]) ? -849168322 : 849168334)));
        var_27 += (((((((-1048450879 ? (arr_10 [i_14] [11] [i_14] [8]) : 739487571555424706))) ? 1 : 503112308)) / (arr_35 [i_14] [4] [1] [2] [i_14] [i_14])));
        var_28 = (max(769842904, 1));
    }
    var_29 = (max(var_29, var_8));
    #pragma endscop
}
