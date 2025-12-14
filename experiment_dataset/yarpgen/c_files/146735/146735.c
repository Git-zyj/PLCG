/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 &= ((((~(arr_6 [i_0] [i_0] [i_2 - 3])))) ? var_17 : (~1577876968));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_10 [i_1] [i_2] [i_3] = (arr_6 [i_2 - 2] [11] [i_2 - 3]);
                        arr_11 [i_3] [6] = (var_4 && var_8);
                    }
                }
            }
        }
    }
    #pragma endscop
}
