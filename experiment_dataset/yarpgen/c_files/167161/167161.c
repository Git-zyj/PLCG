/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((var_2 >= (!-var_2)))));
    var_13 = ((var_10 ? (((~1046630192) ? ((8536 ? 13 : (-9223372036854775807 - 1))) : -1516582554)) : (((((var_2 ? var_6 : var_11)) | ((var_8 ? 32767 : 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = var_8;
                var_15 = (!var_1);
            }
        }
    }
    #pragma endscop
}
