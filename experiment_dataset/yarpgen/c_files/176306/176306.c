/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((min((min(var_7, var_0)), var_12)));
    var_15 = (max(var_2, ((-var_4 / (~0)))));
    var_16 = (((var_0 & var_4) != ((((!(((var_13 ? -8920959722042960496 : var_11)))))))));
    var_17 = (((2813868027 ? var_13 : 8920959722042960500)) & (((var_8 != var_6) ? (var_13 * var_7) : 1)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = ((((max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) ? ((((var_3 && (arr_1 [i_0] [i_0]))) ? (((6897630253597807226 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))) : var_3)) : ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
        var_19 = (!(arr_0 [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = (13 & 1);
        var_21 -= 1323657596;
    }
    #pragma endscop
}
