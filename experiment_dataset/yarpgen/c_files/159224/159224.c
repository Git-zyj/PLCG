/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((var_3 <= ((var_7 ? var_5 : -7705606277604530384))));
                var_13 = (max((-122 == -1144187715), ((((arr_1 [i_0 - 2] [i_0 - 2]) || var_5)))));
            }
        }
    }
    var_14 *= var_5;
    var_15 = (((((~1) >= var_10)) ? ((~(var_4 & 4673724073111144094))) : (((1 ? (var_5 || 32767) : (var_1 <= var_10))))));
    var_16 = 85;
    #pragma endscop
}
