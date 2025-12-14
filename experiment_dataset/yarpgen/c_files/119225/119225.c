/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_4));
    var_15 = (min((((-101 / var_5) ? 4128768 : (var_2 >= var_5))), var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = var_5;
                var_17 = -3308837379;
            }
        }
    }
    #pragma endscop
}
