/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((42428 | ((var_5 ? -var_12 : var_8))));

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_21 = var_16;
        var_22 = -1550477129;
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_23 = (arr_3 [i_1 - 2]);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_9 [i_1] [i_2] [i_2] [i_1] = (min(-1550477147, ((-(arr_2 [i_1])))));
                    var_24 |= ((4405308534738163977 ? -1 : (((arr_0 [i_1 - 2] [i_2 + 2]) ? (arr_0 [i_1 - 2] [i_2 - 1]) : (arr_0 [i_1 - 2] [i_2 + 1])))));
                }
            }
        }
        var_25 &= (((arr_0 [i_1 + 3] [i_1]) ? (((max(189, 2047)))) : ((761347448 ? 63506 : 761347437))));
        arr_10 [i_1] |= -7509086792195152270;
    }
    #pragma endscop
}
