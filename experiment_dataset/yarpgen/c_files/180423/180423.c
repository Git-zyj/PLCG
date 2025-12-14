/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = var_13;
    var_17 = ((31090 <= (min((~-12414), (1964869587 / -13638)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0 + 2] |= ((((((arr_5 [i_0] [i_1]) << (var_14 - 5937268618873425468)))) & var_11));
                var_18 = (((min(var_2, var_0)) % 127));
            }
        }
    }
    #pragma endscop
}
