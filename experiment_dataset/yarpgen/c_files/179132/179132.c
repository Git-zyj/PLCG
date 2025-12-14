/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_7 ? (~1) : var_7);
    var_15 = (min(var_15, var_1));
    var_16 = -55594116;
    var_17 = ((((var_5 < (min(var_3, var_6)))) && var_10));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        var_18 *= ((((var_4 % (arr_9 [i_2] [i_2] [i_1] [i_0]))) - var_10));
                        var_19 *= (arr_11 [i_3 + 1] [15]);
                        var_20 = (((arr_11 [i_3 + 1] [i_3 + 1]) ? var_1 : (arr_11 [i_3 - 1] [i_3 - 1])));
                        var_21 = (arr_2 [14]);
                    }
                }
            }
        }
        var_22 += (!334472657177976213);
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_26 [i_7] [i_7] [i_4] = (((max(((~(arr_23 [i_7] [i_7] [i_4] [i_5] [i_4] [i_4]))), (arr_25 [12] [i_4] [9] [1]))) - 277745234));
                        var_23 = var_9;
                        arr_27 [3] [i_5] [i_5] [i_6 + 3] [i_4] = (min((min(334472657177976213, -3042992510609454909)), (((max(var_9, var_8)) ^ (arr_22 [i_4])))));
                        arr_28 [i_4] [i_4] [3] [i_7] [i_7] [i_6 + 2] = var_0;
                        arr_29 [i_4] [i_5] = ((16 ? -1366265065 : 277745234));
                    }
                }
            }
        }
        arr_30 [4] &= ((-(((arr_25 [i_4] [12] [12] [i_4]) ? (arr_25 [i_4] [4] [i_4] [1]) : (arr_25 [i_4] [14] [i_4] [14])))));
        /* LoopNest 3 */
        for (int i_8 = 3; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 16;i_10 += 1)
                {
                    {
                        var_24 = (((((min(var_1, var_6)) % (((arr_33 [i_9]) ? var_1 : var_3))))));
                        var_25 = (arr_25 [i_4] [i_4] [i_8 - 3] [i_10 + 2]);
                    }
                }
            }
        }
        arr_40 [i_4] = (min(((((((-(arr_33 [i_4])))) || ((min(var_4, 334472657177976201)))))), var_12));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        arr_45 [i_11] = ((var_0 ? (((var_4 ? var_10 : var_11))) : ((~(arr_9 [i_11] [i_11] [i_11] [i_11])))));
        arr_46 [i_11] = var_2;
        var_26 *= ((1805975700 ? ((var_8 ? var_9 : var_6)) : (var_2 == 1)));
    }
    #pragma endscop
}
