/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [9] [i_1] = (arr_2 [i_0 - 1] [i_1]);
                var_15 = (arr_1 [i_1] [i_0]);
            }
        }
    }
    #pragma endscop
}
