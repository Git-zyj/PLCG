/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = var_16;
                var_20 = (min(var_20, (((((((arr_4 [i_0 + 2] [22] [i_0 + 4]) ? (arr_3 [i_0] [i_1]) : var_19))) ? (arr_4 [i_0] [13] [i_0 + 2]) : (~15184))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_8 [i_2] = var_8;
        arr_9 [i_2] [3] = (arr_7 [i_2]);
        arr_10 [i_2] = var_7;
    }
    var_21 = var_7;
    #pragma endscop
}
