/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((min((var_8 <= var_0), 1)) < var_6);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_0] [2] [i_0] = ((((((arr_5 [i_0] [i_1]) ? (arr_5 [7] [i_1]) : var_8))) - ((max(127, -2147483641)))));
            arr_7 [i_0] [14] = var_7;
            var_14 = ((((max(-1695533991, 25850))) ? (min((arr_4 [i_0] [i_1]), var_9)) : ((((arr_4 [i_0] [i_0]) ? (arr_5 [i_1] [i_0]) : (arr_5 [i_0] [i_1]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [i_2] [i_0] [i_0] = ((+(((arr_4 [i_1] [i_1]) >> (((arr_4 [i_3] [i_2]) - 4155915987))))));
                        var_15 += max((((!(3426132714570456654 | -4589793367000842439)))), ((var_11 ? (((arr_3 [i_2] [i_2]) ? 1 : (arr_5 [1] [i_1]))) : var_0)));
                        arr_13 [i_0] [i_0] [i_2] [i_3] = (((var_11 - var_11) - ((((!1) ? 1 : 1)))));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_16 = 42829;
                arr_19 [i_5] [10] [i_0] [i_5] = (arr_5 [i_0] [i_0]);
            }
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_28 [i_0] [i_6] [i_4] [i_6] [i_7] [i_8] = (arr_0 [i_7]);
                            var_17 = 176;
                        }
                        var_18 = (arr_0 [i_0]);
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            arr_31 [i_0] [i_0] = (((arr_23 [2] [i_0] [i_0] [i_0]) ? (arr_8 [i_0]) : var_8));
            arr_32 [i_0] [2] [i_9] = ((var_6 - (arr_20 [i_9] [i_9] [i_0] [i_9])));
            var_19 = (((arr_17 [i_9] [i_0]) ? (arr_17 [i_0] [i_9]) : (arr_17 [i_0] [i_0])));

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                var_20 = var_2;
                var_21 = (((arr_21 [i_9] [i_10]) ? (arr_21 [i_0] [i_9]) : var_10));
                var_22 = (arr_27 [10] [i_9] [i_9] [i_0]);
            }
            arr_36 [i_0] = (arr_17 [i_0] [i_9]);
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_23 = 9223372036854775807;
            var_24 = arr_5 [i_11] [i_0];
        }
        var_25 = 9223372036854775807;
        var_26 = -1;
    }
    #pragma endscop
}
