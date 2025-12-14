/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_5 ? (var_7 / var_12) : var_9)) == var_3));
    var_16 = ((var_9 ? var_3 : var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [7] [8] = (arr_0 [i_0] [i_1]);
                var_17 = (arr_3 [i_0]);
            }
        }
    }
    #pragma endscop
}
