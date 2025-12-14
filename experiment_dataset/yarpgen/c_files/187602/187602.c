/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_2] &= ((-(((((arr_6 [6] [6] [i_2]) ? (arr_1 [i_0]) : 1)) / 238))));
                    var_18 = (min((((~(arr_5 [i_0] [i_1])))), var_17));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_2] [i_2] [i_0] [i_2] = var_6;
                        var_19 = var_7;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_20 = ((var_4 ? var_14 : (!var_16)));
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_5] [i_4] = (((((var_9 ? 96 : var_1))) ? ((((arr_15 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_2]) : (arr_14 [i_2])))) : ((3634660539747226076 ? (arr_12 [i_5] [i_0] [i_0] [i_0]) : 6375755475027009245))));
                            arr_17 [i_0] [i_1] [i_0] [i_2] [i_4] [15] = ((var_3 ? 26102 : (arr_12 [i_1] [i_1] [i_0] [i_1])));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_21 = (min(var_21, (((max((arr_14 [i_0]), var_0))))));
                            var_22 *= (max((arr_1 [i_4]), (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        arr_22 [i_1] [i_1] [i_0] [i_1] [i_1] [i_1] = (((((29487 ? 6375755475027009243 : 28491))) ? (arr_1 [i_0]) : (max(((var_4 ? 599071877 : var_7)), var_8))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_26 [1] [i_2] [i_0] |= (((arr_23 [i_1] [i_2] [i_2] [i_0]) ? -126 : (((-38 + 2147483647) << (((arr_3 [i_2] [4] [i_2]) - 15172))))));
                        var_23 = 6375755475027009245;

                        for (int i_8 = 2; i_8 < 16;i_8 += 1)
                        {
                            var_24 = ((var_1 || (arr_27 [i_0])));
                            var_25 = (!var_6);
                            arr_30 [i_0] [i_0] [i_2] [i_0] [i_8 - 2] = ((var_11 ? var_13 : var_10));
                        }

                        for (int i_9 = 2; i_9 < 16;i_9 += 1)
                        {
                            var_26 *= (((arr_15 [i_0] [i_9 + 1] [i_2] [i_7]) ? (arr_15 [i_0] [i_9 + 1] [i_9] [i_7]) : var_9));
                            arr_33 [i_0] [i_0] [i_0] [7] [i_0] [i_0] = (arr_18 [i_9 - 1] [i_2] [i_1] [i_7] [i_7] [i_7] [i_2]);
                            arr_34 [i_0] [i_0] [i_2] [i_7] = ((var_8 ? (arr_10 [i_0] [i_1] [i_2] [i_9 - 1] [i_9 - 2] [i_9 + 1]) : var_1));
                            var_27 = (~-var_16);
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_28 = (min(var_28, (arr_23 [i_0] [i_0] [i_2] [i_1])));
                            arr_37 [i_0] [i_2] [i_2] [i_0] [i_2] [i_1] = (~1658389895);
                        }
                    }
                }
            }
        }

        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            var_29 = var_4;
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 16;i_14 += 1)
                    {
                        {
                            var_30 = (max(var_30, (((((!(((var_13 ? var_5 : var_6))))) ? (arr_42 [i_0] [i_0] [i_0]) : (!var_5))))));
                            var_31 = var_4;
                        }
                    }
                }
            }
            var_32 *= ((((((arr_45 [i_0]) ? (arr_45 [i_0]) : (arr_45 [i_0])))) ? (max(var_13, (arr_45 [i_0]))) : ((var_16 ? -102 : (arr_45 [i_0])))));
        }
        /* LoopNest 2 */
        for (int i_15 = 4; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 15;i_16 += 1)
            {
                {
                    var_33 = 4852062658086567792;
                    arr_53 [i_0] [i_0] = 24;

                    for (int i_17 = 1; i_17 < 14;i_17 += 1)
                    {
                        arr_56 [i_0] [i_0] [i_0] [i_0] = (((((max(86, var_1)))) > (((arr_5 [i_0] [i_17 + 1]) ? (arr_50 [i_0] [i_0]) : var_7))));
                        var_34 = (arr_35 [i_0] [i_15 + 1] [i_16]);
                    }
                    var_35 -= ((max(((min((arr_50 [i_15 + 1] [i_15 + 1]), (arr_18 [i_16 + 2] [i_16 - 2] [13] [i_15] [i_15 - 1] [i_0] [i_0])))), ((-(arr_40 [8] [i_15 - 1] [i_15]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 10;i_18 += 1)
    {
        for (int i_19 = 2; i_19 < 8;i_19 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 10;i_20 += 1)
                {
                    for (int i_21 = 1; i_21 < 8;i_21 += 1)
                    {
                        {
                            var_36 *= var_8;
                            var_37 = (((-(arr_21 [i_21 - 1] [i_20] [i_21 + 1] [i_21 + 1] [i_21]))));
                        }
                    }
                }
                var_38 *= var_10;
                var_39 = var_13;
            }
        }
    }
    var_40 = (max((((var_12 ? -var_11 : (!var_8)))), var_13));
    #pragma endscop
}
