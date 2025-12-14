/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = max(var_1, (!var_10));
                    var_12 = ((~(max(435233712466595873, (((arr_0 [i_0]) / 17713384561270292120))))));
                }
            }
        }
    }
    var_13 = ((((~(max(var_0, -731261730)))) >= ((min((38886 != var_8), -87172231)))));
    var_14 = var_10;
    var_15 = (((-var_9 ^ (var_4 <= 1))));
    #pragma endscop
}
