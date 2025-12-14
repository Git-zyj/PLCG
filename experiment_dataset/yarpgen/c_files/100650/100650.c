/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = var_13;
                var_16 = (min(var_16, var_13));
                arr_7 [i_0] [i_0] = (max((arr_6 [i_1 + 1] [i_0] [i_1 + 2]), (arr_6 [16] [i_0] [i_1 - 2])));
            }
        }
    }
    var_17 = var_1;
    var_18 = var_10;
    var_19 = var_1;
    #pragma endscop
}
