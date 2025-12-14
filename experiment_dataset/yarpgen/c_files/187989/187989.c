/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 += ((var_4 != (max(-1783090844, (arr_0 [i_0 + 2])))));
                var_15 = (arr_3 [i_0 - 4] [i_0]);
            }
        }
    }
    var_16 = (min(var_16, ((((min(700526043, var_6))) % (max((~var_12), var_4))))));
    #pragma endscop
}
