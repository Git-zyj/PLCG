/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = (arr_3 [i_0 - 3] [i_0 - 1] [i_0 - 1]);
                    var_14 = var_9;
                    arr_9 [i_0] [i_0] = (min(((-6142185412661871255 ? (max((arr_5 [i_2] [i_2]), var_0)) : ((~(arr_1 [i_0 - 1] [i_0]))))), ((var_2 ? (var_3 <= var_12) : ((var_0 ? var_1 : (arr_1 [i_0] [i_0])))))));
                    var_15 = (max(var_15, (((var_4 ? (((var_4 || ((max(var_5, var_12)))))) : ((((!(arr_1 [6] [6]))) ? var_5 : var_5)))))));
                    var_16 = ((((min((arr_3 [i_0 - 2] [i_0 + 1] [i_0]), (arr_5 [i_0 - 1] [i_0 + 1])))) ? ((max((arr_8 [9] [i_0] [i_0 - 3] [i_0 - 1]), ((var_3 ? var_9 : 9223372036854775807))))) : ((var_0 ? (arr_3 [i_0 - 2] [i_0] [i_0 - 1]) : (arr_4 [i_0 - 2] [i_0 + 1])))));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        var_17 = (min(var_17, ((((((var_3 * var_12) / (((((arr_4 [i_3] [i_3]) && (arr_10 [i_3]))))))) >> (((max(var_6, var_8)) - 681751538)))))));
        arr_13 [i_3] [i_3 + 1] = (arr_0 [i_3]);
    }
    var_18 = ((min((var_4 % var_8), ((var_0 ? 8263269844281674804 : var_0)))));
    #pragma endscop
}
