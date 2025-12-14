/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 |= max(531371445, var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = (min((min(-1145769160526841102, -531371447)), 20));
                arr_4 [i_1] [i_0] = min(531371445, 12268);
            }
        }
    }
    #pragma endscop
}
