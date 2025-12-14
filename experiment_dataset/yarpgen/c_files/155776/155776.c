/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~((var_8 - (var_5 & var_7)))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_15 = (min(var_15, var_3));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = var_10;

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_16 = ((((arr_15 [i_2] [i_3] [i_2] [i_1] [i_2]) ? var_7 : ((var_10 ? var_11 : (arr_15 [i_0] [i_1] [i_2] [i_1] [i_2]))))));
                            var_17 = 2146959360;
                        }
                    }
                }
                arr_16 [i_0] [i_2] [i_2] [i_2] = ((2148007935 / (((arr_7 [i_0 - 1] [i_2] [i_2] [i_0]) - var_13))));
                var_18 = (((var_9 ? 255 : (arr_2 [i_0 - 1]))));
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_19 = (min(var_19, ((((var_12 + 9223372036854775807) << (((arr_17 [i_0 - 1] [i_0 + 1] [i_0 + 1]) - 13)))))));
            var_20 = (min(var_20, (((((((158 ? var_12 : (arr_13 [i_5] [i_0 - 2] [i_0]))) + 9223372036854775807)) >> ((((var_2 ? var_5 : var_9)) - 1858361690)))))));
        }

        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_21 = ((((((((0 << (var_0 - 55)))) ? 81 : var_0))) ? ((((max(var_1, var_0))) ? var_12 : var_13)) : (arr_8 [i_6] [i_0] [0])));
            var_22 -= (((((arr_8 [i_0 - 2] [i_0] [i_0 - 2]) >= var_0)) ? (((var_7 < (arr_14 [i_0] [i_6] [i_6] [i_6])))) : var_3));
            arr_21 [6] [i_0] = (((arr_10 [i_0 + 1] [i_0] [10] [i_0]) ? ((max((arr_10 [i_0 - 2] [i_0] [10] [i_0]), (arr_10 [i_0 + 1] [i_0] [i_0] [i_0])))) : (arr_10 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2])));
            var_23 = ((var_2 & ((((max(8, -32))) ? (((max((arr_8 [i_6] [i_0] [i_6]), -28381)))) : var_11))));
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_24 = ((var_8 ? ((var_1 ? (arr_20 [i_0 - 2]) : var_3)) : (max(((var_8 ? var_1 : var_3)), (((arr_4 [i_7] [i_7] [i_7]) ? (arr_10 [i_7] [i_7] [i_7] [i_7]) : 244))))));
            var_25 = (max(var_25, var_8));
        }
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        arr_27 [i_8] = (~var_2);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                {
                    var_26 *= (arr_15 [12] [i_9] [i_9] [i_10] [i_10]);
                    var_27 *= (((((-(max((arr_3 [i_9]), var_13))))) || ((max((arr_12 [i_9]), var_9)))));
                    var_28 = var_6;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 14;i_12 += 1)
                        {
                            {
                                var_29 = (min(var_29, ((((((var_0 - (arr_29 [i_12 - 1] [i_12 + 2])))) ? (arr_31 [i_11]) : ((~(21 + var_11))))))));
                                var_30 = (min(var_30, ((((((max((arr_30 [i_10] [i_10] [i_10] [i_10]), var_3))) == var_3))))));
                            }
                        }
                    }
                }
            }
        }
        arr_39 [i_8] &= ((var_11 & (((arr_1 [i_8] [19]) ? (arr_1 [i_8] [i_8]) : var_11))));
    }
    var_31 &= var_3;
    #pragma endscop
}
