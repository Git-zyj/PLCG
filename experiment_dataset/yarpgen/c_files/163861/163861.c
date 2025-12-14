/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [1] [i_1] [i_2] = (((arr_4 [i_0] [i_1] [i_2]) | ((45664 ? (arr_6 [i_0]) : var_13))));
                    arr_10 [i_2] = (((arr_0 [i_0]) <= (arr_0 [i_1])));
                    arr_11 [i_0] [i_0] [i_0] [i_2] = 0;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 ^= (((arr_0 [i_0]) ? (arr_5 [i_0]) : 104));
                        var_16 = var_10;
                        arr_16 [i_2] = (+((((arr_7 [14] [i_2] [6] [i_0]) || (arr_6 [i_3])))));
                    }
                }
            }
        }
        arr_17 [i_0] = var_14;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_17 -= (arr_3 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_31 [i_0] [9] &= (((1661767568 ? 16527 : (arr_24 [i_4] [i_4]))));
                                arr_32 [i_6] [i_4] [11] [i_6] [i_7] = var_3;
                            }
                        }
                    }
                    var_18 = (((((~(arr_7 [i_0] [i_4] [i_5] [i_4 + 1])))) ? 14246108156850883372 : (arr_25 [i_0] [i_4 + 1] [i_0] [i_0])));
                }
            }
        }
    }
    var_19 = (((var_1 < var_12) * ((-(var_6 * 0)))));
    var_20 = var_7;
    #pragma endscop
}
