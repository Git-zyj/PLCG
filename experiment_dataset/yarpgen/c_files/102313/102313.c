/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    var_21 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_22 = (-32767 - 1);
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (-32767 - 1);
                    arr_9 [i_2] [i_1] [i_1] [i_2] = -32750;
                    arr_10 [4] [i_0] [i_1] [i_2] = 32762;
                    arr_11 [i_2] [15] [i_0] [i_2] = 5;
                }
            }
        }
    }
    var_23 = var_5;
    #pragma endscop
}
