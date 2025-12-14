/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1 + 1] = 33;
                arr_7 [i_1] [i_0] = var_12;
            }
        }
    }
    var_13 |= (max(var_1, (max(var_12, var_7))));
    var_14 = 1;
    var_15 = max(var_3, (max(var_5, (max(7804, 1)))));
    #pragma endscop
}
