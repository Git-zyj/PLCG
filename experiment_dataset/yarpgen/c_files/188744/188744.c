/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_0));
    var_14 = (!var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_15 = (((-1800813652 ? 18199404538694306109 : 32767)));
                    var_16 = var_1;
                }
            }
        }
    }
    var_17 = ((((18446744073709551615 ^ (min(18199404538694306109, var_0))))) ? var_1 : var_4);
    var_18 = (min(var_18, (((18199404538694306109 ? 7060372639740204491 : 7060372639740204492)))));
    #pragma endscop
}
