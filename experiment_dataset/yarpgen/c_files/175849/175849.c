/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (min((var_7 && var_11), (max(var_5, var_4))));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            arr_4 [i_1] [i_1] [i_1] = ((~((var_0 ? (((arr_1 [i_0] [10]) ? 16009961335251507595 : 3902)) : var_9))));
            var_13 = 3893;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [i_2] = (~-var_9);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_14 [i_2] [i_3] [i_2] [i_2] = var_11;

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_19 [i_2] [i_2] [5] [i_2] [5] = ((61643 ? 1 : ((var_10 ? var_5 : var_3))));
                            var_14 = (min(var_14, (arr_16 [i_0] [i_2] [i_3] [i_4] [i_5])));
                            arr_20 [i_2] = ((var_4 ? (~1) : (arr_3 [i_2] [i_2])));
                            var_15 = (arr_15 [i_2] [i_3] [i_0 + 2] [i_4] [i_4]);
                            arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] = (((arr_13 [i_0 + 3] [i_0] [i_0 + 3] [i_0 - 1] [i_2]) ? var_2 : (arr_16 [6] [6] [7] [i_4] [i_5])));
                        }
                    }
                }
            }
            var_16 = ((!(arr_11 [i_2])));
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_25 [3] [i_6] [i_6] = (((arr_24 [i_0 - 2] [i_0 + 3] [i_0 + 3]) / (~var_11)));
            arr_26 [i_0] = ((3877 ? (((arr_22 [i_0] [i_6]) ? -6474663956529496979 : 825696094727867844)) : var_7));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        var_17 += 61632;
                        arr_31 [i_7] [i_7] [i_6] [i_7] = (((arr_13 [1] [i_0] [i_6] [i_7] [i_7]) & (arr_13 [i_0] [i_6] [i_7] [i_8] [i_7])));
                        var_18 -= (arr_2 [i_6] [i_6] [i_8]);
                        arr_32 [i_6] [i_7] [i_7] [i_0] = (((-29 || (arr_12 [i_8] [i_7] [i_6] [10]))));
                    }
                }
            }
        }
        var_19 = 61643;
        var_20 = (arr_24 [i_0 + 2] [i_0 - 1] [i_0]);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        arr_37 [i_9] [i_9] = ((var_5 || (arr_36 [i_9])));
        var_21 *= (!247);
        var_22 = (arr_33 [i_9]);
        arr_38 [i_9] [i_9] = ((3 <= (arr_36 [i_9])));
        arr_39 [i_9] = (arr_33 [i_9]);
    }
    #pragma endscop
}
