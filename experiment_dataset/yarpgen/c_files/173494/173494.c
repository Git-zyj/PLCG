/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((!869470653370988749), (((((max(var_3, 5)))) % var_10))));
    var_13 ^= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (max(var_5, 0));
                var_15 = (max(var_15, (((-(arr_3 [i_0]))))));
                var_16 |= ((((((var_6 ? -7 : 109)) ? ((((arr_2 [8]) != 12057))) : ((min((arr_5 [i_1] [i_0]), var_11)))))));
            }
        }
    }
    #pragma endscop
}
