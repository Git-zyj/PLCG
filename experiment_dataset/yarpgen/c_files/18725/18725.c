/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 = (min(((5218060191142350049 << (var_2 - 266960610)), var_0)));
    var_20 |= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = ((max(((4158574858089060940 ? -4530151145707785216 : 3487548432)), -4470767880822969846)) >= (((max(var_14, 0)))));
                arr_7 [i_0] [i_0] = (min((((!(((4158574858089060940 ? var_0 : 0)))))), -894970888419434673));
            }
        }
    }
    #pragma endscop
}
