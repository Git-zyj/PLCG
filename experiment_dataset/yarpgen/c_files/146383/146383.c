/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_19 *= (((-1705761122 ? (arr_1 [i_0 + 1]) : (arr_0 [i_0]))));
        arr_3 [i_0] = (((arr_1 [i_0 - 4]) / (arr_1 [i_0 - 4])));
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_20 = ((((max(((-(arr_5 [i_1]))), ((((arr_1 [i_1]) || (arr_1 [i_1]))))))) ? 15069487066843663236 : (min((((var_16 ? var_3 : var_12))), (arr_1 [1])))));
        var_21 |= (((min((arr_0 [i_1 + 2]), (((arr_4 [i_1 - 2]) ? var_10 : 2461045931)))) <= ((min(((var_11 & (arr_5 [i_1]))), -1705761132)))));
        var_22 = var_3;
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_23 = (((arr_4 [i_2 - 3]) % -1705761118));
        arr_8 [i_2] &= (arr_1 [i_2 + 2]);
    }
    var_24 = (max(var_16, (((((var_4 ? var_7 : 200891317))) / var_15))));
    #pragma endscop
}
