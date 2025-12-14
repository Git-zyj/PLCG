/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_10 = (~var_7);
                                var_11 = 1;
                            }
                        }
                    }
                }
                arr_14 [i_0] [10] |= var_1;
            }
        }
    }
    var_12 = var_0;

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_6] [i_7] [i_7] = 1;
                    var_13 -= (min((((!30824) ? var_7 : (arr_17 [i_6 - 1]))), var_7));
                    arr_24 [i_5] [i_6] [i_7] [i_7] = (min(((0 ? 4017881950214135448 : 30824)), (((((min(188, 1))) ? (min(1, 9223372036854775807)) : (((var_2 ? var_6 : var_4))))))));
                }
            }
        }
        var_14 = (((26 + -25) <= ((-29 ^ (arr_18 [i_5] [i_5])))));
    }
    #pragma endscop
}
