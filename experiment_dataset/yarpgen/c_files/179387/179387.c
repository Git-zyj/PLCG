/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (((((var_9 ? var_17 : (arr_0 [3] [i_0]))) ? (max(var_5, var_16)) : (!118))));
                var_19 = ((((min(6555272957823938273, var_5))) != ((+(min((arr_2 [i_1]), var_7))))));
            }
        }
    }
    var_20 = ((!((((var_11 <= -55) ? (6555272957823938273 | var_1) : var_8)))));
    #pragma endscop
}
