/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 *= (min(-27614, (arr_4 [i_0])));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_14 = (min(var_14, (arr_9 [i_3])));
                        arr_12 [i_0] [i_3] [i_2 - 3] [i_3] &= (var_0 / var_9);
                        var_15 &= -27620;
                        var_16 ^= (!1662761309746885865);
                        arr_13 [i_0] [i_0] [i_0] = ((((arr_11 [i_0] [i_2] [i_0]) ? (arr_2 [i_0] [i_1 - 3]) : var_7)));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                arr_18 [i_4] [i_5] [i_5] = (arr_17 [i_5] [i_5] [i_5]);
                var_17 = (min(var_17, ((((-27605 + 114076706) ? 114076706 : 4294967295)))));
                var_18 = (max(var_18, 27617));
            }
        }
    }
    #pragma endscop
}
