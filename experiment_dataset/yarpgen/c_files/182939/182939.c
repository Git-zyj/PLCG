/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = var_9;
    var_15 = (min(var_10, ((min(243, (var_11 && var_5))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = 18446744073709551603;
        var_16 = (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_17 = ((((var_7 ? var_10 : -5128724622029834073)) > -var_3));
        var_18 = (((((var_4 | (arr_5 [3])))) ? (arr_1 [i_1]) : var_2));
        arr_6 [i_1] = 84;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = var_6;
        arr_10 [i_2] = -2243419008;
    }
    var_19 = min(((min(var_0, (max(-992465158, 46132))))), ((((min(var_6, 32767))) - 15)));
    #pragma endscop
}
