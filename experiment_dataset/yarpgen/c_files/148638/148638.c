/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((44324 ? 21218 : var_3))) ? var_6 : -2147483628)));

    for (int i_0 = 4; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_14 = ((((arr_1 [i_0] [9]) ? (arr_0 [i_0]) : (arr_0 [i_0 + 1]))));
        arr_2 [1] = (min((((((min((arr_1 [3] [i_0]), (arr_1 [i_0] [7])))) < (var_0 / var_11)))), 213));
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (min(((min((((~(arr_3 [i_1])))), 1376041069))), ((((((arr_4 [i_1]) ? (arr_0 [12]) : 8816039273919697528))) ? ((var_10 - (arr_4 [i_1]))) : ((((-12 + 2147483647) >> (var_11 + 2286174869492452584))))))));
        arr_6 [i_1] [i_1] = ((((max((arr_0 [i_1 - 1]), var_7))) ? (!2359988285) : (((arr_3 [i_1 - 1]) ? -27 : (arr_0 [i_1 - 1])))));
    }
    for (int i_2 = 4; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2 - 3] [i_2] = ((((max(42225, var_12)) == (arr_0 [i_2 - 1]))));
        arr_10 [i_2] = 14;
        var_15 = (min(var_15, var_0));
    }
    var_16 = ((var_2 ? var_10 : (((max(29, var_3))))));
    #pragma endscop
}
