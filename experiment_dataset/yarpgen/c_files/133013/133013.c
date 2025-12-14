/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max(187, 110)));
    var_14 = (min(var_14, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (max(5832685936386815009, (arr_4 [0] [i_0] [i_1])));
                arr_7 [4] [i_0] [i_1] = (min(-96, -96));
            }
        }
    }
    #pragma endscop
}
