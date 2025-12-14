/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = (max((0 - 7430401271089965714), (((var_0 ? var_12 : var_10)))));
                    var_16 = (((((arr_2 [i_2]) ? (var_7 * 1) : (arr_0 [i_0]))) >= ((((1 & 725710045) | (var_11 | var_5))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                var_17 -= ((~((((max(var_4, var_14)) <= (((var_1 ? var_0 : (arr_13 [i_4])))))))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_18 = (max(var_18, var_11));
                            arr_19 [i_3] [i_3] = var_6;
                        }
                    }
                }

                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    arr_22 [i_3] [i_4] [i_3] = (min(((~(arr_10 [i_7 - 2]))), ((((arr_10 [i_3 + 2]) < (arr_11 [i_7 - 2]))))));
                    var_19 += ((var_3 ? (((arr_9 [i_4]) / var_1)) : (((((!(arr_9 [i_4]))))))));
                }
            }
        }
    }
    #pragma endscop
}
