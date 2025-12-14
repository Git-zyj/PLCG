/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((((var_10 <= (((2725230980 ? var_9 : var_5)))))), (((var_3 ? var_11 : var_7)))));
    var_13 -= (((1 | -26898) ? ((var_10 / ((var_11 ? var_10 : var_4)))) : ((min(((var_11 ? var_9 : var_3)), (min(58, var_11)))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = ((var_3 ? ((1 ? -3402973464065675940 : 2725230980)) : 15));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_15 = ((!((((arr_3 [i_0] [i_1] [i_1]) - var_2)))));
            arr_4 [i_0] [i_0] [i_0] = (arr_0 [i_1]);
        }
    }
    #pragma endscop
}
