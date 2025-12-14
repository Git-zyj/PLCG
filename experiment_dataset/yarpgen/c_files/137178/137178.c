/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_10 += ((~(arr_1 [0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_11 = ((~((54429 ? (arr_1 [i_0]) : (arr_6 [i_0 + 1] [4] [i_0] [i_3])))));

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            var_12 = ((((((arr_6 [i_0] [i_1] [i_0] [i_3]) ? (arr_7 [6] [i_4] [1] [i_2] [i_1] [i_0]) : var_6))) % (var_5 | -9223372036854775789)));
                            var_13 = ((var_4 ? (arr_7 [i_4] [i_4] [i_4 + 1] [i_3] [i_3] [i_3]) : var_4));
                            var_14 = (arr_7 [i_4] [11] [i_4 - 1] [i_4 - 1] [5] [i_3]);
                            var_15 = 9223372036854775789;
                        }
                        arr_12 [i_0] [i_2] [i_2] [i_0] [i_1] = (arr_7 [8] [8] [i_0 - 1] [1] [i_0 + 1] [i_0 + 1]);
                    }
                    var_16 = var_8;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    var_17 = (max(var_17, (arr_11 [i_0 - 1])));
                    arr_17 [1] [i_5] [i_0] = (((arr_10 [i_0] [i_0] [i_6]) ? var_9 : -var_2));
                }
            }
        }
        arr_18 [i_0] = 31;
        arr_19 [i_0 + 1] [2] |= ((9223372036854775785 ? (arr_11 [2]) : var_8));
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 3; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_18 = (((arr_21 [i_10]) && (((-((1601638563 | (arr_20 [i_8]))))))));
                                var_19 = ((arr_26 [i_7] [i_7]) / (arr_20 [i_7]));
                                arr_32 [i_7] = ((((((arr_25 [i_7] [i_7]) ? (9223372036854775788 && var_8) : (var_2 < var_5)))) ? -9223372036854775800 : ((max(((~(arr_25 [i_9] [i_8]))), 73)))));
                                arr_33 [i_7] [i_7] [i_7] [i_7] [i_11 - 1] = (((var_1 ? (max(1601638563, -1)) : var_9)));
                                arr_34 [i_7] [6] [12] [i_7] [i_7] = ((((arr_30 [i_7 + 2] [i_9 + 1] [i_7]) > var_8)));
                            }
                        }
                    }
                }
                var_20 += ((-(arr_31 [i_7] [i_7 + 2] [i_8] [5] [i_7 - 3] [i_7 - 2] [i_7 + 1])));
            }
        }
    }
    #pragma endscop
}
