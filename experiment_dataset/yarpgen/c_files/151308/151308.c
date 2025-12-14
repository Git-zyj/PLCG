/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_10 ^= 0;
                    var_11 |= ((((min((-4 && 127), 165))) < (max((1 >= -26651), -27512657))));
                    var_12 = min(135, 0);
                    var_13 ^= (~9223372036854775807);
                }
            }
        }
    }
    var_14 = (min((((((((min(0, -32))) + 2147483647)) >> (15382 - 15375)))), (max(((min(-32, -35))), 6848457657865599296))));
    #pragma endscop
}
