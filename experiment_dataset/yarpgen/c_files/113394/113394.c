/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = ((var_3 ? (((~144) ? -1974223091 : 1974223091)) : ((var_9 ? var_13 : (var_12 <= var_10)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = (((((var_10 ? -1974223082 : 32767))) ? (((-1974223116 ? (arr_0 [18]) : 1974223117))) : ((8957835529655292336 << (((var_10 + 15271) - 10))))));
        var_19 = (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_2 [9] [i_0] |= (((var_1 - 32767) ? var_0 : (arr_1 [1] [i_0])));
        var_20 = (min(var_20, (arr_1 [5] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = (arr_4 [i_1] [i_1]);
        var_22 = (i_1 % 2 == 0) ? (((((((-1974223116 + 2147483647) << (((arr_3 [i_1]) - 25016))))) ? (arr_5 [i_1]) : ((-1974223082 ? var_1 : (arr_5 [i_1])))))) : (((((((-1974223116 + 2147483647) << (((((((arr_3 [i_1]) - 25016)) + 51009)) - 18))))) ? (arr_5 [i_1]) : ((-1974223082 ? var_1 : (arr_5 [i_1]))))));
        arr_6 [i_1] [i_1] = (arr_1 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_23 = (max(var_23, ((((arr_9 [i_2]) ? (min(((min(-32751, (arr_3 [12])))), ((var_3 ? (arr_0 [i_2]) : var_7)))) : ((((((var_10 ? var_1 : 178))) ? ((min((arr_0 [i_2]), var_0))) : (arr_8 [i_2])))))))));
        var_24 = (arr_9 [i_2]);
        var_25 = (max(var_25, (((((((((arr_7 [i_2]) + 32767))) ? -1 : ((1974223086 ? var_8 : (arr_0 [16]))))) - var_10)))));
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        var_26 *= ((+(((arr_5 [i_3]) ? (((arr_1 [i_3] [i_3]) ? (arr_1 [i_3 - 1] [i_3 - 1]) : (arr_10 [i_3]))) : (max(var_14, (arr_11 [i_3])))))));
        var_27 = (max((var_13 == var_15), 32750));
    }
    var_28 = (max(var_28, ((min(var_9, (((var_1 ? ((var_11 ? var_9 : var_11)) : -var_10))))))));
    var_29 = var_3;
    #pragma endscop
}
