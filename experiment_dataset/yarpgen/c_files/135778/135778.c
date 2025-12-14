/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (195 || 78);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    {
                        var_13 = 209;
                        arr_11 [i_0] = (arr_5 [i_0 + 2] [i_0 + 1] [i_1 - 1]);
                    }
                }
            }
        }
        var_14 *= var_7;
    }
    #pragma endscop
}
