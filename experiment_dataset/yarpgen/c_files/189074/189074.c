/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = ((1 - ((((max(33788, -8572068634540189882))) ? (var_3 - var_4) : var_7))));
                var_11 = ((var_2 ? (((((9223372036854775807 ? -4 : var_7))) + 13459080007600678829)) : (((((57684 ? var_0 : var_0)) + (107 / 233))))));
            }
        }
    }
    var_12 = (9223372036854775807 - 9223372036854775807);
    #pragma endscop
}
