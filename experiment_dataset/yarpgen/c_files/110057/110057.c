/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] = (((~-1992108944) ? 214 : (arr_1 [i_0 - 2])));
                    arr_7 [i_1] [i_1] [i_1] [15] = (var_6 / var_0);
                    arr_8 [i_0] [i_1] [i_1] = (arr_0 [1]);
                }
            }
        }
        arr_9 [14] = (arr_4 [i_0 - 1] [i_0 - 1]);
    }
    var_13 = var_4;
    #pragma endscop
}
