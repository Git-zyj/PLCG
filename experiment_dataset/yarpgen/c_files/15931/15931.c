/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = var_6;

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_14 *= var_10;
                    var_15 = -1;
                    arr_9 [i_0] [i_1] [i_0] [i_0] = -11;
                    arr_10 [i_0 - 1] [i_0] = var_11;
                }
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    arr_13 [i_0] [i_0] [i_0] [i_3] = (arr_4 [i_0] [i_1] [i_0]);
                    var_16 = (arr_11 [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_3 + 1]);
                }
                var_17 = (arr_12 [i_0] [i_1] [i_0 - 1] [i_0]);
            }
        }
    }
    var_18 = 4;
    var_19 = var_3;
    #pragma endscop
}
