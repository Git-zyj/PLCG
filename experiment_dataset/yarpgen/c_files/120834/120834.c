/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 -= var_7;
                var_12 = (min(((8 ? (((var_3 ? 24617 : var_4))) : ((var_5 ? 288230376151711743 : 255)))), (((237 ? 24617 : ((9223372036854775807 ? -7829 : -24608)))))));
                var_13 = var_0;
            }
        }
    }
    var_14 -= (~var_0);
    var_15 = (min(var_15, -4294967295));
    #pragma endscop
}
