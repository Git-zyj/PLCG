/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_9;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] = ((~(arr_6 [i_0 + 3] [i_0 + 3])));
                    var_18 = min(-12216, var_15);

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] = ((~(((arr_7 [i_3 + 1] [i_3 + 1]) ? (9223372036854775807 >> 0) : -1))));
                        arr_12 [i_3] = (((((-(arr_4 [i_3 + 2] [i_0 - 1])))) ? (268435455 < 98304) : -62219));
                        var_19 = (min(var_19, (min((((192 ? (arr_7 [i_2] [i_2]) : 79))), ((var_10 / (((var_3 ? (arr_9 [i_3] [i_3] [i_1] [i_1] [i_0 + 3] [5]) : (arr_7 [i_0 + 1] [i_0 + 1]))))))))));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_16 [i_4] [i_1] [i_2] &= var_14;
                            var_20 = ((min((((-9223372036854775807 ? var_6 : var_10))), (min((arr_6 [i_1] [i_2]), (arr_5 [i_4] [i_1] [i_1]))))));
                        }
                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_0 - 2] [i_0 + 2] [3] = -9223372036854775807;
                            var_21 += ((1 > (-2147483647 - 1)));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                        {
                            var_22 = (max(var_22, var_12));
                            var_23 = (max(var_23, var_1));
                            arr_23 [i_6] = (~var_9);
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
                        {
                            var_24 -= (((arr_6 [i_0 - 2] [8]) ? var_2 : -27));
                            var_25 += 57004;
                        }
                    }
                }
            }
        }
    }
    var_26 = var_4;
    var_27 = var_4;

    for (int i_8 = 4; i_8 < 16;i_8 += 1)
    {
        arr_28 [i_8 - 3] [i_8] = (max(((53656 ? var_4 : (arr_27 [i_8 - 3] [i_8 - 3]))), ((27 ? (arr_27 [i_8 + 1] [i_8]) : -2147483637))));
        var_28 -= (((arr_27 [i_8 + 1] [i_8 - 4]) ? (((!(arr_27 [i_8 - 1] [i_8 - 1])))) : (arr_27 [i_8 + 2] [i_8 - 4])));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            arr_39 [i_12] = 21822;
                            arr_40 [i_8] [i_8] [7] [i_11] [7] [i_12] = ((-(((arr_35 [5] [i_8 - 2] [i_8 + 1] [i_8]) ? (arr_35 [i_8 - 2] [i_8 - 3] [i_8 - 2] [i_8 - 2]) : (arr_35 [i_8] [i_8 + 1] [i_8] [i_8])))));
                        }
                        var_29 += (min((((((~(arr_38 [0] [i_11] [i_10]))) > (arr_34 [1] [i_8])))), (((arr_37 [i_8] [i_8] [i_8] [i_8 - 2] [i_8]) ? var_15 : (arr_35 [2] [i_9] [3] [i_9])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
