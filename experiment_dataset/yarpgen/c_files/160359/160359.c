/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 += ((((var_0 ? (arr_3 [i_0]) : 511)) >> (var_2 - 907753507)));
                var_12 = (max(var_12, ((((arr_2 [i_0] [i_0]) / var_1)))));
                arr_6 [i_1] [i_1] = (((((var_7 ? -37 : 521))) ? (((!(arr_2 [i_1] [i_1])))) : (((((var_2 ? (arr_5 [i_0 + 1] [i_1] [i_1]) : (arr_5 [i_0 - 2] [1] [i_1]))) <= (arr_5 [i_1] [0] [0]))))));
                var_13 = -4320522684859054167;
            }
        }
    }
    var_14 = ((min((var_5 > var_3), -4308404664103915786)));

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_15 = (((arr_8 [i_2] [10]) ? (((((max(var_6, (arr_8 [11] [17])))) ? var_6 : (arr_7 [i_2])))) : (arr_7 [i_2])));
        var_16 = (min(var_16, ((max((max(var_9, (arr_8 [1] [i_2]))), -var_8)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_15 [i_3] = var_8;
            var_17 = 1;
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_19 [i_3] = (arr_16 [2] [22]);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_18 -= -37;
                            var_19 &= ((48957055 + (arr_16 [i_3] [19])));
                            arr_27 [i_5] [i_3] [1] [6] [i_5] [11] [i_5] = (~var_0);
                        }
                    }
                }
            }
        }
        var_20 = ((-533 ^ var_6) ? var_0 : ((1 ? (arr_10 [i_3] [i_3]) : var_2)));
        var_21 = (min(var_21, ((((~(arr_10 [2] [2])))))));
        arr_28 [i_3] [i_3] = (var_1 / var_4);
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_22 = ((((arr_24 [i_9]) < var_7)) ? (arr_8 [i_9] [i_9]) : 0);
        var_23 = (min(var_23, ((((!var_6) ^ (max((arr_10 [2] [i_9]), var_7)))))));
    }
    var_24 = ((1252412375 < (min(var_0, var_9))));
    #pragma endscop
}
