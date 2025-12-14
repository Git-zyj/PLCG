/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((((5143 ? -91 : 17048661310234607053)) - (((var_10 ? (arr_1 [3]) : var_2)))));
        var_14 = (min(var_14, ((((arr_0 [i_0]) ^ (arr_0 [i_0]))))));
        arr_3 [3] = (~17048661310234607051);
        var_15 = (arr_0 [11]);
    }
    var_16 = (max(var_3, var_12));

    /* vectorizable */
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        var_17 = (max(var_17, ((((arr_1 [i_1 - 1]) | (arr_4 [i_1 - 1] [i_1 + 1]))))));
        var_18 = var_10;
        var_19 = -5144;
        var_20 *= ((-19327 ? -881381328 : 146));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_21 = (((!16648544366104072670) ? (arr_9 [i_2]) : ((((min(881381327, var_2))) ? var_11 : (arr_9 [i_2])))));
        var_22 = (min(var_22, ((((max((((arr_8 [i_2]) ^ (arr_6 [i_2] [1]))), (~17316))) >> (133 - 126))))));
    }
    var_23 = 19327;
    #pragma endscop
}
