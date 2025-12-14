/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_2] [18] = var_0;
                    arr_8 [10] [20] [i_2] [8] = var_7;
                    arr_9 [i_0] = 0;
                }
            }
        }
    }
    var_12 = (((!((min(var_5, var_6))))));
    #pragma endscop
}
