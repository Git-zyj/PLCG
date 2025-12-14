/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_10, (((!var_8) ? (var_7 & var_4) : (max(var_11, var_14))))));
    var_16 = var_4;
    var_17 = ((((!(((var_9 ? var_9 : var_11))))) ? (min(var_7, var_0)) : ((((!(~var_10)))))));

    for (int i_0 = 1; i_0 < 7;i_0 += 1) /* same iter space */
    {
        arr_3 [0] [9] = (arr_0 [4]);
        var_18 = var_14;
        var_19 = (min(var_19, ((((!var_4) ? (((((var_8 >> (((arr_1 [1]) + 1281575744))))) ? (arr_1 [9]) : (((var_1 ^ (arr_2 [1])))))) : var_4)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 7;i_1 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (arr_6 [7])));
        var_21 = (min(var_21, (((!var_9) ? ((var_13 ? (arr_5 [2]) : var_1)) : (arr_5 [5])))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 7;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [8] = (((arr_5 [8]) ? var_9 : ((var_8 ^ (arr_2 [5])))));
        arr_10 [i_2] [9] = (((((arr_2 [2]) % (arr_0 [5]))) < (var_7 == var_13)));
    }
    #pragma endscop
}
