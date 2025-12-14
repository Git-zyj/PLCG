/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1 - 1] = 5642242875252179731;
                arr_6 [i_1] = var_3;
                var_10 -= (+(((arr_1 [i_1 - 1] [i_1 - 1]) ? (((min(-4, 127)))) : var_8)));
            }
        }
    }
    var_11 = var_3;
    #pragma endscop
}
