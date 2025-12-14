/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -1849729065;
    var_17 = var_15;
    var_18 = (!var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = -863970795;
                arr_5 [i_1 - 3] = (863970791 < -915678955);
                var_20 ^= (!var_3);
            }
        }
    }
    #pragma endscop
}
