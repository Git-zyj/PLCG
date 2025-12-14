/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (~384916782);
                    arr_9 [i_0] [i_0] = (arr_3 [i_2 + 2]);
                    var_18 = (arr_8 [i_2 + 2] [i_2 + 2] [i_2 + 2]);
                }
            }
        }
    }
    var_19 = ((!(((max(var_13, var_3))))));
    var_20 = var_16;
    #pragma endscop
}
