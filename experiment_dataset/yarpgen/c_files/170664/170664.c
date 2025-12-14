/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_1] = 112;
                var_15 = 31;
                arr_6 [i_1] = (min((!-98), (((arr_2 [i_0] [i_0 - 2] [i_1]) ? ((var_1 ? var_0 : 45191150)) : -1))));
            }
        }
    }
    var_16 ^= var_7;
    #pragma endscop
}
