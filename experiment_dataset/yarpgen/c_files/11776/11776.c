/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 -= (-(arr_4 [i_0] [i_1]));
                var_13 = (arr_0 [i_0]);
            }
        }
    }
    var_14 = (+(((((-32767 - 1) ? var_8 : -32759)) / var_6)));
    var_15 = var_8;
    #pragma endscop
}
