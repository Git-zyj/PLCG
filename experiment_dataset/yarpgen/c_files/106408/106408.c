/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = (min(var_12, (!var_1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = (arr_2 [i_0] [i_0]);
                var_14 = (arr_3 [i_0] [i_1]);
            }
        }
    }
    #pragma endscop
}
