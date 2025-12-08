/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/94
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_6 ? var_12 : var_14));

    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 4)
    {
        var_17 = (i_0 % 2 == zero) ? ((((((-154092379 + 2147483647) >> (((arr_2 [i_0] [i_0]) - 75)))) > (((-1 == (1689892944U))))))) : ((((((-154092379 + 2147483647) >> (((((arr_2 [i_0] [i_0]) - 75)) + 138)))) > (((-1 == (1689892944U)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 4)
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 1)
            {
                {
                    var_18 = (arr_6 [i_0] [i_1] [i_2] [i_2]);
                    arr_8 [i_2] [i_2 - 1] [i_0] = var_11;
                }
            }
        }
        var_19 = var_5;
    }
    for (int i_3 = 0; i_3 < 16; i_3 += 1)
    {
        var_20 = 65;
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 14; i_4 += 4)
        {
            for (int i_5 = 0; i_5 < 16; i_5 += 4)
            {
                {
                    var_21 = (1689892944U);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16; i_6 += 2)
                    {
                        for (int i_7 = 2; i_7 < 14; i_7 += 4)
                        {
                            {
                                var_22 = ((-(max((2683807202U), (1779427596U)))));
                                var_23 = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
