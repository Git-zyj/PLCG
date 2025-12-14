/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_10 = (((((+(((arr_1 [i_1]) ? (arr_3 [i_0] [i_0]) : (arr_1 [3])))))) ? ((min(var_5, -var_0))) : ((16878 & (min(44409, (-9223372036854775807 - 1)))))));
                var_11 = (min(0, (-32767 - 1)));
            }
        }
    }
    var_12 |= 127;
    var_13 = (((49 > ((917504 ? (-32767 - 1) : 0)))));
    var_14 |= 1;
    #pragma endscop
}
