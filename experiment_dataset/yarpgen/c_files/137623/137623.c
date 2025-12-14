/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_5, var_8));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((((((2 << (var_7 + 576898419)))) && (arr_1 [i_0]))))));
        var_21 = (max(var_21, (arr_2 [i_0] [7])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_22 = (((~(765383654 < var_5))));
        var_23 = ((!(((((min(var_18, var_17))) ? (~var_12) : (((arr_4 [i_1]) ? var_3 : var_1)))))));
        var_24 ^= (min((((((arr_2 [i_1] [i_1]) > var_3)) ? ((min(var_3, (arr_1 [i_1])))) : (((arr_1 [i_1]) ? -14 : (arr_2 [i_1] [i_1]))))), ((((((arr_2 [i_1] [i_1]) & 84))) ? 0 : ((((arr_2 [i_1] [i_1]) < var_0)))))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_25 = var_5;
        var_26 = ((((!(~var_14))) ? (arr_4 [i_2]) : ((18446744073709551615 ? -119 : (((arr_6 [i_2] [13]) ? var_17 : var_7))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_27 = var_11;
        arr_11 [i_3] [i_3] = (((arr_9 [i_3]) ? (arr_9 [i_3]) : (arr_9 [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                {
                    arr_16 [9] [i_3] [i_3] = (((arr_13 [i_5 + 1]) ? (arr_13 [i_5 + 1]) : var_2));
                    var_28 -= (!var_3);
                    arr_17 [i_3] [i_4] [i_4] [i_5] = (((((~(arr_9 [i_3])))) ? var_0 : (((arr_10 [i_3]) | (arr_0 [i_3])))));
                }
            }
        }
        var_29 |= (((arr_7 [i_3] [i_3]) <= var_6));
        arr_18 [i_3] = ((var_11 ? var_6 : (((arr_15 [i_3] [2] [i_3]) ? 255 : 1))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            {
                arr_25 [11] [i_6] [i_6] = arr_7 [i_6 + 1] [i_7];
                arr_26 [i_7] [i_7] [i_6] = ((var_13 ? (max(((min(-1279758093, var_6))), ((var_17 ^ (arr_20 [i_6]))))) : var_13));
            }
        }
    }
    #pragma endscop
}
