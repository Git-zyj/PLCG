/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((((-((var_2 ? 10586768346640734351 : var_7)))) * ((var_12 ^ ((0 ? var_12 : var_4))))));
    var_16 -= ((((max(var_10, ((var_4 ? var_9 : var_6))))) ? var_8 : (((var_0 || ((min(var_9, 65535))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (min(var_17, -1));
        var_18 = var_2;
        var_19 = (max(0, (max((17746957923732671724 <= var_13), (arr_1 [i_0])))));
        var_20 &= ((1 ? (((var_5 && -1068549868) ? var_3 : 10586768346640734361)) : ((min(var_1, var_9)))));
        var_21 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_22 = (max(var_22, 18446744073709551615));
        var_23 = (((((arr_3 [i_1]) || 2289192317)) ? (((arr_3 [i_1]) * 10365110928016209480)) : ((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1]))))));
        var_24 = ((var_11 ? 2 : ((((((arr_3 [i_1]) & var_0)))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_25 = (arr_1 [i_2]);
        var_26 ^= (max((((max(5952, (arr_0 [i_2]))))), (8081633145693342136 * var_14)));
    }
    var_27 *= var_7;
    var_28 = (min(var_5, var_5));
    #pragma endscop
}
