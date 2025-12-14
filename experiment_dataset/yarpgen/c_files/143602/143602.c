/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = (max((max((arr_4 [i_1 - 1] [i_1]), (arr_4 [i_1 - 1] [i_1]))), ((((2146959360 ? -6876959010889674229 : -13))))));
                arr_8 [i_1] [i_1] = var_2;
                arr_9 [i_0] [i_1] [i_1] = (((((12 / 2146959360) ^ (arr_4 [i_1] [i_1 - 1]))) & (((((max(255, var_8))) ? 133 : (min(0, 1246303598)))))));
            }
        }
    }
    #pragma endscop
}
