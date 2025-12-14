/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (max(1, var_13));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] = 116;
            var_17 = (arr_5 [i_0]);
            arr_7 [4] [i_1] [i_1] = (arr_0 [i_0]);
        }
        var_18 = (max(var_18, (((((((max(-6317308688210059056, (arr_5 [8]))) <= (max((arr_5 [i_0]), 66))))) + (((((var_14 ? -6317308688210059050 : 0)) < 147))))))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_19 -= (var_11 && var_4);
        var_20 = var_5;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_12 [i_3] = (~603388214289132887);
        var_21 = 6317308688210059056;
        var_22 = 54;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_20 [i_3] [i_3] [i_3] [i_3] = -4939884026167687580;
                        arr_21 [i_3] [i_3] [i_3] [i_3] [1] = ((~((((arr_9 [i_6]) != 0)))));
                    }
                }
            }
        }
    }
    var_23 |= var_10;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            {

                /* vectorizable */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    var_24 ^= (43 % 238);
                    var_25 = ((-(var_6 < 255)));
                }
                for (int i_10 = 3; i_10 < 23;i_10 += 1)
                {
                    var_26 = ((-(min(-6317308688210059059, var_9))));
                    var_27 = 1862599238432017278;
                }
                for (int i_11 = 1; i_11 < 23;i_11 += 1)
                {

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_28 = 384189899;
                        var_29 = ((!(arr_36 [i_11] [i_11 + 1] [i_11 + 2] [i_11 + 2])));
                        var_30 = (var_7 >= var_15);
                    }
                    var_31 = ((-4939884026167687580 ? -6980742255819931962 : (((var_0 ^ (arr_26 [i_11 + 1] [i_11] [i_7]))))));
                    arr_38 [i_7] [i_7] = ((((((arr_32 [i_7] [i_11] [i_11 + 1] [i_7]) / var_6))) ? ((max(1, 65535))) : var_15));
                }

                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    var_32 = (max(var_32, var_14));
                    arr_41 [i_13] [i_7] [1] = ((min(-1, var_3)));
                    var_33 = (((!4205373023430044262) || 83));
                    arr_42 [i_7] = (~(min((arr_30 [i_7] [i_8] [i_13]), -54)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 21;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            {
                arr_50 [i_15] [i_14] = ((var_4 ? ((max(-63, (var_16 < var_7)))) : (max(12449, ((-7742645542998434087 ? 55704 : 0))))));
                var_34 = ((!(arr_47 [2] [i_15])));
            }
        }
    }
    #pragma endscop
}
