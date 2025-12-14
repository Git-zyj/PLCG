/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_1 ? (12731 & 1) : (~var_10))) | var_6));
    var_20 = (min(var_20, 4616));
    var_21 |= ((((((var_18 ? 4294967275 : 4614) < (var_5 < var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_22 += (min((!92), 536870400));
                arr_5 [i_1] [i_1] [i_1] = ((~((118 ? 65521 : 1))));
                arr_6 [i_1] [i_0] [i_0] = ((2147483629 ? var_10 : (((arr_3 [i_0] [i_1] [i_0]) >> 0))));
            }
        }
    }
    #pragma endscop
}
