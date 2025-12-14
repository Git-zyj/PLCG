/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = var_1;
                arr_6 [i_0] [i_0] [i_1] = ((((((-11986 ? (-32767 - 1) : 0)) + 2147483647)) >> ((((min(var_3, var_1))) + 24923))));
            }
        }
    }
    var_11 = (max(14839648910493268763, (max(var_5, 17680))));
    #pragma endscop
}
