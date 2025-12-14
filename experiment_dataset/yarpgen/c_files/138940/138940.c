/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((min((max(((min(253, 64650))), (arr_3 [i_0] [i_0] [i_0]))), (((arr_5 [i_1 - 1] [i_1] [i_1 - 1]) ? (arr_3 [i_1 - 1] [i_1] [i_1 - 1]) : (arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))))));
                    var_19 = (max((arr_4 [i_1 - 1] [i_1 - 1]), var_11));
                    var_20 = (min(-5720723542790337284, -448393229));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_18 [i_7] [i_6] [i_6] [i_6] [7] [i_3] = ((((((885 ? (arr_10 [i_7] [i_5] [i_4] [i_3]) : var_8)) > 37166)) || (11086485220922623801 <= 37166)));
                                arr_19 [i_7] [i_6] [i_6] [i_4] [i_3] = ((-var_13 ? ((-(max(14239262485624944783, 41)))) : (((((arr_14 [i_3]) != var_4))))));
                                var_21 = (min(((((var_5 < var_8) == ((var_9 ? var_7 : var_12))))), var_16));
                                var_22 = (arr_10 [i_5] [i_5] [10] [i_5]);
                            }
                        }
                    }
                    var_23 = (((((min((arr_10 [i_5] [i_5] [i_3] [i_3]), var_7))) >= (arr_13 [i_5] [i_5 - 1] [i_3] [i_4 + 2] [i_3] [i_3]))) ? (max((min((arr_12 [i_5 + 1] [4] [i_4] [i_3]), 448393228)), var_7)) : (((((arr_13 [i_3] [i_3] [i_3] [i_3] [9] [i_3]) && -576113944)) ? ((8861820735052999138 ? 33 : (arr_16 [i_3] [i_3] [i_3] [i_3] [i_3]))) : var_5)));
                    var_24 = ((((((arr_15 [i_5] [i_4 - 1]) ? (min(var_2, 40054)) : (((var_6 ? var_12 : 62438)))))) ? var_7 : (arr_16 [i_4 + 2] [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 2])));
                }
            }
        }
        arr_20 [i_3] [i_3] = (arr_1 [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 10;i_9 += 1)
            {
                {
                    arr_27 [i_8] = (((((~(arr_12 [i_9 + 1] [i_9 - 2] [i_9 - 2] [i_9 - 2])))) + (min((arr_0 [i_8] [i_3]), ((448393229 ? 0 : 7360258852786927814))))));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_30 [i_10] [i_8] [i_3] = 7360258852786927814;
                        var_25 |= ((2943668005 ? 211106232532992 : 30284));
                    }
                }
            }
        }
    }
    #pragma endscop
}
