/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_18 = ((-((-1396443735 ? (114 | -2358246743320915192) : ((((arr_1 [i_0] [14]) / var_15)))))));
        var_19 += ((((~(arr_1 [i_0] [i_0]))) | ((15 ? -82 : (arr_0 [i_0] [i_0])))));
        var_20 = (max(var_20, (((~(arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = (((!var_16) ? -82 : (arr_2 [i_1])));
        var_21 = (1894690558 > var_15);
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_22 = var_8;
        var_23 = (min(var_23, (((~(((arr_0 [i_2] [i_2]) ? (arr_0 [i_2] [i_2]) : (arr_0 [i_2] [i_2]))))))));
        var_24 *= (((((-90 ^ (((arr_3 [i_2]) ? (arr_3 [i_2]) : 62565))))) ? (((!(arr_6 [i_2] [i_2])))) : (~var_1)));
        var_25 = ((((((82 ? -82 : 81)))) ? var_0 : (min((1 ^ var_12), -82))));
    }
    var_26 ^= (~10036407358078805450);
    var_27 = -5197421184871634507;

    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        var_28 += (((var_11 / ((~(arr_2 [i_3]))))));
        var_29 = (((((-(((arr_9 [1]) ? 4264615430162012693 : 3968))))) && (((((var_12 ? var_1 : var_2))) && 8410336715630746144))));
    }
    #pragma endscop
}
