/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 32291;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_1] [i_2] [5] [i_0] = ((-(arr_7 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_3 - 1])));
                        arr_9 [4] [0] = (arr_0 [i_3]);
                        var_12 = ((!(arr_6 [i_0 - 1])));

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            var_13 |= ((4080050024 ? 8656797645676867073 : -32288));
                            arr_12 [i_3] [i_3] [i_2] [i_4] [i_2] [i_0 - 1] = var_9;
                            var_14 = (arr_11 [i_1] [i_1] [6] [i_4]);
                        }
                    }
                }
            }
        }
        var_15 = (min(var_15, ((((arr_2 [i_0 - 1] [i_0] [i_0 - 1]) << (3140599558 - 3140599540))))));
    }
    var_16 = var_0;
    var_17 = (max(var_17, var_8));
    #pragma endscop
}
