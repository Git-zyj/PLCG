/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = var_2;
                arr_5 [i_1] = var_10;
            }
        }
    }
    var_13 = 3697251038;
    var_14 *= 16123118818753440615;
    var_15 -= 16123118818753440622;
    #pragma endscop
}
