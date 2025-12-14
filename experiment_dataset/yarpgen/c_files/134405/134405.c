/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(var_5, (((var_13 || (((var_1 ? 9337 : var_10)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_2 [i_0]);
        var_21 = ((((!(var_16 & var_16))) ? (var_2 && var_9) : (((((~(arr_0 [i_0] [i_0])))) ? var_1 : (arr_1 [i_0])))));
        arr_4 [i_0] [i_0] = 105;
        arr_5 [i_0] = (arr_1 [i_0]);
        var_22 = var_11;
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_23 = max((((arr_8 [i_1 - 1]) ? 18446744073709551615 : var_0)), (arr_6 [i_1]));
        var_24 |= ((18446744073709551610 ? 5 : (arr_8 [13])));
    }
    for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_25 += (var_1 | 9337);
        arr_11 [i_2] = (((!var_11) ? ((((!(((var_16 ? var_9 : (arr_10 [i_2])))))))) : (((arr_7 [i_2]) ? (((arr_7 [i_2]) ? 17 : var_12)) : ((((32752 >= (arr_6 [i_2])))))))));
    }
    #pragma endscop
}
