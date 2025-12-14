/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((min(var_2, (min(6331973558132063893, var_6)))), 36895));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 -= (((((min((arr_5 [i_1] [i_1 + 3] [i_1 + 1]), 1535745149321103639)) + 9223372036854775807)) >> ((((-(arr_4 [i_1 + 3] [i_1 + 3] [i_1 + 1]))) - 13579))));
                    var_15 |= (((((((var_4 ? 8192 : 48))) ? var_7 : 30)) - (arr_1 [i_1])));
                }
            }
        }
    }
    var_16 = ((+(((var_12 / -7770336537392000124) ? var_8 : 0))));
    #pragma endscop
}
