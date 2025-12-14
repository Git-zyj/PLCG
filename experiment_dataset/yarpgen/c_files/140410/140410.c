/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((~((min(var_0, 21218)))))));
    var_11 = (((~var_5) ? 15538 : ((min(var_6, -708899280)))));
    var_12 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_1] = 708899290;
                    var_13 = (2188227741 * -708899280);
                }
            }
        }
    }
    var_14 = (min(((var_4 ? 55129 : 44318)), 2188227740));
    #pragma endscop
}
