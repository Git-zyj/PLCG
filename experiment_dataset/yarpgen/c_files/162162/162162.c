/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0 + 1] = (((((arr_0 [13]) ? 79 : (arr_0 [i_0 - 1])))) ? 2840000613 : ((1454966683 / (arr_1 [i_0 - 1] [i_0 + 1]))));
        arr_3 [i_0 + 1] = (!2840000624);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_19 = (var_10 <= 2);
                        var_20 = var_6;
                    }
                }
            }
        }
    }
    var_21 = (max((((!-26) / var_17)), (!-2)));
    #pragma endscop
}
