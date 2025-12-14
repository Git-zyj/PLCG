/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = 4887191820450778727;
                var_15 = (arr_2 [i_1]);
                var_16 += (arr_0 [i_1]);
            }
        }
    }
    var_17 = var_5;
    var_18 |= min((min((4887191820450778721 | 25), (var_9 ^ 272678883688448))), 18446744073709551615);
    #pragma endscop
}
