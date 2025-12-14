/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 -= (((((min(var_6, var_4)))) * (arr_1 [18])));
        arr_2 [i_0] = (min(((((((-1 ? 65520 : -21025))) ? (!21030) : (!var_4)))), ((var_5 ? var_11 : (arr_0 [i_0])))));
        arr_3 [i_0] = ((((arr_0 [i_0]) | var_6)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_15 = ((21030 ? (((var_6 / (arr_5 [i_1] [i_1])))) : ((-((var_7 ? var_2 : (arr_4 [i_1])))))));
        var_16 = (min(var_16, ((((((((min(2147483647, var_0))) | ((~(arr_6 [i_1] [13])))))) ? ((((21011 ? -21030 : var_0)))) : (arr_4 [i_1]))))));
        arr_7 [i_1] = (~7);
        arr_8 [i_1] = (arr_0 [i_1]);
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (((((arr_10 [i_2 + 4]) - 241)) - -1));
        var_17 = (~21008);
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = (((arr_6 [14] [i_3 + 1]) * (!255)));
        var_18 += ((+(((arr_13 [i_3 + 2]) & (arr_13 [i_3 + 2])))));
    }
    var_19 = ((-(((~-21023) ? var_10 : var_1))));
    var_20 = ((!(((max(var_13, 21008))))));
    #pragma endscop
}
