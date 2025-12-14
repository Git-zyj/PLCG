/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((((255 ? ((7 ? var_11 : 253)) : 0))) ? (~235) : (((21 + ((8 ? 0 : 7))))))))));
    var_16 = (max((((((max(var_11, var_0))) || ((max(var_11, var_1)))))), (((-2147483647 - 1) / 11640366494538616683))));
    var_17 = -var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (-((+(max((-9223372036854775807 - 1), 9223372036854775807)))));
                var_18 ^= -2139589400;
                var_19 = (!1);
            }
        }
    }
    #pragma endscop
}
