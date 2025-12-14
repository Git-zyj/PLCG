/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_13 [i_0] [i_4] [i_2] [i_3] [i_4] = (((((var_0 ? 0 : var_5))) ? ((var_9 ? (arr_5 [7]) : var_11)) : (arr_7 [4])));
                            var_12 -= (arr_2 [i_0] [i_1]);
                            arr_14 [i_4] [i_3] [i_0] [3] [i_4] = (var_3 != var_2);
                        }
                        for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_3] [8] [i_0] [i_0] &= var_1;
                            var_13 = (min(var_13, (arr_3 [i_0] [i_0])));
                            var_14 = (var_8 || var_2);
                            var_15 = ((((-1279185222 ? 188 : 11503811659989768979))) ? (~var_2) : 12);
                            var_16 = (min(var_16, (arr_5 [i_5])));
                        }
                        for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_17 ^= ((var_1 | (var_7 > var_3)));
                            var_18 |= (var_10 == var_4);
                            var_19 = ((((var_6 ^ (arr_9 [7] [i_1] [2] [i_1] [i_1])))) ? var_1 : ((var_1 ? var_6 : var_11)));
                            arr_22 [10] [i_3] [i_2] [i_1] [i_1] [i_0] = var_2;
                        }
                        var_20 = ((var_0 ? var_6 : 18446744073709551615));
                    }
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        var_21 -= var_8;
                        var_22 = (((max(((var_4 ? var_1 : var_0)), ((min((arr_7 [8]), var_7))))) & (min(var_8, ((~(arr_1 [i_7])))))));
                    }
                    arr_25 [i_0] [i_1] [i_2] = (min((arr_9 [i_2 - 3] [4] [i_2] [i_2 - 2] [i_2 + 1]), ((-(arr_9 [i_2 - 3] [i_2] [0] [i_2 - 1] [i_2 + 1])))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_23 = (min(var_23, (((13446720130884855695 ? ((var_2 - (arr_6 [i_8] [4] [i_0]))) : ((((arr_4 [i_8] [i_2] [i_1]) ? (arr_15 [i_8]) : (arr_20 [i_0] [i_1] [i_1] [i_2] [i_8])))))))));
                        arr_28 [i_0] [i_1] [i_2] [i_8] = (arr_21 [i_2]);
                        var_24 = (((arr_11 [i_2] [i_8] [i_2 - 3] [i_2] [i_2] [i_2 + 1]) ? (arr_11 [i_2] [i_8] [i_2 - 3] [i_2] [i_2] [i_2 - 1]) : (arr_11 [i_1] [i_8] [i_2 - 3] [i_2] [i_2] [i_2 - 2])));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_25 = ((var_4 ? var_3 : (arr_4 [i_0] [i_1] [i_2])));
                        var_26 = var_1;
                        var_27 *= (arr_2 [i_9] [1]);
                        arr_33 [1] [7] [i_2] [i_2] = (!var_10);
                    }
                    var_28 = (max(var_28, var_4));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_29 = ((min(var_4, (var_9 || var_11))));
                                var_30 = (max(var_30, var_8));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 &= (var_5 ? (((var_6 ? var_8 : var_8))) : var_10);
    #pragma endscop
}
