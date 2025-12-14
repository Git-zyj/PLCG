/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (42 | 5983044841837006261);
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = (arr_4 [i_1 + 2] [i_1 + 2] [i_1]);
                var_20 ^= (arr_4 [i_1 + 2] [14] [i_0]);
            }
        }
    }
    var_21 = var_8;
    #pragma endscop
}
