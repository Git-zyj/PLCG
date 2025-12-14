/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(var_17, var_8))) ? (var_0 % var_16) : (((-(var_11 | -92))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (max(-84, (((max(7606615323675897744, 1)) % ((((arr_1 [i_0] [i_1]) ? var_15 : var_1)))))));
                var_21 = ((+(((arr_0 [i_1 - 2]) - (arr_0 [i_1 - 1])))));
            }
        }
    }
    #pragma endscop
}
