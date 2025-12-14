/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_18));
    var_20 |= (min((((!var_15) ? var_14 : -4266499306358347414)), (~var_16)));
    var_21 = 1048575;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, ((-1539457615 < ((max((arr_2 [i_0 - 1] [i_1] [i_2]), var_16)))))));
                    var_23 = 1100500122;
                    var_24 += (~1517128607);
                }
            }
        }
    }
    var_25 = 536870911;
    #pragma endscop
}
