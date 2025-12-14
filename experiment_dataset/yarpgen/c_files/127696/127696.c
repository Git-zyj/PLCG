/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (!var_2)));
                var_20 = (min(((max(var_4, var_8))), (max((-7570838196444174413 | -7570838196444174419), 3504214009))));
                arr_5 [i_0] [i_1] [3] = (((((arr_0 [9] [i_0 - 3]) ? (arr_0 [i_0 - 2] [i_0 - 4]) : (arr_0 [i_0 - 3] [i_0 - 2]))) / (((((arr_2 [3] [8]) <= (arr_3 [4])))))));
            }
        }
    }
    var_21 = var_7;
    #pragma endscop
}
