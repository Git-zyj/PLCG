/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((-((var_6 ? ((10742 ? 10738 : 24)) : 1))));
    var_15 = ((-((1 ? (!1) : (!158)))));
    var_16 = ((-1 ? var_0 : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 -= (((-10743 ? 0 : 2924187815)));
                arr_5 [i_0] [i_1] = ((~((var_12 ? var_3 : 706321485909449621))));
                var_18 -= var_8;
                arr_6 [i_0] [i_0] [i_0] = ((-(!-38)));
            }
        }
    }
    var_19 = var_13;
    #pragma endscop
}
