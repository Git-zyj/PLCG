/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_10 = (((((arr_5 [i_1]) / 59)) != (arr_7 [i_1 - 1] [i_1 - 1] [i_2])));
                        arr_12 [i_0] [i_0] [10] [i_0] [i_1] = (arr_5 [i_1]);
                    }
                }
            }
        }
        var_11 = (((arr_2 [i_0]) >= var_4));
        var_12 = var_7;
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_13 = (max(var_13, ((((~(~var_4)))))));
        arr_16 [4] &= ((var_6 << (((arr_15 [2]) - 1609933095))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_14 = (((arr_18 [i_5]) <= (arr_17 [i_5])));
        var_15 = (((arr_17 [i_5]) >= (arr_17 [i_5])));
        var_16 = ((((var_7 ? (arr_19 [i_5]) : -52)) - (arr_18 [i_5])));

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            arr_29 [i_8] [i_9] [i_7 - 1] [i_6] [i_9] = arr_24 [i_8 + 1] [i_6] [i_7 + 2];
                            var_17 -= (arr_24 [i_5] [i_5] [12]);
                        }
                    }
                }
            }
            var_18 = (((arr_26 [i_6] [i_6] [15] [i_6]) ? ((((arr_21 [i_5] [i_5]) <= (arr_26 [i_6] [i_6] [i_6] [i_6])))) : (((!(arr_28 [i_5] [i_5] [i_5] [i_5] [7] [i_6] [i_6]))))));
        }
    }
    var_19 = (max(var_19, ((min(var_1, (min((-2924 ^ 11), (((-32767 - 1) ? var_1 : 3454497183)))))))));
    #pragma endscop
}
