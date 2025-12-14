/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = 249098228;
        var_20 = (min((((~(144044819331678208 && 10197)))), var_15));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_21 = ((-((var_6 ? (arr_0 [i_1] [i_1 + 1]) : var_15))));
        arr_5 [i_1 - 1] = var_9;
        var_22 = (((!(arr_1 [i_1 + 1]))));
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2 + 1] [i_2 - 1] = (max(((var_10 >> (((((-9223372036854775807 - 1) - -9223372036854775782)) + 47)))), -13));
        var_23 = 130023424;
    }
    var_24 = ((-((57 ? (((var_10 >> (var_2 - 29)))) : (max(var_17, var_2))))));
    #pragma endscop
}
