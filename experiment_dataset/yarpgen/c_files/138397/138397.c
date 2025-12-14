/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 9223372036854775804;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_11 = ((arr_2 [i_0 - 2]) || var_9);
        arr_3 [i_0 - 3] [i_0] = 28875;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_0] = -var_8;
                        arr_12 [i_0 + 1] [i_1] [i_2] [i_1] [i_0 + 1] [i_1] = (!var_0);
                        arr_13 [i_0] [i_1] [i_2] [9] = (((((arr_4 [i_0] [i_1]) <= 0)) && (var_2 <= var_2)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        arr_21 [i_4] = (((((((arr_17 [i_0] [i_4] [i_4] [i_6]) != 9223372036854775804)))) / 9223372036854775791));
                        var_12 = -9223372036854775804;
                        arr_22 [i_0 - 1] [i_4] [i_4] [i_4 - 1] [i_4] [i_6] = 161;
                        arr_23 [i_4] [1] [i_4] [1] [i_0] [i_4] = var_9;
                        var_13 = (var_5 != ((var_6 ? 127 : 11)));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        arr_28 [i_7] [i_7] = (((arr_25 [i_7]) << (((min(-107, var_2))))));
        arr_29 [i_7] = 9223372036854775803;
        var_14 = (arr_26 [2] [i_7]);
        var_15 = -8191;

        /* vectorizable */
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_16 = (((1048575 & -9223372036854775804) >= (((230 ? 17648 : 14012)))));
                            var_17 = 11728;
                        }
                    }
                }
                arr_41 [i_9] [11] [i_8] [0] = var_8;
            }

            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                arr_44 [1] [i_12] [i_12] = ((((var_9 ? -14021310 : var_6)) <= var_0));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        {
                            var_18 = ((-11716 / ((var_3 ? 132 : (arr_38 [i_7] [i_8] [i_12])))));
                            arr_51 [i_7] [5] [i_12] = var_0;
                            arr_52 [i_7] [i_12] [i_12] [i_12] [i_12] = (arr_35 [i_8 + 2] [i_8 + 2] [i_8 - 1]);
                        }
                    }
                }
                var_19 = ((-24982 && (arr_43 [i_8 - 1] [i_8 + 1] [i_7] [i_7])));
            }
        }
    }
    #pragma endscop
}
