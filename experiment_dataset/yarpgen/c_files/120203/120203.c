/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 &= (min((((var_2 ? var_4 : ((var_9 ? var_0 : var_8))))), (((~var_4) ? 9599821863240786328 : 9599821863240786328))));
    var_13 = 4066983376059598906;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (min(var_14, ((min(9599821863240786328, (((!(((arr_1 [i_0]) != (arr_0 [i_0])))))))))));
        var_15 &= (((arr_0 [i_0]) && (((((arr_1 [i_0]) ? 9599821863240786328 : (arr_1 [i_0]))) > var_8))));
        arr_2 [i_0] [i_0] &= (min((arr_1 [i_0]), (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_16 = var_7;
        var_17 |= 0;
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_18 = (((arr_7 [i_2]) >> (18446744073709551615 - 18446744073709551598)));
        arr_9 [11] = -9129715897054534703;
    }
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        var_19 = (arr_10 [i_3]);
        arr_12 [i_3] = var_2;
        var_20 = (min(var_20, (arr_11 [i_3])));
        var_21 *= ((123 % (((11249 > var_8) ? (((arr_10 [i_3]) ? (arr_10 [8]) : var_3)) : (max((arr_10 [i_3]), (arr_11 [i_3])))))));
    }
    var_22 = (((((((-1 + 9223372036854775807) << (1 - 1))) == ((min(162, var_5))))) ? ((var_9 ? -65535 : (min(var_5, var_0)))) : var_3));
    #pragma endscop
}
