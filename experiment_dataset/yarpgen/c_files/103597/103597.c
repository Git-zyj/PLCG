/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += 4690094401333974515;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (!99);
                    var_14 = 147;
                }
            }
        }
    }
    var_15 = -var_11;
    #pragma endscop
}
