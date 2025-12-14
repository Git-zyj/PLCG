/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        var_11 += (((arr_12 [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_3 - 2]) | var_5));
                        var_12 = var_8;
                        arr_13 [i_0] [i_1] [i_2] [i_3] = (((arr_5 [i_1 + 2] [i_2]) <= (arr_5 [i_0] [i_0])));
                        arr_14 [i_0] [i_1] [i_1] [i_0] [i_3 - 1] = (((arr_8 [i_1 + 2] [i_1 + 2] [i_3] [i_3 - 1]) < var_0));
                    }
                }
            }

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                var_13 = ((var_3 >> ((((arr_1 [i_4]) != var_2)))));
                arr_18 [i_0] = (arr_4 [i_0] [i_1 - 2] [i_4]);
                arr_19 [i_0] = -8886541253991745630;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_14 = var_6;
                            var_15 += (((arr_17 [i_4] [i_4]) | (arr_9 [9] [i_1] [1])));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_16 = (arr_7 [6] [i_0] [i_7]);
            arr_27 [i_7] [i_7] = 212;
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_35 [i_10] [i_7] [i_8] [i_7] [i_0] = (arr_31 [i_7] [i_7] [i_8 + 1] [i_9] [i_10 - 1] [i_10]);
                            var_17 = (max(var_17, (arr_22 [i_0] [i_7] [7] [9])));
                            var_18 = (((var_10 ? -112 : (arr_16 [i_10] [i_7] [i_7]))));
                            var_19 = ((((arr_2 [i_0] [i_0] [8]) > (arr_33 [i_0] [i_7] [i_9] [i_0] [i_9] [i_7]))));
                            var_20 = (min(var_20, var_3));
                        }
                    }
                }
            }
        }
        var_21 += ((var_1 ? (arr_2 [i_0] [i_0] [i_0]) : (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    {

                        for (int i_14 = 2; i_14 < 10;i_14 += 1)
                        {
                            var_22 = (((arr_20 [0] [i_14 - 1]) | (((255 ? var_5 : 0)))));
                            var_23 = (~var_10);
                            arr_46 [i_0] [i_0] [i_0] [9] [1] [i_14] = (arr_44 [i_0] [i_11] [i_0] [i_0]);
                            arr_47 [i_0] = ((((2078813672 ? -8886541253991745630 : 11)) << ((((var_7 ? var_0 : var_1)) - 18308031224314212504))));
                            arr_48 [i_14] [7] [7] [7] = ((~(arr_41 [4] [i_14 + 1] [i_14 - 1] [i_14 - 2])));
                        }
                        arr_49 [i_0] [i_0] [i_0] = (!-1);
                        arr_50 [i_0] [i_11] [i_11] [i_12] = (arr_7 [6] [i_11] [i_11]);
                    }
                }
            }
        }
    }
    var_24 = (max(9223372036854775806, 18446744073709551615));
    #pragma endscop
}
