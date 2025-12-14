/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_5 ? var_6 : var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = (((((-((22 ? var_5 : var_3))))) ? (((var_15 < -28) ? (!var_18) : ((var_12 ? -23 : 32526)))) : 24));
                var_22 = (((((-22 * 26573) + 2147483647)) >> ((((3296365411 << (var_17 - 5498853884169791823))) - 3056599030))));
            }
        }
    }
    #pragma endscop
}
