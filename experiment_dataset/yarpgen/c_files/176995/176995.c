/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_0 ? var_2 : (var_3 / var_10)));
    var_13 = (max(var_13, var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (min(var_14, (((~(var_9 ^ var_1))))));
        var_15 ^= (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_16 = (((arr_7 [i_2]) ? (arr_0 [i_0] [i_1]) : (arr_1 [i_0])));
                        var_17 = (((arr_8 [4] [i_1] [i_2] [i_3]) ? (arr_4 [i_2] [i_2]) : (arr_8 [i_0] [i_0] [i_2] [i_3])));
                        var_18 ^= -645629381;
                        var_19 = ((var_10 ? (arr_1 [i_3]) : (arr_9 [i_2] [i_1] [i_1] [i_3] [0])));
                        var_20 &= (arr_7 [i_0]);
                    }
                }
            }

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_21 = ((var_8 <= 11481298553863402884) ? ((((arr_13 [i_0] [i_4] [4] [8]) && 1930918548))) : ((((arr_6 [10] [6] [i_5] [10]) >= (arr_17 [i_6] [3] [8] [i_6] [i_6] [i_6])))));
                            arr_20 [i_0] [i_5] [i_5] [i_5] = var_4;
                        }
                    }
                }
                arr_21 [i_0] = var_11;
                var_22 = (((arr_14 [i_0] [i_1] [i_4]) << (((arr_15 [i_0] [9]) - 16536))));
                arr_22 [2] [2] = (((arr_3 [i_0] [i_4]) >= var_11));
                arr_23 [i_0] [i_0] [i_0] = var_3;
            }
        }
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_23 = (arr_24 [21]);
        var_24 ^= (max(((var_5 ^ (!var_8))), var_8));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        arr_30 [1] = (1685151619 ? -13368 : 35385);

        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            arr_35 [3] [i_8] [i_8] = arr_29 [i_8] [i_8];
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    {
                        arr_44 [i_11] [i_9] [i_10] [6] = ((!(arr_33 [i_9] [i_8])));
                        arr_45 [i_11] [13] [i_10] [i_10] [i_10] = (max(((min(((((arr_39 [i_8]) / var_5))), (((arr_37 [i_8] [i_8] [1] [i_11]) ? (arr_33 [i_11] [i_11]) : var_8))))), var_4));
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            var_25 &= 2609815660;
            var_26 ^= (((~(180 > var_0))));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            var_27 ^= (arr_40 [14] [i_8] [i_8] [i_13]);
            var_28 = (max(var_28, var_0));
            arr_52 [i_8] &= ((var_11 ? var_10 : (arr_40 [8] [i_8] [i_8] [8])));
            var_29 ^= ((arr_34 [i_8] [i_8] [i_8]) << (((((arr_29 [3] [i_8]) - (arr_34 [i_8] [3] [i_13]))) - 14503387040081216560)));
        }
    }
    var_30 ^= (max(var_0, var_4));
    #pragma endscop
}
