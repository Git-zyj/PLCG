/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 15749;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = 64777;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] = 0;
                        var_12 = ((-4127926729758047552 ? (11631 & 0) : ((((arr_2 [i_0] [i_0]) == -2036245050)))));
                    }
                }
            }
        }
        var_13 = ((-(arr_12 [i_0] [1] [i_0])));
        var_14 = 11648;
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {

                /* vectorizable */
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    var_15 = (arr_9 [i_6 + 1] [i_6 + 2] [i_6 - 1] [i_6 + 1]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_16 = ((~(arr_2 [i_4] [i_6 + 2])));
                                var_17 = (((arr_5 [i_6] [i_6] [i_6 + 1]) || (arr_11 [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1] [10] [i_6])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_18 = (arr_7 [i_6 - 1] [i_6 + 2] [i_10 + 1] [i_10 - 1]);
                                var_19 = (~15749);
                            }
                        }
                    }
                    var_20 = var_8;
                    var_21 = (((arr_29 [i_6] [i_6] [i_4] [i_6 - 1] [9] [i_6]) & 1));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_22 = (var_6 / 2147483647);
                                var_23 = (((arr_1 [i_12] [i_12 + 2]) - (arr_1 [10] [i_12 - 1])));
                                var_24 = (min(var_24, -8524));
                            }
                        }
                    }
                    var_25 = var_1;
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            {
                                var_26 = var_8;
                                var_27 &= 2147483647;
                                var_28 = 53887;
                                var_29 = 11;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 13;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 15;i_17 += 1)
                        {
                            {
                                var_30 = 25246;
                                var_31 = -8549;
                            }
                        }
                    }
                }
                var_32 = ((~((-((53899 ? 0 : 2147483647))))));
                var_33 -= 9223372036854775807;
            }
        }
    }
    #pragma endscop
}
