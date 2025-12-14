/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = ((!((((arr_1 [i_1] [i_2]) ? (arr_4 [i_0]) : var_4)))));
                    arr_9 [i_1] = (!-2211679294578673386);
                }
            }
        }
        arr_10 [i_0] = (1688849860263936 || 6037410845842327702);
        var_14 -= ((-(arr_6 [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_15 [i_3] &= (arr_4 [i_3]);
        arr_16 [i_3] |= var_9;
    }

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_15 = (min((arr_5 [i_4] [i_4]), ((min(var_0, (arr_6 [i_4] [20]))))));
        var_16 = (((-((var_5 - (arr_5 [i_4] [i_4]))))));
    }
    var_17 = (min(var_1, var_1));
    #pragma endscop
}
