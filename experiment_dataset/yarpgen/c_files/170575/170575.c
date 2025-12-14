/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_7;
    var_15 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = (var_6 != (arr_0 [i_2 + 1] [6]));
                                var_17 = (arr_9 [i_2 - 1] [i_3] [i_4] [i_4] [i_4]);
                            }
                        }
                    }
                    var_18 += var_0;
                }
            }
        }
        arr_10 [8] [i_0] = ((arr_6 [i_0] [i_0] [i_0]) ? (arr_3 [i_0]) : (((arr_7 [i_0] [i_0]) ? var_12 : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    #pragma endscop
}
