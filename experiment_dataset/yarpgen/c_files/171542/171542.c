/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_0] [i_3] |= (!6);
                            var_17 -= (((((var_5 ? var_4 : var_3))) ? (arr_0 [i_1] [i_1 - 1]) : ((var_7 ? var_9 : 250))));
                        }
                    }
                }
                arr_13 [i_1] [i_1 - 1] [3] &= max((max(0, var_4)), (arr_1 [i_0]));
            }
        }
    }
    var_18 = (min(var_18, ((min((max(4294967295, -1)), var_12)))));
    var_19 = ((var_13 ? ((((~-2119554711) < var_11))) : 243));
    #pragma endscop
}
