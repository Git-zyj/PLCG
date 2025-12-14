/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_21 = 1;
        arr_2 [i_0] [i_0] = ((((arr_1 [i_0 + 1]) ? ((min((arr_1 [i_0 - 1]), 65530))) : (arr_0 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1 - 1] = var_8;
        var_22 += ((-(arr_0 [i_1 + 1])));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    {
                        var_23 = (min(var_23, ((min(239, (max((arr_15 [i_5 + 2] [i_5 + 3] [i_5 + 1] [i_5 - 1]), -1)))))));
                        var_24 = (max((min((arr_14 [i_2] [i_3] [4] [i_5 + 3]), (arr_14 [i_2] [i_3] [i_3] [i_5 + 1]))), ((200 ? (arr_14 [7] [i_3] [7] [i_5]) : 1))));
                    }
                }
            }
        }
        arr_16 [i_2] [i_2] = (min(((68 ? (arr_1 [i_2]) : (arr_8 [i_2]))), (((min((arr_7 [i_2]), 34))))));
        arr_17 [14] = ((((max((arr_7 [i_2]), (arr_1 [i_2])))) / 1));
    }
    var_25 = ((var_2 | (((var_14 ? var_10 : var_13)))));
    var_26 = var_8;
    var_27 = (max(((var_10 ? var_10 : (var_12 < var_13))), (((!(-14233 % 98))))));
    #pragma endscop
}
