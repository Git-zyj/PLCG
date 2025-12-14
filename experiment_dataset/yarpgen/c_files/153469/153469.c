/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, -2956266477));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = ((((max(1, var_6))) ? (!7230187284660219441) : (((~25445) ? (!40090) : -32767))));
                var_12 = ((((0 ? ((max(var_6, 1))) : (~1)))) ? var_2 : 974490540588005774);
            }
        }
    }
    #pragma endscop
}
