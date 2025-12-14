/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [13] [i_1] [i_0] = var_0;
                    arr_8 [i_0] [i_0] = 1;

                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        var_14 -= (((arr_4 [i_0] [i_1] [i_0]) ? ((max((arr_3 [i_0] [i_0]), var_4))) : (min(1693733049, (arr_4 [i_2 - 1] [i_2 - 1] [i_0 - 1])))));
                        arr_11 [i_0] [i_0] [i_0] [3] = ((!(((0 ? (~0) : (arr_1 [i_0]))))));
                        var_15 = (!44314);
                        var_16 *= (arr_3 [i_1] [i_1]);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            {

                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    arr_20 [i_4] [i_5] [i_6] |= (max(((var_7 ? (arr_15 [i_6 + 2] [i_5 + 3] [i_4 - 1]) : (arr_6 [i_4 - 2]))), (((((max(0, var_8))) ? 1792725545 : ((0 >> (var_12 - 14685207888515125577))))))));
                    var_17 = (max(var_17, ((min(var_3, (((1 + 1) ? (!-4416678226683374368) : var_5)))))));

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        var_18 |= -0;
                        var_19 = var_7;

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            arr_28 [i_7] [i_7] [i_6 + 3] |= (~1);
                            var_20 = (arr_10 [i_5] [i_5] [i_5]);
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_21 = ((31787 || 31773) + -36);
                            var_22 = (((~-7) ? 1729350743 : (31770 < var_11)));
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            arr_33 [i_4] [i_5] [i_5] [i_7] [i_7 + 3] [i_10] = (!15191843732375629461);
                            arr_34 [i_4] [1] [i_5] [0] [i_6] [i_4] [i_4] = arr_24 [i_4] [i_4];
                        }
                    }
                }
                var_23 = ((((~(arr_31 [i_4] [i_4 + 3]))) ^ ((~(arr_29 [i_4 - 2] [i_5] [i_5 - 1] [i_4 - 1] [i_4] [19])))));
                var_24 *= ((!((var_10 || (arr_14 [i_4 - 1])))));
            }
        }
    }
    #pragma endscop
}
