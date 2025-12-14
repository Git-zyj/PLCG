/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_15 = (((arr_1 [i_0 - 1] [i_0 + 1]) - (arr_1 [i_0 - 1] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_16 += (((arr_2 [4] [i_2] [4]) ? (arr_2 [8] [i_1] [8]) : (arr_2 [6] [6] [6])));
                        arr_10 [i_0] = -var_7;
                        arr_11 [i_0] [i_1] [i_0] [i_3] [i_3] = 15467363889245452494;
                        var_17 = (min(var_17, ((((arr_9 [i_0 + 1]) ? (arr_9 [i_0 - 1]) : (arr_9 [i_0 - 1]))))));
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, var_1));
    #pragma endscop
}
