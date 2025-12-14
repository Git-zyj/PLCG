/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((min(1, 1)) * ((min(1, (1 | 193))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, 528605910));
                    var_18 = (--973014618);
                }
            }
        }
    }
    var_19 = max(((32124 ? (((var_2 ? 1 : var_9))) : ((28820 ? 44199 : 11069762600977051922)))), 1);
    #pragma endscop
}
