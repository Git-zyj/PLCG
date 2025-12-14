/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((((!6473348446556340168) - ((max(var_12, var_2))))), ((((var_3 ? var_3 : var_8)) * var_9))));
    var_18 = (min(var_18, (((var_6 > (-var_9 < var_5))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0] [i_0]);
        var_19 = (+(((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [i_0]))));
        arr_4 [i_0] = (arr_0 [i_0]);
        var_20 -= var_0;
        var_21 = ((((((-(((arr_2 [i_0] [i_0]) | var_7)))) + 2147483647)) >> (23110 - 23108)));
    }
    var_22 = ((23110 - (-var_11 ^ var_1)));

    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {
        var_23 = (max(var_23, (((-(arr_7 [i_1]))))));
        var_24 &= (min((((arr_6 [i_1 - 2]) ? 4217103922 : (arr_6 [i_1 - 4]))), ((var_8 | (arr_6 [i_1 + 2])))));
        var_25 = (arr_6 [i_1 + 4]);
        arr_8 [i_1] = ((var_16 && (!var_10)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_26 = (arr_11 [i_2] [i_2]);
        arr_12 [i_2] = 1392658977;
        arr_13 [i_2] = ((!(((var_16 ? var_1 : (arr_0 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] [i_3] = (arr_10 [6]);
        var_27 += (((((min((arr_2 [i_3] [i_3]), var_11)))) | (((((var_11 ? (arr_7 [i_3]) : (arr_1 [i_3] [i_3])))) ? 1392658977 : var_0))));
        var_28 = (max(var_28, (arr_5 [i_3] [i_3])));
        var_29 *= (((arr_2 [i_3] [i_3]) >= (--23125)));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_30 = (max(var_30, -42419));
        arr_19 [i_4] [i_4] = ((((((53459 ? var_16 : (arr_1 [i_4] [i_4]))))) ? ((((arr_15 [i_4]) ? (arr_5 [i_4] [i_4]) : (arr_15 [i_4])))) : ((min(1845401961, 23116)))));
        var_31 = ((9223372036854775780 > (((-(!var_5))))));
        var_32 = (min(((-(arr_17 [i_4] [i_4]))), ((((arr_2 [i_4] [i_4]) && var_1)))));
    }
    #pragma endscop
}
