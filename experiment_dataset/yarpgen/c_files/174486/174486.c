/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (((var_8 * (((var_2 ? 1710369783 : var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = var_4;
                var_15 = var_1;
                arr_7 [i_0] [i_1 - 1] [i_1 - 1] = (((arr_4 [i_1]) >> (var_12 + 3830)));
                arr_8 [i_0] = var_4;
                arr_9 [10] [10] |= (arr_1 [8] [8]);
            }
        }
    }
    var_16 -= var_6;
    var_17 = (min(var_17, var_5));

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_14 [i_2] = (((!(arr_0 [i_2]))));
        var_18 = (((arr_1 [i_2] [9]) * ((((((arr_2 [7] [10] [i_2]) * (arr_12 [i_2])))) ? var_5 : (max(2611088824, var_10))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_19 -= (((arr_15 [i_3]) - ((((arr_17 [i_3]) <= var_9)))));
        var_20 = (max(var_20, 31744));
        var_21 = (arr_16 [i_3] [i_3]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        arr_25 [6] [15] [9] [i_6] [i_5] = (((arr_21 [i_3] [7] [i_5] [i_5]) ? var_4 : (644096288 && var_1)));
                        var_22 = (((((arr_21 [i_3] [i_3] [i_3] [i_3]) ? 2699331128 : (arr_15 [i_3]))) + (arr_17 [i_5 + 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
