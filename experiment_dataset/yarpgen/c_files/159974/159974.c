/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max(1, -4095))) ? ((((-108 != 1358399120) + (!var_4)))) : ((((min(1, var_9))) ? (var_13 > 1) : var_0)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_17 = (-5360322717400594629 && 4097);
        arr_3 [i_0] [10] = ((-4400562675555134250 != (var_13 < var_3)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_18 = ((-var_4 ? ((-7135274436574498392 ? 139611588448485376 : (((var_10 ? var_9 : var_12))))) : ((~((3 ? -8532 : (arr_4 [i_1])))))));
        arr_6 [i_1] = ((((~(arr_5 [i_1]))) - (var_15 || 1209630862388986990)));
        var_19 = (((((((!(arr_4 [i_1])))))) ? (((42 / var_5) | var_2)) : (140 != 8531)));
        var_20 = (min((((arr_4 [15]) ^ var_8)), -var_7));
        var_21 *= ((((arr_5 [i_1]) ? (arr_5 [i_1]) : var_14)));
    }
    #pragma endscop
}
