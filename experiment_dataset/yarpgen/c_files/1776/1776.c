/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = min(((-(max(var_2, 15942205258827159512)))), (~8611719932008101896));
                var_16 = ((17 ? ((var_4 >> (var_4 - 101))) : (((arr_2 [i_0 - 2]) ? 127 : (arr_5 [i_0 - 1] [i_1 - 1] [i_1])))));
                var_17 = (min(var_17, (((81 ? -115 : (-127 - 1))))));
            }
        }
    }
    #pragma endscop
}
