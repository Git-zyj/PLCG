/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_8 / var_8);
    var_18 = var_10;
    var_19 = ((var_11 * (min((var_11 && var_11), (~var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = ((((max(var_7, (var_2 && var_0)))) ? var_7 : ((((var_9 != var_9) % (min(var_16, var_9)))))));
                    var_21 = ((var_2 & ((min(var_16, var_15)))));
                    var_22 = (max(var_22, (((var_14 << (((~var_9) + 35083)))))));
                    var_23 = (~-var_10);
                }
            }
        }
    }
    #pragma endscop
}
