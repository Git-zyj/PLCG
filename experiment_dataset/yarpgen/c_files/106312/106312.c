/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max((min(((1580815519068071436 ? -17284 : -7573718112722796589)), (!145))), -7050);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] = (min((max(13158096173076708113, 1604915922)), ((max((arr_3 [i_0] [i_1 - 1]), var_1)))));
                var_20 |= (((((((min(136, var_14))) ? ((var_9 ? var_18 : var_8)) : (arr_5 [i_1])))) ? var_4 : ((140737488347136 ? (max(129, 17172370598314875511)) : (arr_5 [i_0])))));
            }
        }
    }
    #pragma endscop
}
