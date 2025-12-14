/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_11 = 536870911;

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_12 = ((var_0 * (min((!var_3), ((var_2 - (arr_3 [i_0] [i_0])))))));
            var_13 -= (min((((arr_3 [i_0 - 1] [i_1 + 1]) | (arr_2 [i_1 - 1] [i_1 + 1] [i_0 - 2]))), (((!(arr_0 [19]))))));

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_7 [19] [i_1] [i_1] = var_8;

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_14 = var_2;
                    var_15 = 35;
                    var_16 -= (((-21 ? ((((arr_9 [i_0] [i_3] [20] [20] [i_3]) > var_6))) : 21)));
                }
            }
            arr_11 [i_1] [i_1 - 1] = ((((((21 > (arr_1 [i_0] [i_1]))) ? (arr_3 [16] [i_0]) : var_2)) > (arr_3 [i_0] [0])));
            arr_12 [i_1] = ((min((!var_6), (((arr_3 [i_1] [i_0]) * var_2)))));
        }
        var_17 ^= (((((var_9 ? (arr_6 [i_0 - 1] [i_0 - 1] [10] [i_0 + 2]) : -var_10))) ? (max((arr_0 [i_0 + 4]), (arr_0 [i_0 + 4]))) : var_4));
    }
    var_18 = ((((((!860250672) ^ var_9))) ? (var_9 & var_4) : (((((3117787062 ? var_8 : var_5))) ? ((max(var_3, var_3))) : (var_0 || var_5)))));
    #pragma endscop
}
