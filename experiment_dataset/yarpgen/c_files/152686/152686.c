/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_0 & (var_4 % 1))) % (((~var_11) ? (max(var_13, var_8)) : 7205033904185382390))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (max((var_6 | var_1), ((((((114 ? var_9 : var_6))) ? (~var_13) : 93)))));
                arr_5 [i_1] = var_11;
            }
        }
    }
    var_17 = var_12;
    var_18 = (min(var_13, var_8));
    var_19 = max(var_1, (255 | 4294967295));
    #pragma endscop
}
