/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (arr_8 [i_0] [17] [13]);
                    var_14 = (min(var_14, var_10));
                }
            }
        }
    }
    var_15 = var_0;
    var_16 = ((var_13 ? (max(var_5, 82193415034905381)) : ((max(var_8, var_2)))));
    var_17 = ((((!(~var_5))) ? ((min(4055082959, -14932))) : var_6));
    #pragma endscop
}
