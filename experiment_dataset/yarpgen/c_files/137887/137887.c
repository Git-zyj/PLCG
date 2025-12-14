/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 = (((max(var_12, var_8))));
    var_21 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = (max(var_22, ((((~var_1) ? (arr_3 [12]) : ((((max((arr_1 [i_0]), var_7))) ? var_4 : (arr_4 [i_0] [2] [2]))))))));
                var_23 += 3106944998302236731;
            }
        }
    }
    #pragma endscop
}
