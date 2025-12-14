/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(1, 14589));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (((-2805339511108886931 + 9223372036854775807) << (((-2805339511108886931 + 2805339511108886974) - 43))));
                arr_7 [i_1] [i_0] = ((((max(75, 16376))) ? 1 : -32741));
                var_13 |= ((~(~-58)));
                var_14 = ((~(max((arr_5 [i_0] [i_0 - 1]), 2164198070))));
            }
        }
    }
    #pragma endscop
}
