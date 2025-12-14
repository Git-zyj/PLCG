/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_14 = ((((((14306253720061892404 * 5265166) ? ((((arr_1 [i_0] [i_0]) * var_7))) : ((var_12 ? var_12 : 4289702113))))) ? (var_11 / var_7) : 93));
        var_15 = (~(((((~(arr_0 [i_0])))) ? 1141729754 : (~93))));
        var_16 = ((~(min((max(93, var_1)), (arr_1 [i_0] [i_0])))));
        var_17 = (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_18 &= ((2148957637 ? (arr_5 [6] [i_1]) : (min((~17077239195214320020), 63908))));
        var_19 = (((((((((arr_2 [i_1] [i_1]) | 1))) ? var_12 : var_3))) ? 1628 : var_10));
        var_20 = (min(103, ((97 ? var_4 : 140))));
        var_21 = (max(var_21, ((min(-63902, ((29 ? 13353340982491541104 : 0)))))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_22 = ((!(((-var_10 ? (arr_9 [i_2]) : 5265166)))));
        var_23 = 1;
        var_24 = ((var_6 && (arr_7 [i_2])));
        var_25 = 1;
    }
    var_26 = (max(var_26, 1));

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_27 &= ((((!(((var_7 ? var_6 : var_10))))) ? var_5 : (((arr_9 [i_3]) ? 1616 : (!var_3)))));
        var_28 = (((min(63902, ((14501354624589352165 << (83 - 26))))) != (((((-8537 ? var_5 : (arr_10 [i_3] [i_3])))) % ((var_8 ? 12 : -32760))))));
    }
    #pragma endscop
}
