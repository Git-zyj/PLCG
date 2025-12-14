/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (~(max((((18446744073709551615 ? var_4 : var_0))), (var_12 / 9051658421662992393))));
                var_17 |= ((-66 % ((3 ? ((max(34215, var_5))) : 1296811300))));
            }
        }
    }
    var_18 += (max(var_8, (min((max(31320, var_5)), 54292))));
    #pragma endscop
}
