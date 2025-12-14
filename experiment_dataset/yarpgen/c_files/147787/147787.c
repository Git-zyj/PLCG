/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_8 [17] [i_0] [i_3] [i_1] [17] [i_3] = (arr_4 [i_3 - 3] [i_3] [i_2 - 2]);
                        var_15 = ((var_11 && (arr_2 [i_2 + 1] [i_2 - 2] [i_3 - 1])));
                        arr_9 [i_0] [i_3] [5] [i_2] [i_3] [5] = (((arr_1 [i_2 + 2]) % (arr_1 [i_2 - 1])));
                        var_16 = ((!(arr_2 [i_3 - 1] [1] [i_1])));
                    }
                }
            }
        }
        arr_10 [i_0] = (((~var_6) / var_0));
        var_17 = ((((arr_7 [i_0] [i_0] [i_0]) + 2147483647)) >> (((arr_3 [i_0] [i_0] [i_0]) - 38145)));
    }
    #pragma endscop
}
