/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = (max(4294967295, 64099));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_17 = var_13;
                        arr_11 [i_0] [i_1] [1] [i_2] [i_3] = (!1437);
                        arr_12 [i_0] [i_1] [i_1] [6] [i_3] [0] = (max(-9796, ((((arr_9 [i_0] [i_0] [i_0]) < (arr_5 [i_2 - 1]))))));
                    }
                }
            }
        }
    }
    var_18 = var_2;
    var_19 = (min(1437, (!-1758672026924530180)));
    var_20 = var_0;
    var_21 = var_8;
    #pragma endscop
}
