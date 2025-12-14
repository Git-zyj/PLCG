/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = (min(var_15, (~-1)));
        arr_4 [1] [1] = (((arr_3 [i_0] [i_0]) ? 1 : (arr_3 [2] [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_16 *= (arr_6 [i_1]);
        var_17 = (((((1 ? 1 : 8589934591))) ? (((+(min((-2147483647 - 1), var_5))))) : ((~(max(-1359801455591521171, -15075))))));
        var_18 *= 1;
        var_19 = var_8;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_20 = (max(var_20, (((~((~(arr_8 [10] [i_2]))))))));
        var_21 = (~9223372036854775807);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_12 [i_3] = ((1 ^ ((min((arr_10 [i_3]), (arr_10 [i_3]))))));
        var_22 = ((!(((var_1 ? (var_5 == var_12) : (arr_6 [i_3]))))));
        arr_13 [i_3] [i_3] = (((127 ? ((var_7 ? var_6 : (arr_8 [i_3] [i_3])) : ((min(var_13, var_9)))))));
        var_23 = (max(var_23, var_7));
        var_24 = ((((!(!-1309139762))) ? (((!((min(1, -1304991340)))))) : (((196 || 8589934591) ? ((var_1 ? 1 : var_13)) : (arr_9 [i_3])))));
    }
    var_25 = var_13;
    var_26 = (min(var_26, ((min(var_12, (-2147483647 - 1))))));
    var_27 = ((((18446744065119617024 ? (var_0 > var_12) : (var_7 % var_2)))) ? (((5627565019027718200 + 127) + (((var_9 ? var_9 : var_9))))) : var_0);
    var_28 = 240;
    #pragma endscop
}
