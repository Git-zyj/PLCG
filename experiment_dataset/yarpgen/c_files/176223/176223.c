/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [10] = (((max((arr_3 [i_0]), 18446744073709551615)) - (arr_0 [i_1 + 3] [19])));
                var_17 = min(((~(arr_2 [i_1 + 2]))), (1 & 1));
                var_18 = var_10;
            }
        }
    }
    var_19 = var_15;
    #pragma endscop
}
