/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((max(var_4, var_11))) ? var_5 : var_2))) ? 1664902697 : (((var_4 >> (var_9 - 2020490751))))));
    var_15 = (((max(((((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (14336 - 14313)))), ((var_2 ? var_5 : 252459297940626992)))) >> (((((((var_0 ? var_3 : var_11))) ? var_0 : var_13)) - 127))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_16 = (((18446744073709551615 == 230) ? (((0 * (-359550936 == -876)))) : (max((arr_6 [i_0] [i_0]), ((~(arr_0 [i_0])))))));
                var_17 = (arr_5 [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
