/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~((var_7 ? (~102761414) : var_10))));
    var_17 += ((-(((min(var_8, var_0))))));
    var_18 = (min(var_3, (min((min(91, var_2)), var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (arr_0 [i_0] [i_1 - 1]);
                var_20 = ((((!((var_9 || (arr_1 [i_0]))))) ? (((var_12 + (61660 ^ 23668)))) : ((var_12 * (arr_3 [i_1] [i_1 - 1] [i_1 - 1])))));
            }
        }
    }
    var_21 = var_12;
    #pragma endscop
}
