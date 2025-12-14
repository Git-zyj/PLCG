/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (11693201972184351364 ? ((var_7 ? var_6 : (~3))) : (var_6 != -113464410));
    var_12 = (max(((((283726776524341248 ? var_6 : var_9)) | var_10)), (((max(-433037416, -3))))));
    var_13 = (min(var_13, ((max((max(9223372036854775807, (((var_3 ? 2228559363 : var_4))))), (((!14) ? var_2 : (max(var_9, var_9)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = 155764408284870272;
                var_14 *= (max(2147483646, (9193 / -106)));
            }
        }
    }
    #pragma endscop
}
