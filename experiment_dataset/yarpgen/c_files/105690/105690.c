/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = (max(var_14, (((8 & 2013265920) ? var_12 : ((var_8 % ((max(var_6, 1811)))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (min(((((((arr_1 [i_0]) ? (arr_2 [i_0]) : 3821757535))) ? (((!(arr_1 [i_0])))) : (-117 && var_9))), (max(((-32765 ? -1841 : (arr_1 [i_0]))), 91))));
        var_16 = ((arr_2 [6]) >= (((max(18446744073709551615, 32759)) >> (((!(arr_1 [i_0])))))));
        var_17 = ((1811 ? -1293 : (min((arr_1 [i_0]), (max((arr_2 [10]), (arr_1 [i_0])))))));
        arr_3 [i_0] &= var_4;
        var_18 += (max((min((arr_2 [i_0]), 18446744073709551612)), (((((979224578 ? 32751 : 125))) * (-73 / 18446744073709551593)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_19 = ((-5117 == ((127 ? var_9 : 32766))));
        var_20 = var_0;
        var_21 = (((((123 > (arr_5 [1] [14])))) != 142));
        arr_8 [i_1] = (((arr_1 [i_1]) ? (((arr_1 [i_1]) ? var_1 : 74)) : (((((arr_6 [4]) >= var_7))))));
    }
    var_22 |= var_7;
    var_23 = 34;
    #pragma endscop
}
