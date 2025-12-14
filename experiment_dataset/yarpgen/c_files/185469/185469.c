/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_14 -= 13363329598107291657;
                arr_4 [i_0] [i_0] [i_1] = 0;
            }
        }
    }
    var_15 = var_3;
    var_16 = var_8;
    var_17 |= var_0;
    #pragma endscop
}
