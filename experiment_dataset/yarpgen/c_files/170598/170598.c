/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0 - 2] [i_0] = (arr_0 [i_0]);
                arr_5 [i_0] [i_0] = ((min((max(var_1, 1)), 3502946900462025107)));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_9 [i_2] = -3502946900462025093;
        var_12 -= var_5;

        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            arr_12 [i_3] = 1;
            arr_13 [15] [i_2] [i_3] = 0;
            var_13 = 1;
            arr_14 [i_2] [i_3] [i_2] = -1;
        }
        arr_15 [i_2] = (arr_10 [i_2] [i_2] [i_2]);
    }
    #pragma endscop
}
