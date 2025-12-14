/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (~var_17)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] |= (((-1262931639 > -32765) | ((-(arr_3 [i_1 + 1] [i_1 + 3])))));
                arr_7 [1] [1] [i_1] = (((((~18182) & ((var_12 << (var_2 - 9444344333087069395))))) + (((min(var_9, (arr_1 [i_0])))))));
                var_19 = var_14;
            }
        }
    }
    var_20 = var_16;
    #pragma endscop
}
