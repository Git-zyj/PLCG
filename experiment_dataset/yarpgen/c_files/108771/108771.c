/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((max(-1, var_2)));
    var_15 = (((-var_6 ? var_3 : var_0)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [1] |= (max((((arr_4 [i_0] [i_1]) ? 1720684076 : var_9)), ((((arr_0 [i_0] [i_0]) - (arr_2 [i_0] [i_0]))))));
                var_16 = (~-2115450101);
                arr_6 [1] |= ((!((((arr_4 [i_0] [i_0]) * (~var_5))))));
            }
        }
    }
    #pragma endscop
}
