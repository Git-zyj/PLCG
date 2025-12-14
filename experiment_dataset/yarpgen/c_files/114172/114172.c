/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_11 -= 169;
        var_12 = ((~(~2424671978)));
        var_13 = ((((min(9223372036854775807, var_7))) && -var_3));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        var_14 = (max((~1), var_7));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 16;i_3 += 1)
            {
                {
                    var_15 = -4878590154728308945;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_16 = (arr_12 [16] [16] [i_3]);
                                var_17 = (arr_9 [i_3] [i_2] [i_3]);
                                var_18 = (~(arr_13 [15] [15] [i_5] [1] [i_3] [i_4]));
                                var_19 -= var_0;
                                var_20 = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (max((-9223372036854775807 - 1), 9223372036854775807));
    #pragma endscop
}
