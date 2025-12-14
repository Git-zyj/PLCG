/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((!(((((max(-665764201, var_4))) ? 3273488834 : (!172))))));
                arr_7 [i_0] [i_0] [i_0] = (((((!var_8) ? ((min(-9801, var_6))) : var_8)) < var_5));
            }
        }
    }
    var_15 = -4574939754160924045;
    #pragma endscop
}
