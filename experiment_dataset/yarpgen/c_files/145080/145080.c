/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [10] [i_1] [i_2 + 1] [i_2 + 1] = (arr_6 [i_1] [i_1 + 4] [i_1]);
                    var_21 = -3736;
                    var_22 = (max(((-(arr_8 [i_0] [i_1 + 3] [11] [i_2 + 2]))), ((-(arr_8 [i_0] [i_1 + 2] [i_2] [i_2 - 1])))));
                    var_23 = var_15;
                }
            }
        }
    }
    var_24 = var_16;
    var_25 = 0;
    var_26 = 22;
    #pragma endscop
}
