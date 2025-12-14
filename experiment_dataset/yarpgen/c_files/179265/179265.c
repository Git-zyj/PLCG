/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max((!0), ((((((14767783607266703548 ? -21 : (-9223372036854775807 - 1))) + 9223372036854775807)) >> (var_2 && var_14))));
    var_17 = var_1;
    var_18 = (max(var_18, ((max(var_6, var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 ^= (((arr_5 [i_0] [i_1]) ? (arr_4 [i_0] [i_0] [i_1]) : (~-5309599826985181182)));
                arr_6 [5] [i_0] = ((3678960466442848060 + 25) + ((~(arr_5 [i_1] [i_0]))));
            }
        }
    }
    #pragma endscop
}
