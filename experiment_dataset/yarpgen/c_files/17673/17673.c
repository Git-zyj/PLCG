/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 = (max(var_21, 8160));
    var_22 = var_18;

    for (int i_0 = 2; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (min((((arr_0 [i_0 - 2]) ? (max(917504, var_12)) : ((((2119 > (arr_2 [i_0 + 1]))))))), ((min(61377, 256)))));
        arr_5 [i_0] = (((arr_1 [i_0]) ? ((((arr_3 [i_0]) ? (!var_3) : (!var_19)))) : ((-9223372036854775799 ? (((max((arr_1 [i_0]), var_3)))) : (min((arr_2 [i_0 + 1]), var_12))))));
        var_23 = (min(var_23, (arr_1 [14])));
        var_24 = (max(((+((var_14 ? (arr_0 [i_0]) : var_0)))), (((!(var_8 || var_3))))));
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [i_1] = ((var_0 ? -var_5 : (min((max(var_12, (arr_2 [i_1 - 1]))), (((536870911 ? var_5 : (arr_7 [i_1]))))))));
        var_25 = max((min(var_14, (min((arr_8 [i_1 - 2]), (arr_1 [1]))))), (((-(arr_0 [i_1 - 1])))));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_26 = (-(((arr_2 [i_2 - 1]) ? (arr_7 [i_2 - 1]) : var_1)));
        arr_14 [i_2] [i_2] = (i_2 % 2 == 0) ? (((var_17 << ((((~(max((arr_10 [i_2]), (arr_13 [i_2]))))) + 3999589076944161413))))) : (((var_17 << ((((((~(max((arr_10 [i_2]), (arr_13 [i_2]))))) + 3999589076944161413)) - 3999589076944131908)))));
        var_27 = (max((((arr_3 [i_2]) ^ 2305843009213693952)), ((((arr_3 [i_2]) ? (arr_3 [i_2]) : 7453776602645779202)))));
    }
    var_28 = (((((min(var_1, var_7)))) ? var_11 : (((((var_15 ? var_19 : var_19))) ? var_12 : var_19))));
    #pragma endscop
}
