/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-90 >= (((var_10 ? var_16 : var_11)))));
    var_18 = ((!((((1 && 1) ? 24 : (1 | -28049))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_19 = (((((arr_0 [i_0]) != var_8)) ? -2041118178026312913 : (((27 ? 1 : 1)))));
        arr_2 [7] = arr_0 [i_0];
        arr_3 [i_0] = var_15;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((arr_5 [2]) ? 41787 : (((var_0 >= (-2412577271521360182 ^ var_11))))));
        var_20 = (+-1);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (((((arr_1 [i_2]) <= (arr_0 [i_2]))) ? var_0 : 1));
        arr_12 [i_2] [i_2] = ((1 ? (((var_4 - 5111496985570871097) ? var_2 : (arr_0 [i_2]))) : ((-5253 ? (arr_8 [i_2] [i_2]) : (max(9223372036854775807, var_6))))));
    }
    var_21 = var_14;
    #pragma endscop
}
