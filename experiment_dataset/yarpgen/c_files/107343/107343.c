/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = (min((arr_1 [i_1]), (arr_5 [2] [i_0 + 1] [i_0 + 1])));
                var_15 ^= ((min(((3823667964 | (arr_2 [i_1])), (32762 / var_6)))));
            }
        }
    }
    #pragma endscop
}
