/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = 0;
                var_14 += ((((757631782 / (min(var_12, var_3)))) / (min(var_1, (arr_6 [i_0] [i_0] [i_0])))));
            }
        }
    }
    var_15 = ((var_11 ? var_8 : (max((max(var_12, var_5)), var_12))));
    var_16 += (!var_6);
    #pragma endscop
}
