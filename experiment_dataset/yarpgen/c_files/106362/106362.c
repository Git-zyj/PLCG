/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_16 = ((((max(((var_15 ? (arr_1 [i_0] [i_0]) : var_13)), -var_6))) ? var_2 : 0));
        var_17 = arr_1 [i_0] [i_0];

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = ((((((arr_0 [i_0] [i_1]) ? (1 >= 0) : ((((arr_4 [i_0] [i_0] [i_0]) >= (arr_3 [9] [i_1]))))))) && ((var_9 > (min(var_11, var_4))))));
            arr_6 [i_1] = ((((max((arr_0 [i_1 + 1] [i_1 - 1]), (arr_0 [i_1 - 1] [i_1 + 2])))) ? ((max(var_6, (arr_0 [i_1 + 1] [i_1 + 2])))) : (((arr_0 [i_1 + 1] [i_1 + 1]) ? (arr_0 [i_1 + 1] [i_1 - 1]) : var_0))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [20] [16] [i_3] [16] [i_1] = (-8120918897010738941 == 1);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_17 [i_1] [i_1 - 1] [i_2] [9] [i_4] [i_4] = ((+((-(((arr_2 [i_1]) / var_12))))));
                            var_18 = ((((min((((arr_8 [i_1 - 1] [i_2]) - (arr_12 [1] [i_3] [i_2] [i_1]))), (arr_12 [i_0] [i_1 + 2] [i_4] [i_4])))) ? ((((min(var_3, var_10))))) : var_15));
                            arr_18 [i_0] [i_1 + 2] [6] [i_1] [i_4] = var_12;
                            arr_19 [i_0] [1] [1] [i_3] [i_1] = (max((min((((arr_15 [i_0] [i_1] [i_2] [i_0] [19] [i_3] [i_4]) ? var_4 : (arr_15 [18] [i_1] [i_1] [19] [i_2] [i_3] [i_4]))), ((((arr_3 [i_0] [i_1]) ? var_8 : var_13))))), (arr_1 [i_1] [i_4])));
                            var_19 = (min((((arr_10 [i_0] [i_1 + 1] [i_1 - 1]) / var_15)), (((arr_10 [i_0] [i_0] [i_1 - 1]) ? (arr_10 [i_0] [i_0] [i_1 - 1]) : (arr_10 [i_0] [i_1 + 1] [i_1 - 1])))));
                        }
                        arr_20 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_1] = ((-(max((var_9 || var_6), ((1 ? (arr_16 [i_0] [i_1] [i_2] [i_2] [i_3]) : (arr_0 [20] [i_2])))))));
                        arr_21 [i_0] [i_1] [i_2] = (((((var_11 ? var_1 : (arr_10 [i_0] [i_1 - 1] [1])))) && (arr_3 [0] [i_1])));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((((arr_8 [i_5] [i_5]) ? (min((((var_3 ? var_0 : var_12))), ((~(arr_14 [i_5] [i_5] [i_5] [i_5] [i_5]))))) : ((min((arr_1 [i_5] [i_5]), var_10))))))));
        var_21 = (min(var_21, (arr_7 [i_5] [i_5] [i_5] [i_5])));
        arr_25 [i_5] = ((((var_8 ? var_14 : (arr_14 [20] [i_5] [i_5] [0] [i_5]))) * ((-(((arr_14 [i_5] [i_5] [i_5] [i_5] [22]) + (arr_9 [i_5] [i_5])))))));
    }
    var_22 = (max(2107, -2509546576539771842));
    #pragma endscop
}
