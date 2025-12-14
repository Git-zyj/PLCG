/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_17));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = arr_1 [i_0];
        arr_4 [i_0] [i_0] &= (((((18446744073709551595 ? ((-7605475488924683536 ? var_0 : var_3)) : ((max((arr_1 [10]), -34)))))) ? (max((((arr_2 [i_0] [i_0]) ? 229 : -4532863740122746504)), (var_7 <= var_1))) : -25514));
        var_22 = ((((~(((arr_1 [i_0]) ? var_13 : (arr_2 [i_0] [i_0])))))) ? ((-8670 ? 520883684 : 30930)) : (((((arr_2 [i_0] [i_0]) > 12795)))));
        var_23 = (max(var_23, ((max(((max((((-9223372036854775807 - 1) ? (arr_0 [i_0]) : (arr_0 [i_0]))), var_5))), (~var_18))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_24 = (min(var_24, (((((~(max(65525, 352102259)))) > ((((max(var_4, (arr_8 [i_1])))))))))));
                var_25 = var_16;
            }
        }
    }
    var_26 = (max(10336, 13712224638053177183));
    #pragma endscop
}
