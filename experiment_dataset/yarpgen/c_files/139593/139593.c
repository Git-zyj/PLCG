/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_19 = ((((var_1 ? var_10 : var_16))) < (arr_1 [i_0 - 3] [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2 - 1] = ((0 + (((arr_4 [9]) ? var_0 : var_6))));
                    var_20 = ((((((arr_2 [i_0] [i_0]) != var_18))) + (((var_13 == (arr_7 [8] [i_1] [i_1] [1]))))));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        var_21 = ((-var_17 ? var_16 : -var_6));
        var_22 = 0;
        var_23 = var_8;
        var_24 = var_9;
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_20 [i_4] [i_6] [i_4] = ((((!(arr_2 [i_4] [i_4]))) ? (~var_12) : var_14));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_25 = ((((((~(arr_22 [i_8] [i_7] [i_6] [i_5]))))) ? (arr_18 [i_4]) : var_1));
                                arr_25 [6] [i_5] [i_4] [i_7] [i_8] = (min((((((~var_11) + 2147483647)) >> (((((arr_18 [i_5]) ? var_5 : var_14)) - 9155)))), var_15));
                                arr_26 [i_4] [i_5] [i_4] [i_4] [i_8] = (!var_3);
                            }
                        }
                    }
                    var_26 = (((((var_4 ? (((-115 ? (arr_7 [i_6] [i_6] [i_5] [i_4]) : var_16))) : ((var_17 ? var_1 : (arr_15 [i_4] [i_4])))))) ? (arr_1 [i_4] [i_4]) : (((arr_19 [i_4] [11] [11] [14]) % ((0 ? 255 : 1))))));
                }
            }
        }
    }
    #pragma endscop
}
