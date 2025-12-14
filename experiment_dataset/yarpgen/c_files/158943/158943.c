/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (arr_4 [i_2]);
                    var_15 = (0 ? 75 : -2361608413208706465);
                    arr_9 [i_0] [i_1] [i_2] = ((536870911 >> ((((1 << (352734271 - 352734260))) - 2030))));
                    var_16 += ((min((arr_6 [i_2] [i_1] [i_2]), (max(65535, var_5)))));
                }
            }
        }
        var_17 = (max(var_17, 536870888));
    }
    for (int i_3 = 3; i_3 < 10;i_3 += 1)
    {
        arr_13 [i_3 - 1] = (max(-2035807620, -2035807639));
        var_18 = (min(var_18, var_6));
        var_19 = -2361608413208706465;
        var_20 = (((~var_12) << (((((arr_11 [i_3 + 1]) ? (arr_10 [i_3 - 3] [i_3 + 2]) : (arr_10 [i_3 - 1] [i_3 - 1]))) - 24))));
        arr_14 [i_3 - 3] [i_3 + 1] = (((var_6 ? 26907331 : (max(2361608413208706464, 2361608413208706484)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_28 [i_4] [i_5] [i_6] [i_6] [i_6] [i_7 + 2] [i_8] = (arr_15 [i_7 - 1]);
                                var_21 = 4873108643700315644;
                                var_22 = (-2361608413208706475 <= 4873108643700315644);
                            }
                        }
                    }
                    arr_29 [i_4] = (0 ? (((arr_17 [i_4]) / (arr_25 [i_4] [i_5] [i_6]))) : 2114324789);

                    for (int i_9 = 1; i_9 < 22;i_9 += 1)
                    {
                        var_23 = (!-2361608413208706450);
                        var_24 = (((arr_19 [i_4] [i_5]) ? var_8 : var_14));
                    }
                }
            }
        }
        var_25 = ((26512 ? 22658 : var_4));
    }
    var_26 = 112;
    #pragma endscop
}
