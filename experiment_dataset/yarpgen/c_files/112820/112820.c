/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_10 = (max(var_10, (((~((~(arr_0 [i_0 + 2]))))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_11 = var_3;
            var_12 = -var_7;
        }
        var_13 = (~(~var_0));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_14 = (min(var_14, ((min(var_7, ((((arr_5 [i_2] [i_2]) & (arr_5 [i_2] [i_2])))))))));

        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            var_15 = (max((max(((var_0 + (arr_6 [i_2]))), -6178050984594426571)), ((max(3584, 3006214630)))));
            arr_10 [i_2] [i_3 - 3] = ((min(-7, (arr_7 [i_2]))));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_16 = (!var_7);

            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                var_17 = var_9;
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_18 = (((var_1 * -var_5) ? (((max((arr_14 [i_6 + 3] [0] [i_6 + 1] [i_5 + 1]), (arr_19 [i_5 + 1] [i_6] [i_5] [i_6 - 3] [i_7]))))) : ((((((arr_12 [0] [i_5 + 1] [i_4]) ? (arr_11 [i_2] [i_2]) : (arr_9 [6])))) / -var_9))));
                            var_19 = (min((((!((max((arr_6 [i_2]), -6799476240665458419)))))), ((~(arr_6 [i_7])))));
                            arr_20 [i_6] [i_7] [i_6] [i_5 + 1] [i_4] [i_4] [i_6] = (((arr_18 [i_7] [i_6 - 2] [i_5] [i_4] [i_4] [i_2]) ? (((!(arr_14 [i_2] [i_2] [i_5 - 1] [i_6])))) : -16637));
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 14;i_8 += 1)
    {
        var_20 &= ((~(~var_3)));
        arr_24 [7] = (arr_14 [i_8] [i_8 + 4] [i_8 + 1] [i_8]);
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            {
                var_21 = (max((((arr_9 [i_10]) ^ (arr_9 [i_9]))), (((arr_9 [i_9]) << (((arr_9 [i_9]) - 9897))))));
                var_22 = var_1;
                var_23 = ((var_9 ? var_7 : (arr_29 [i_9] [i_10] [i_10])));
                var_24 = -var_4;
            }
        }
    }
    #pragma endscop
}
