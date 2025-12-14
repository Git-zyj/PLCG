/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((min(var_9, var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = (arr_5 [i_0] [i_0] [i_0]);
                    arr_6 [i_0] [i_0] [i_2] = 2147483647;
                    var_21 = (((((arr_1 [i_0]) + 2147483647)) << (((arr_5 [i_0] [i_1] [i_2]) - 55300))));
                    var_22 -= (arr_0 [i_1]);
                }
            }
        }
    }
    var_23 = var_2;
    #pragma endscop
}
