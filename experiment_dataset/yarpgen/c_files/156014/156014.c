/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [10] = ((!(((arr_3 [i_1 + 1] [6]) == (-12 | 48)))));
                arr_5 [i_0] &= ((max((arr_0 [i_0]), (((-26299 ? var_3 : 65535))))));
                arr_6 [i_0] [i_1] [i_0] = max(2495124118, (arr_1 [i_1 - 1]));
                arr_7 [i_0] = var_4;
                arr_8 [i_1] [i_0] = 65535;
            }
        }
    }
    var_10 = var_8;
    var_11 = (min(-92, ((85 ? 15872 : 1))));
    #pragma endscop
}
