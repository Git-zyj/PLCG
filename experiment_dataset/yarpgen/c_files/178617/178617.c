/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    var_20 = var_14;
    var_21 = ((!((((((var_2 ? 1 : var_5))) ? -var_5 : var_14)))));
    var_22 = (max(var_22, 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_23 = 65535;
                var_24 = ((-(arr_1 [i_1])));
            }
        }
    }
    #pragma endscop
}
