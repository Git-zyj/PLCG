/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_13 | var_3);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_9 [i_2] [i_1] [i_1] [6] = (((((6579909537060797483 ? 18105 : 49152))) != (arr_6 [i_2] [i_0])));
                        var_20 = var_1;
                    }
                }
            }
        }
        var_21 = 6579909537060797497;
        var_22 = (min(var_22, 6579909537060797497));
        var_23 ^= (((arr_7 [i_0] [4] [i_0 - 1]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 1])));
    }
    #pragma endscop
}
