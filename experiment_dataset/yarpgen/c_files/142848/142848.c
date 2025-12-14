/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = var_8;
    var_17 = (max(var_17, 24540));
    var_18 -= -2367809119723376999;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = ((-(65535 & 51523)));
                    var_20 = (((arr_2 [i_1] [i_0]) ? (((arr_2 [i_0] [i_0]) ? var_14 : (arr_2 [2] [i_0]))) : (((arr_3 [i_0]) ? (arr_2 [i_1] [i_1]) : (arr_3 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
