/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (~var_16)));
    var_20 |= (((!var_14) && -20));
    var_21 = ((var_0 ? var_10 : 1));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0 - 4] [i_0 - 4] = (arr_3 [i_0 - 2]);
                var_22 += -53;
                var_23 = (min(var_23, (-9463 && -var_5)));
            }
        }
    }
    #pragma endscop
}
