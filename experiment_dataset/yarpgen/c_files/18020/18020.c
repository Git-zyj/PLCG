/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 = (max(var_6, ((var_1 ? var_5 : var_12))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_20 = (~var_0);
                        arr_9 [i_0] [9] [9] [i_3] [i_3] &= -var_11;
                        var_21 = (arr_4 [i_2] [1] [i_2 + 1]);
                        arr_10 [i_0] [i_1] [i_2] [i_3] = (((arr_4 [i_3] [i_2 + 1] [i_2]) < -516252659401754140));
                    }
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        var_22 = (max(var_22, ((max(((min(var_16, var_4))), (~-0))))));
                        arr_15 [i_0] [i_1] [i_2] [i_1] = ((((((arr_8 [i_2] [i_2] [i_2 - 1] [6]) / (arr_6 [i_1] [i_1] [i_2 - 1])))) ? ((min(1, 511))) : ((max(var_10, (arr_0 [i_0]))))));
                        arr_16 [i_1] [i_1] [i_1] [i_1] [10] [i_1] = (((~var_4) ? (((arr_6 [i_2 - 1] [i_2] [i_2 + 1]) ? (arr_5 [i_2 - 1] [12] [i_2]) : var_15)) : var_14));
                        arr_17 [i_0] [i_1] [i_2 + 1] [i_0] = ((((arr_4 [i_2 - 1] [i_4 + 1] [i_4]) ? -1479596899 : (arr_4 [i_2 - 1] [i_4 + 2] [i_2 - 1]))) / (arr_4 [i_2 + 1] [i_4 + 2] [i_4 - 2]));
                    }
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        var_23 = (max(var_23, ((min((min((((arr_4 [i_0] [i_1] [i_5]) ? var_4 : var_16)), var_4)), (arr_11 [i_0] [i_1]))))));
                        arr_21 [4] [i_1] [i_1] [i_1] [i_1] |= (max(((((max((arr_19 [i_2 - 1]), var_9))) ? ((min(var_9, (arr_0 [i_1])))) : (arr_8 [i_0] [i_2 + 1] [i_5 + 1] [i_5]))), (max((var_3 & var_11), (~var_6)))));
                    }
                    var_24 = ((~((var_17 ? ((var_13 ? 12405480862424083055 : (arr_3 [i_0] [i_1]))) : (((min(var_8, var_0))))))));
                    arr_22 [i_0] = var_0;
                }
            }
        }
    }
    var_25 = var_3;
    var_26 = ((var_3 ? ((((min(var_7, 18408331817216528575))) ? var_0 : ((1075122525 ? var_17 : var_6)))) : (min((~var_14), var_15))));
    #pragma endscop
}
