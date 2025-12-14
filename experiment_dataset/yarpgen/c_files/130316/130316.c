/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (((((-117 ? 95 : 326540757505671140))) ? ((var_2 ? (~9961) : (max(var_2, var_6)))) : ((16777152 ? var_5 : ((9216567093074369884 ? -25 : 326540757505671166))))));
                arr_5 [4] [i_0 - 2] = ((!(((arr_3 [i_1 - 1] [i_1 + 3] [i_1 + 3]) <= (arr_4 [i_0 - 1] [9])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_12 = (((arr_7 [i_2]) > ((~(2305843009213693951 & 251)))));
        var_13 = ((min((arr_3 [i_2] [i_2] [i_2]), (arr_9 [i_2] [i_2]))));
        var_14 = ((((((max((arr_4 [i_2] [2]), var_0))) ? 21406 : (arr_4 [6] [i_2])))) ? (arr_7 [14]) : (((((arr_8 [i_2] [i_2]) && var_4)))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_15 = (min(var_15, (53142 && 117)));
                        var_16 += (arr_1 [i_3] [i_5]);
                        arr_18 [i_3] [i_4] [1] [i_6] = ((-260453051 ^ (((((arr_15 [i_4] [7] [i_6]) + 2147483647)) >> (((arr_15 [i_4] [i_4] [i_5]) + 71))))));
                    }
                }
            }
        }
        var_17 = (arr_13 [i_3 + 1] [2] [i_3 + 1]);
    }
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        arr_23 [i_7] = (((326540757505671165 ? 12 : 1)));

        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            var_18 = var_1;
            arr_26 [i_7] [1] = (max(102, (arr_25 [i_7] [i_7])));
            var_19 &= ((var_4 || (~5396170225626924791)));
            var_20 = (arr_25 [i_8] [i_7]);
        }
        for (int i_9 = 2; i_9 < 9;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 8;i_12 += 1)
                    {
                        {
                            var_21 += (((((arr_6 [i_7] [i_7]) + 9223372036854775807)) << (91 - 91)));
                            var_22 = ((~((var_3 + (((arr_15 [i_7 + 2] [i_10] [i_12 - 1]) + var_7))))));
                        }
                    }
                }
                arr_38 [i_7] [i_7 - 1] [i_7] = (max(116, (max(((max(var_1, var_3))), var_7))));
            }
            for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
            {
                var_23 = (arr_2 [i_7]);
                var_24 = ((0 ? (arr_21 [i_9 + 1]) : 1679153526));
            }
            /* vectorizable */
            for (int i_14 = 1; i_14 < 9;i_14 += 1)
            {
                var_25 = (((arr_43 [i_7]) << -0));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 10;i_16 += 1)
                    {
                        {
                            var_26 = (((arr_27 [i_14] [i_14 + 1] [i_14 - 1]) ? (arr_51 [i_14] [i_14 + 1] [i_7] [i_14 + 2]) : (arr_51 [7] [i_14 + 1] [i_7] [i_14 - 1])));
                            var_27 += (((!var_4) ? 1 : 0));
                            var_28 = ((-93 >= ((((arr_8 [i_7] [i_7]) <= (arr_41 [i_9 + 2]))))));
                        }
                    }
                }
            }
            var_29 = var_2;
            var_30 = 18120203316203880475;
            var_31 = arr_51 [i_7] [i_9] [i_7] [i_9];
        }
    }
    #pragma endscop
}
