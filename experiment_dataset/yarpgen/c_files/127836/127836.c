/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = (max(((max((arr_1 [i_0] [i_0]), (max(var_9, 1))))), ((var_17 ? -var_6 : (var_15 <= var_0)))));
        var_21 *= (var_19 / (arr_1 [10] [i_0]));
        arr_2 [i_0] = min(((((((1 ? var_5 : (arr_1 [i_0] [i_0])))) || 3181565555))), ((~(((arr_1 [i_0] [i_0]) ? 1 : var_12)))));
        arr_3 [i_0] = ((~((1 ? 179 : 49142))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((((min(16378, -230166298))) ? (arr_5 [i_1]) : var_2));
        var_22 = (((((!1) != var_18)) ? (~var_14) : (41199 <= 1)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_11 [i_1] = ((((!(arr_4 [i_1])))));
                    arr_12 [i_1] = min((arr_4 [i_1]), (max(var_7, (arr_7 [5] [i_2] [i_3]))));
                    arr_13 [0] [i_2] [i_2] [0] = (((arr_10 [i_2]) ? (arr_8 [i_1] [i_2] [i_3]) : var_18));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = ((49142 ? ((~((1 ? var_12 : var_15)))) : (max((~var_1), -25))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_22 [i_4] [i_4] [i_4] = var_19;
            arr_23 [i_4] = (var_2 * -495398872);
        }
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_23 = (min(var_23, (((((~(arr_10 [i_6]))) + (((max(49158, (16387 > var_1))))))))));
        var_24 = var_12;
    }
    var_25 -= ((var_12 ? ((-1616400872 ? 1 : 1077379937)) : (+-0)));
    var_26 = (!1);
    #pragma endscop
}
