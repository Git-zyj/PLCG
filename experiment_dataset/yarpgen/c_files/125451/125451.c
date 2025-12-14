/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_1] = 177;
                arr_5 [i_0 - 2] [i_1] [i_0 - 2] = 2627694528;
            }
        }
    }
    var_21 = var_9;
    var_22 = var_6;
    #pragma endscop
}
