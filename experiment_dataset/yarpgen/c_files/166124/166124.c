/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = var_8;
                var_20 = (((260046848 | var_17) ? ((var_8 & (arr_6 [i_1 - 1] [i_0]))) : 5811039987105266758));
                arr_7 [i_0] [i_0] = ((+(((var_1 <= var_6) ? (arr_3 [i_0] [i_1]) : (arr_5 [i_1 - 1] [i_1 - 1])))));
            }
        }
    }
    var_21 = ((var_15 ? (((max(var_6, var_0)))) : var_16));
    var_22 = var_8;
    #pragma endscop
}
