/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 = var_9;
    var_14 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_15 = (arr_2 [i_0]);
                        var_16 = (max(var_16, 90));
                        var_17 = var_2;
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        var_18 = 166;
                        var_19 |= (arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_1] [i_2 + 2] [i_4]);
                    }
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        var_20 = (arr_14 [i_0] [i_1] [i_2] [i_1 - 1] [i_1 - 1] [12]);
                        var_21 -= var_2;
                    }
                    var_22 = (arr_5 [i_1] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
