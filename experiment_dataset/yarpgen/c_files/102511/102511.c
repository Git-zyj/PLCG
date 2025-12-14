/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_15 &= ((((~((~(arr_1 [i_0] [i_1 - 1]))))) <= ((((~var_3) <= (min((arr_2 [i_0] [17] [i_1 - 4]), var_8)))))));
                var_16 = arr_5 [i_0] [i_0] [i_0 + 1];
                arr_6 [i_0] = ((-(((((arr_5 [i_0] [i_0 + 1] [i_1 - 2]) + 9223372036854775807)) >> (-42259914 + 42259933)))));
            }
        }
    }
    var_17 = ((((max(var_9, ((5491260606921940612 ? 1286592499 : 42259914))))) ? var_5 : ((-(min(var_8, var_11))))));
    var_18 = var_0;
    #pragma endscop
}
