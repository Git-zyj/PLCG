/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = 70364449210368;
    var_16 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 += ((-((-(max(536862720, 112))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_18 = ((-((var_3 ? var_0 : var_0))));
                        arr_11 [i_0] = ((!(arr_10 [i_0] [i_0] [i_0] [5])));
                        arr_12 [i_0] [i_0] [i_0] [20] [i_0] [i_0] = 15857;
                    }
                    arr_13 [i_0] = ((!((((arr_5 [i_2] [i_0] [i_0] [i_0]) ? 8858966958830275256 : (((1 ? var_6 : 2899104009))))))));
                    arr_14 [21] [i_1] = ((2899104009 || (((-1 ? ((1874010369196729461 ? 112 : 1784593548)) : ((293146348 ? 37 : -37)))))));
                }
            }
        }
    }
    #pragma endscop
}
