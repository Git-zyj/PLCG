/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((((((((3922320524 ? var_1 : var_9))) ? (arr_9 [i_0] [i_1] [i_2]) : -9223372036854775807))) ? ((var_2 ? 1576226437 : (min((arr_1 [i_0] [i_2]), 2147418112)))) : (!var_9)));
                    arr_11 [i_0] = var_4;
                    arr_12 [i_0] [i_0] [i_2] [i_1] = (((9223372036854775807 >= 2199014866944) ? 65535 : 9223372036854775807));
                }
            }
        }
    }
    var_10 = (!var_2);
    #pragma endscop
}
