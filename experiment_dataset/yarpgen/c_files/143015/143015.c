/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_17 = (((arr_0 [i_0]) ? (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_18 = (max(var_18, ((((arr_0 [i_0]) ? (((max(var_2, 2475)))) : 46296)))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_19 ^= ((!((min((((arr_3 [i_1]) / var_0)), ((((arr_4 [i_1]) ? (arr_0 [i_1]) : var_16))))))));
        var_20 = (min(var_20, ((((18446744073709551615 ? -2147483645 : 18446744073709551603))))));
        var_21 -= ((max((max(2, var_10)), var_9)));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_22 -= ((min(1, (((var_4 ? 0 : var_1))))));
        arr_7 [i_2] [i_2] = (((((~((-1 & (arr_2 [i_2])))))) ? (((((max(var_1, 3584743564956604182))) ? ((12 ? 942688075 : -72)) : (((arr_3 [i_2]) << (var_2 - 614738449)))))) : ((var_0 ? ((50171 ? (arr_6 [i_2]) : (arr_5 [6]))) : (arr_2 [i_2])))));
        var_23 = (min(var_23, (((max(((-8304177523351573737 + (arr_4 [i_2]))), (arr_3 [i_2])))))));
        var_24 = (min(var_24, ((((((((((arr_0 [i_2]) ? var_10 : var_13))) ? (((var_4 ? var_2 : 733375943))) : var_16))) ? ((+((7962481765853331754 ? (arr_6 [i_2]) : var_3)))) : (((-(2147483647 / -2147483645)))))))));
    }
    var_25 = ((~((((max(var_8, var_13))) ? var_4 : (((var_1 ? var_7 : var_6)))))));
    var_26 = var_13;
    var_27 = (min(var_27, var_3));
    #pragma endscop
}
