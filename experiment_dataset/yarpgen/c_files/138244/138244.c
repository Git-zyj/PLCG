/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (1 / 3720555660);
    var_12 = (~((126 ? 14032887991205817417 : 1374781407)));
    var_13 = (((((var_8 ? var_8 : (-64 + var_4)))) ? (((var_6 || var_1) ? (((var_4 ? 143 : 2500602885))) : var_3)) : ((((2770383419 != 2948428182) << (var_4 - 1306904497))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (-126 != 21811);
                var_14 ^= (((((arr_3 [i_0]) ? (arr_3 [i_0]) : var_6)) - (((arr_1 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_1])))));
            }
        }
    }
    #pragma endscop
}
