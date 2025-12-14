/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(-9007199221186560, var_7))) ? (!var_3) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (~-var_3);
                var_12 = (!var_1);
            }
        }
    }
    var_13 = var_10;
    #pragma endscop
}
