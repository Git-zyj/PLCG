/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((min((((arr_3 [i_0 - 3] [i_0]) ? (arr_3 [i_0 - 4] [i_0 - 1]) : (arr_3 [i_0 - 1] [i_0]))), (((min(27645, -18876)))))))));
                arr_7 [i_0] [i_0] = ((((((275788118 < (arr_1 [i_1]))))) <= (min(819111407, 4019179192))));
            }
        }
    }
    var_15 ^= (!(((((max(var_13, var_12))) ? var_0 : (min(4019179177, 275788105))))));
    var_16 = (min(234, 255));
    #pragma endscop
}
