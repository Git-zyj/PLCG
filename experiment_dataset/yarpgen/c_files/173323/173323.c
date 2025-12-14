/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = (max(var_21, ((max((min((arr_1 [i_0] [i_0]), 1890677374)), (max((arr_0 [i_0]), 2147481600)))))));
        arr_3 [i_0] = (479247545084357659 + 0);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = (((((116 ? (min((arr_5 [i_1]), 12220)) : (~0)))) ? ((((max(-12220, (arr_4 [i_1] [i_1])))) ? 0 : ((12205 ? var_2 : 1)))) : (((arr_4 [i_1] [i_1]) ? (arr_5 [i_1]) : 0))));
        arr_7 [i_1] = (((1 || 1) || (!1)));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_10 [i_2] = ((-955687680 ? (max(-479247545084357668, 94)) : (((min((arr_9 [i_2]), (arr_9 [i_2])))))));
        arr_11 [i_2] [i_2] = (((((((1718574938 ? -7990093410093003297 : 0)) & (((0 ? -660357136 : -12198)))))) ? (((((~(arr_1 [i_2] [i_2])))) ? ((4552 ? 327874342 : 230)) : 128)) : (((36782 / ((var_14 ? (-2147483647 - 1) : 1)))))));
    }
    var_22 = (var_2 ? (min(var_0, (min(1017584593719377063, -8127546760337389192)))) : (((1 ? 1731069318 : ((-790857995 ? (-9223372036854775807 - 1) : 89272519))))));
    var_23 = ((((((((var_14 ? -12184 : 230))) / ((var_7 ? 1 : 8))))) ? var_12 : ((min(var_3, var_11)))));
    var_24 *= var_8;
    #pragma endscop
}
