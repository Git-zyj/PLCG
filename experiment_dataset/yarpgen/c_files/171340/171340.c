/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = ((var_14 ? -5505 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_8 [i_0] = ((~(((((var_9 ? 81 : (arr_7 [i_0 - 2])))) ? (arr_7 [i_0 + 2]) : (~1)))));
                arr_9 [i_0 + 1] [i_0 - 3] [i_0 + 1] = (((((min((arr_1 [10] [18]), -8332))) ? (((max((arr_4 [i_0] [1]), 1)))) : (((arr_1 [i_1 + 2] [i_1 - 1]) ? 252 : var_2)))));
            }
        }
    }
    #pragma endscop
}
