/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((~637805937) ? (((9223372036854775807 < ((max(32767, 15)))))) : var_8)))));
    var_17 = (max(var_17, 1974892436));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] &= ((1 ? ((((!((max(178, 178))))))) : (arr_4 [i_1])));
                var_18 = ((((((((29193 ? 25093 : var_4))) ? 52071 : ((((-32767 - 1) != 2223428407)))))) ? ((max(35609, -932261088))) : ((max((arr_0 [i_0]), (arr_0 [i_1]))))));
            }
        }
    }
    #pragma endscop
}
