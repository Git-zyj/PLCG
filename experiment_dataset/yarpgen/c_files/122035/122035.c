/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_1] = (!(!255));
                var_16 = (min(((-(var_3 + 255))), (arr_3 [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_3] = (max(((-(((arr_6 [i_2] [1]) ? -7547211544021139910 : (arr_9 [i_2]))))), -30977));
                var_17 = var_2;
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_17 [i_5] [i_5] [i_5 + 2] [i_4] [i_5] [i_2] = (!210);
                            arr_18 [i_2] [i_5] [i_4 - 1] [i_5] = (arr_5 [i_5]);
                            arr_19 [i_5] [i_2] [i_3] [i_4] [i_5] = ((206 ? 27294 : -18488));
                        }
                    }
                }
            }
        }
    }
    var_18 = ((-(max(((var_4 ? var_8 : var_7)), var_2))));
    #pragma endscop
}
