/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((var_14 ? -1 : var_8));
    var_16 = var_11;
    var_17 = var_9;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 &= (((arr_1 [i_0]) ? (max(((var_8 ? var_2 : (arr_0 [i_0]))), (arr_1 [5]))) : (((arr_0 [7]) ? (var_7 + var_7) : (((arr_0 [i_0]) ? var_1 : 1))))));
        var_19 = ((((min(((var_5 ? (arr_0 [1]) : var_10)), (arr_0 [i_0])))) ? (((((var_0 ? -1 : var_7))) ? (((arr_0 [i_0]) ? (arr_0 [11]) : (arr_0 [i_0]))) : var_7)) : -11));
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        var_20 = -10;
        arr_6 [2] = (arr_5 [i_1]);
        var_21 += (min((arr_5 [i_1 - 3]), (((arr_5 [i_1 - 3]) ? (arr_5 [i_1 - 3]) : (arr_5 [i_1 + 4])))));
        var_22 = ((~((var_2 ? var_6 : (1 > 1849116939)))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_23 = (max(-19, ((((!var_8) || (((48741 ? var_12 : 0))))))));
        arr_10 [1] = 575661430;
    }
    var_24 += (max(var_13, 18446744073709551615));
    #pragma endscop
}
