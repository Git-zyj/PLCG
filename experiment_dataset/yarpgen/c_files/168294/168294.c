/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = -16384;
                var_11 = (max(var_11, ((min(((((((2 ? 1073740800 : 50781))) || ((((arr_2 [9]) ? 3221226496 : var_6)))))), 2)))));
            }
        }
    }
    var_12 = var_5;
    var_13 = (min(((min((4294967295 - var_7), 44606242))), var_5));
    var_14 = ((4250361053 ? (min((1713397052 % 3221226496), (-18365 * 0))) : ((var_7 ? ((var_4 ? var_2 : 4250361053)) : ((525531043 ? 0 : 1713397052))))));
    #pragma endscop
}
