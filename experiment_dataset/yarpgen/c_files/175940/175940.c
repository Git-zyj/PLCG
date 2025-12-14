/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (arr_2 [i_1]);
                var_11 *= (((((arr_1 [i_0]) / var_7)) <= var_5));
            }
        }
    }
    var_12 -= var_4;
    var_13 = 17175674880;
    var_14 = ((171 ? 3 : (((!503316480) ? ((min(var_7, var_4))) : var_9))));
    var_15 = var_8;
    #pragma endscop
}
