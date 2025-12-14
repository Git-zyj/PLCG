/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (~3454302302);
        var_18 = (((arr_0 [i_0]) ? var_6 : var_11));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [2] = ((var_15 ? (((!(arr_4 [i_0] [i_1] [1])))) : (!var_1)));
                    var_19 ^= ((-(arr_6 [i_2] [i_1] [i_0] [i_0])));

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        var_20 = ((((((!(arr_1 [i_2]))))) % var_7));
                        arr_11 [5] [i_0] [8] [i_1] [i_2] [2] = var_0;
                    }
                    var_21 = (max(var_21, ((((arr_4 [7] [i_1] [7]) ^ var_5)))));
                    var_22 = var_9;
                }
            }
        }
        var_23 = 247;
    }
    var_24 = var_4;
    var_25 = (max(var_25, ((min(-var_7, (var_2 & var_0))))));
    var_26 = ((var_0 ? (min(var_16, (~65517))) : var_11));
    #pragma endscop
}
