/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((min((min(-72, -1)), (2857443507455231381 || 1))), -31530));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((((min(65, -2857443507455231381)) + (((min(1, 14))))))) ? 40 : (min(-2857443507455231382, (min(2857443507455231386, -50)))))))));
                var_15 = ((-2857443507455231400 / (min(((min((arr_5 [i_1 + 3]), -78))), (((arr_1 [i_0] [i_0]) / 93))))));
            }
        }
    }
    var_16 = var_5;
    #pragma endscop
}
