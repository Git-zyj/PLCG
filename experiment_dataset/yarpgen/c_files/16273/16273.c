/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_10));
    var_12 = var_4;
    var_13 = (((((var_6 ^ ((var_4 ? var_6 : var_3))))) ? -9223372036854775806 : 1549779837174626872));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((((((arr_2 [i_0]) + 584436531))) || (((var_0 >> ((10085376237159971219 ? 0 : (arr_0 [i_0]))))))));
        var_15 = (min(-715952603398359697, 18370569594060660845));
    }

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = var_8;
        arr_6 [i_1] [5] = (26 > var_10);
        var_16 = ((((max((arr_3 [i_1]), (arr_3 [i_1])))) ? (1334433407 % 1374439197) : ((((((arr_0 [i_1]) ? var_7 : var_10))) ? (min(var_5, var_1)) : 5))));
        var_17 = (((((-1 + 2147483647) >> 0))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 19;i_4 += 1)
            {
                {
                    arr_16 [i_2] = (((min(((18446744073709551615 ? var_6 : (arr_10 [i_3]))), ((min((arr_11 [i_2] [i_2]), var_0))))) >> ((((((1343413620 ? -928 : (arr_15 [i_2]))) % (arr_8 [i_2] [19]))) + 61))));
                    arr_17 [i_4] [1] [i_2] = (((((var_3 % (arr_8 [i_2] [i_4 - 4])))) ? (~-1374439203) : (((min((arr_15 [i_2]), var_4)) % var_4))));
                }
            }
        }
        arr_18 [i_2] = ((+(((arr_14 [i_2]) ? (max(-9223372036854775800, (arr_8 [5] [i_2]))) : ((((arr_15 [i_2]) + var_5)))))));
        var_18 = (((~(~3710530764))) % (((min(2920528122, 24)) % (arr_9 [i_2] [10] [i_2]))));
        var_19 = ((1374439182 / ((((((arr_2 [i_2]) ? -587965418 : 35))) / (min(var_10, var_7))))));
        arr_19 [2] [2] = ((((((arr_10 [i_2]) / var_3))) ? (arr_10 [i_2]) : (min(2920528110, (arr_15 [8])))));
    }
    #pragma endscop
}
