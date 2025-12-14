/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((((((var_6 ? 3008249979 : -6322914534014795338))) ? var_4 : var_14)));
    var_16 = 63;
    var_17 -= (var_7 ? (min(-15324, 63)) : (((((var_14 ? -63 : var_11))) ? ((-29859 ? -89 : 1157727629)) : ((33344 ? 36 : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (min((((((arr_0 [i_0] [i_0]) ? 2632080181 : (arr_4 [i_1]))) - (2038108603537743293 + 15337))), (((~(arr_1 [i_0 - 3]))))));
                var_18 = (max(var_18, ((((~(arr_2 [i_0 - 3] [i_0 - 3])))))));
            }
        }
    }
    #pragma endscop
}
