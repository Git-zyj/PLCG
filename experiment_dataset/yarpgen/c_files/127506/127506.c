/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (max(var_16, var_9));
                arr_6 [i_0] = ((((((var_2 ? var_13 : var_2)))) ? ((((max(0, var_13))) ^ ((var_0 ? var_13 : 0)))) : var_3));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_17 = (max(var_17, 1));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                {
                    var_18 = arr_10 [i_2] [i_4 + 3];
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((((((190 - (arr_13 [i_5 + 2] [i_4 + 3] [i_2]))) + 2147483647)) >> (var_13 - 34))))));
                                var_20 += ((((~(arr_9 [i_3] [i_6 - 1])))) ? ((22 ? var_9 : var_14)) : (((var_8 ? var_2 : var_3))));
                                arr_19 [i_5] [i_5] [18] [i_5 - 1] [i_6] [i_3] [i_5 - 1] = var_4;
                                var_21 = (min(var_21, var_6));
                            }
                        }
                    }
                }
            }
        }
        arr_20 [i_2] = -89;
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_22 = (max(var_22, var_6));
        var_23 = ((((-28158 ? ((min(234, (arr_22 [i_7])))) : (((!(arr_4 [i_7] [i_7])))))) - (((var_9 * var_11) | ((111 ? 1419830371 : (arr_12 [i_7] [10] [i_7] [i_7])))))));
    }
    #pragma endscop
}
