/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [5] [10] [i_1] [i_1] = (max((((((138545757497512246 ? (arr_6 [i_2 + 2] [i_1] [i_4 - 3]) : (arr_11 [i_1] [i_1] [i_1])))) ? (arr_13 [i_4] [i_3] [i_2 - 1] [i_1] [i_0]) : ((-22336 ? var_12 : var_18)))), (((arr_9 [i_0] [i_1]) ? ((-(arr_13 [i_0] [i_1 - 1] [i_2] [i_2] [i_4]))) : (arr_15 [i_4 - 1] [i_3 + 1] [i_2 + 1] [i_0] [i_0] [i_0])))));
                                var_20 = (max(var_20, (((-((max((arr_15 [i_4 - 2] [i_4 - 2] [i_4] [i_4] [i_4 - 1] [i_4]), (arr_15 [i_4 - 3] [i_4 - 4] [i_4] [i_4] [i_4 - 1] [i_4 - 1])))))))));
                                var_21 = ((3271930884 ? 8689665008453529274 : 2305843009213685760));
                                arr_17 [i_0] [i_1] [i_1] [i_3 - 2] [i_4] = (min(var_12, (((arr_15 [11] [11] [0] [11] [i_4 - 1] [2]) / ((-8689665008453529292 ? var_19 : (arr_7 [i_1] [i_2] [i_3] [i_4 - 4])))))));
                                arr_18 [i_0] [i_1] [i_0] [0] [12] [i_2] [i_0] = (((((~((~(arr_3 [i_4])))))) ? (max(((((arr_5 [4]) ? (arr_15 [i_0] [i_0] [i_0] [3] [i_0] [i_0]) : var_11))), (var_7 | var_14))) : (((var_18 ? (arr_3 [1]) : var_2)))));
                            }
                        }
                    }
                }
                arr_19 [i_0] [i_1] = ((((min(((var_16 ? var_11 : 4294967285)), ((min(var_17, (arr_14 [i_0] [i_1 - 2] [i_0] [i_1] [i_0] [i_0] [11]))))))) ? (((arr_15 [i_1] [i_1 - 1] [i_1] [i_1 - 3] [i_1] [i_1 - 2]) ? var_3 : var_14)) : (((-(((arr_2 [i_1]) ? (arr_0 [i_0] [i_0]) : var_17)))))));
                var_22 = (min(var_22, ((((~(~var_1)))))));
                arr_20 [i_1] [i_1] [i_1] = var_11;
            }
        }
    }
    var_23 = ((((((((56 ? var_0 : var_18))) ? (!var_19) : ((var_18 ? 12331894233493119532 : 245))))) ? ((var_18 ? (((var_9 ? var_5 : var_10))) : (max(var_4, var_3)))) : (((max(var_12, 0))))));
    var_24 = (((min(var_6, var_15)) > (!var_14)));
    #pragma endscop
}
