/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = var_10;
        var_18 = 4973236148734495230;
    }

    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_19 = (~1);
        var_20 = (min(var_20, (((+((var_11 ? (arr_3 [i_1 - 1]) : 108)))))));
        arr_4 [i_1] [i_1] = (min(var_13, ((-(((arr_0 [i_1]) + (arr_1 [i_1])))))));
        arr_5 [i_1 + 1] [i_1] = (~-28259);
        arr_6 [i_1] = -1;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = ((((((var_12 ? -28996 : (arr_2 [i_2]))) ? var_1 : (~1)))));
        arr_10 [2] = (arr_8 [i_2]);
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_21 &= ((~(1698012352 & 268435456)));
        var_22 = (((((var_2 ? var_7 : 4294967295))) ? 80 : ((min(var_2, var_2)))));
        var_23 = var_11;
        arr_13 [i_3] = ((((min(32754, ((var_13 ? var_1 : 4294967292))))) ? (((32767 ? -16 : 28996))) : (((((var_6 ? (arr_2 [i_3]) : var_6))) ? 0 : var_12))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_17 [i_4] = ((((min((arr_14 [i_4] [i_4]), (arr_16 [i_4])))) ? (((((min(-1, 75))) ? (((!(arr_15 [i_4])))) : var_2))) : ((29003 / (arr_16 [i_4])))));
        var_24 = (max(var_24, (((var_8 * (((((var_7 ? var_2 : 81))))))))));
    }
    #pragma endscop
}
