/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (min(((-(min(var_12, var_0)))), (!var_6)));
                var_16 = (min(var_4, var_7));
                var_17 -= min((((!((min(var_8, var_12)))))), 1);
                var_18 = (min(var_18, var_14));
            }
        }
    }
    var_19 = -var_12;
    var_20 |= ((-(!-var_7)));
    #pragma endscop
}
