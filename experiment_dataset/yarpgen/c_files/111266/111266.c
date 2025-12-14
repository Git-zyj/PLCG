/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 0;
    var_12 = (min(var_12, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = ((var_5 ? 7084888719522674585 : 1));
                arr_6 [13] [6] = (min(60, 43));
                var_14 += ((var_4 ? (arr_4 [5] [i_0]) : (arr_3 [i_0] [i_1])));
            }
        }
    }
    var_15 ^= (~(min(var_8, ((var_6 ? -54 : var_8)))));
    #pragma endscop
}
