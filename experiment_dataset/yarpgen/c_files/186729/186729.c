/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((!(((0 ? 18732 : 29034)))))) / var_6));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (min((!7845537147215901620), ((18714 && (arr_1 [2])))));
                var_14 = ((-((min((arr_3 [i_0 - 2] [8]), 46804)))));
            }
        }
    }
    var_15 = (max(var_7, 18731));
    #pragma endscop
}
