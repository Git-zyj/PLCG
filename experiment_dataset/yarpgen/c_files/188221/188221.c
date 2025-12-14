/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [10] &= (arr_0 [i_0]);
        var_19 += (arr_1 [i_0 + 1]);
        var_20 = (min(var_20, (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = (arr_0 [i_0 - 1]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_8 [i_1] = (arr_6 [16] [20]);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_17 [i_1] [i_1] [i_2] [i_4] = (arr_5 [i_3]);
                        var_21 = (arr_5 [i_1]);
                    }
                }
            }
            arr_18 [i_1] [i_2] = (arr_5 [i_1]);
            arr_19 [i_2] [i_2] = (arr_9 [i_1]);
            arr_20 [i_2] = (arr_7 [i_2]);
            arr_21 [15] [i_2] = (arr_5 [i_1]);
        }

        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            arr_25 [i_5] [i_1] [i_1] |= (arr_23 [i_1] [17]);
            arr_26 [i_1] [i_1] = (arr_9 [i_1]);
        }
    }
    var_22 = var_14;
    var_23 += var_0;
    var_24 = var_12;
    #pragma endscop
}
