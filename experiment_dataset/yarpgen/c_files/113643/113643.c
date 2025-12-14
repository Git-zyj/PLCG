/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (max(var_16, (((((21 ? var_6 : (arr_1 [10]))) / var_8)))));
        arr_4 [i_0] = (((((((arr_1 [i_0]) ? var_8 : var_6)))) * ((1023 - (1 < -16384)))));
        arr_5 [i_0] [i_0] |= (arr_3 [i_0] [i_0]);
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1 - 3] = ((((((arr_7 [i_1] [i_1 - 3]) > (arr_7 [18] [i_1 + 1])))) & (((!(arr_7 [i_1] [i_1 + 1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_13 [20] [i_3] [i_3] = ((-((var_1 - (((arr_9 [19] [19]) ? (arr_3 [3] [5]) : -8924634662822205755))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_17 ^= var_8;
                                arr_19 [19] [i_2] [i_3] [i_2] [i_1] = var_14;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, ((var_15 | ((~(var_14 << var_6)))))));
    #pragma endscop
}
