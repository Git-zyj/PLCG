/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_2 ? ((var_15 << (var_13 - 14))) : 140737488355326)));
    var_17 -= var_7;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = ((((((max(var_14, (arr_0 [i_0] [1]))) & ((min((arr_0 [i_0] [1]), 127)))))) ? (arr_0 [20] [i_0]) : (arr_0 [i_0] [8])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((var_0 ? ((((max(192, -215345133))) ? (arr_5 [i_0]) : (((arr_5 [i_2]) - var_5)))) : (arr_4 [i_0] [i_1] [i_2])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_20 *= 11;
                        var_21 = (arr_0 [i_1 - 1] [i_1]);
                        arr_10 [i_1] [i_1] [i_1 - 1] = (min(2867455790876114419, 1));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_22 = arr_6 [i_0] [i_0] [i_0] [i_0];
                                var_23 = ((~(((arr_8 [i_0] [i_5 - 2] [1] [i_4]) ? 1 : 3313951811))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_24 = (max(((((min((arr_18 [i_1 - 1] [i_2] [18]), 1))) + (var_12 & var_7))), (max(2009593938, ((-(arr_15 [1] [i_0] [i_1 - 1] [i_2] [7] [i_1 - 1])))))));
                                var_25 = (max(var_5, (arr_9 [i_1 - 1] [i_1] [i_1 - 1] [i_1])));
                            }
                        }
                    }
                    arr_19 [i_1] [6] [13] [i_2] = ((+(max((~var_6), ((max(var_1, var_1)))))));
                }
            }
        }
        var_26 *= (((max(-215345145, 1)) << ((((-1830591453 ? -303026386 : 1)) + 303026398))));
    }
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        arr_22 [i_8] [i_8] = ((((((arr_8 [i_8 + 3] [i_8 + 1] [i_8] [i_8]) ^ (arr_17 [18] [i_8] [i_8] [18] [i_8] [i_8] [i_8 + 3])))) ? (((arr_3 [23] [5] [i_8 + 1]) >> (((arr_4 [12] [22] [i_8 + 2]) - 13415)))) : var_15));
        arr_23 [i_8] [i_8] = 7419;
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                {
                    var_27 = (((1 << 21) + (arr_2 [i_8])));
                    var_28 = ((215345146 << (((-925673892 + 925673917) - 25))));
                }
            }
        }
        var_29 = ((+(((((arr_13 [i_8 + 1] [12] [3] [i_8] [i_8 + 3] [i_8] [5]) + 9223372036854775807)) << (((1 | var_5) - 30741))))));
    }
    var_30 = ((var_12 ^ ((((-22 ? var_2 : 2954)) ^ var_1))));
    var_31 = var_8;
    #pragma endscop
}
