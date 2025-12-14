/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 = (max(var_16, ((var_6 ? ((-(max(var_6, var_10)))) : var_5))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_17 = (max(var_17, (((((((arr_0 [i_0]) ? ((51034 ? 16 : 16)) : var_4))) ? (((arr_1 [i_0 + 1]) ? ((var_10 ? 248 : 249)) : var_7)) : ((((-4 ? (arr_0 [i_0]) : var_14)) - 245)))))));
        var_18 *= (arr_1 [i_0]);
        var_19 = ((~(((((11 > (arr_2 [0] [0])))) >> (var_1 <= var_7)))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_20 = (min(var_20, ((((!-1) && var_6)))));
        var_21 -= arr_4 [i_1];
        var_22 = ((((min((arr_0 [i_1]), (arr_0 [i_1])))) ^ (arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_10 [i_2] = 23353;
        var_23 += var_13;
    }
    for (int i_3 = 1; i_3 < 24;i_3 += 1)
    {
        var_24 = (max(var_24, (161 || 0)));
        arr_13 [15] = ((568682273 != (arr_12 [0] [i_3])));
        arr_14 [15] [i_3] = ((((max(7331463021071749651, 18183355279482519881))) ? ((max((4 > var_11), (min(15, 16))))) : (arr_11 [i_3 - 1])));
        var_25 = (min(var_25, (((~((-((min(var_4, (arr_11 [i_3 + 1])))))))))));
    }
    #pragma endscop
}
