/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((max((~var_9), var_0))))));
    var_14 = (max(var_14, ((((min(((max(1, var_7))), (~var_9))) ^ (((~((var_2 ? var_6 : -272435377))))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (max(var_15, var_8));
        var_16 = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : -8717)) > (arr_1 [5])));
        arr_2 [i_0] &= (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] = var_5;
        var_17 = (((-512 ? 47502 : 512)));
        var_18 = ((var_6 / (+-16384)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {
                    var_19 = 14436;
                    var_20 = (arr_12 [i_2] [i_4 - 1] [9]);
                    var_21 = (max(var_21, (arr_8 [i_4])));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_22 = (arr_7 [i_4 - 1]);
                                arr_18 [i_2] [i_3] [i_6] [i_5] [i_5] [5] = arr_13 [i_2] [i_3] [i_4 - 1] [i_5 + 1];
                                var_23 ^= var_9;
                                var_24 -= (arr_9 [i_4 - 1]);
                                var_25 = var_3;
                            }
                        }
                    }
                }
            }
        }
        var_26 = (min(var_26, (arr_12 [i_2] [i_2] [7])));
    }

    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_27 = (((arr_14 [i_7] [i_7] [i_7]) ? ((min((arr_0 [i_7]), var_9))) : (((arr_19 [i_7]) ? ((((arr_11 [i_7]) ? 14440 : var_11))) : (((arr_19 [i_7]) ? (arr_1 [i_7]) : 8014909547353047994))))));
        arr_21 [i_7] = (min(-var_1, (((!(arr_14 [i_7] [i_7] [i_7]))))));
        var_28 = (arr_17 [i_7] [i_7] [i_7] [i_7] [19] [i_7] [i_7]);
    }
    for (int i_8 = 2; i_8 < 13;i_8 += 1)
    {
        var_29 &= (((((min(512, -272435355))) ? 795181718 : -599014045)) >= (!512));
        var_30 = (arr_1 [11]);
    }

    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_31 = ((~((~(arr_20 [i_9] [i_9])))));
        var_32 += (((((-(arr_1 [i_9])))) ? 56829 : (max(4054076300, 512))));

        /* vectorizable */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            arr_31 [i_10] [i_10] [i_10] = (arr_27 [i_9]);
            var_33 ^= var_8;
        }
    }
    #pragma endscop
}
