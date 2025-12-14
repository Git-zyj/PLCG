/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 ^= (min(var_8, (max(27153, (arr_0 [i_0] [i_0])))));
                var_21 = ((~(min(((2000198286 ? 1768502767 : var_4)), (max((arr_4 [i_0 - 1] [i_0 + 2] [i_1]), 7147430152838397236))))));
            }
        }
    }
    var_22 &= var_14;
    #pragma endscop
}
