/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 *= var_19;
                arr_4 [i_1] = ((((((arr_0 [i_0] [i_1]) != (arr_0 [i_0] [i_0])))) * (arr_0 [i_0] [i_1])));
            }
        }
    }
    var_21 = var_18;
    var_22 = var_9;
    var_23 = 124;
    #pragma endscop
}
