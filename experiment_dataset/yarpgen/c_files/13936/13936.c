/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_1 ? var_3 : (min(((0 ? 25 : var_2)), var_7))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_14 = var_5;
                            arr_12 [i_0] [i_1] = (min((arr_7 [i_0 + 2] [i_0 + 2] [i_0]), 0));
                            arr_13 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0] = (((arr_4 [i_0] [i_1] [i_0]) ? (min((arr_8 [i_0]), (arr_9 [i_0] [i_1] [i_2] [i_2]))) : ((((!(((-25 - (arr_6 [i_0 - 2] [i_1] [i_2]))))))))));
                            arr_14 [i_0] [i_1] = var_11;
                        }
                    }
                }

                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    var_15 *= (arr_2 [i_1]);
                    var_16 = (min(var_16, ((min((arr_15 [i_0 - 1] [i_0 + 2] [i_0 + 2]), (max((arr_15 [i_4 + 1] [i_1] [i_0 - 1]), (min(-13035, (arr_16 [i_0] [i_0] [i_1] [i_4]))))))))));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_25 [i_0 - 2] [i_0] [i_0] [i_0 - 2] = (((arr_4 [i_0] [i_0] [i_0]) + (min(var_7, (((arr_20 [i_0] [i_0] [i_0 - 2] [i_0] [i_0]) ? (arr_21 [i_1] [i_1] [i_7]) : 3266752809318765587))))));
                                var_17 &= ((-(min((arr_19 [i_0 + 1]), (arr_18 [i_0] [i_1] [i_6 + 2])))));
                                var_18 = ((!((((arr_15 [i_6 + 2] [i_0 + 1] [i_0 - 1]) >> (3109427312973165426 - 3109427312973165414))))));
                                arr_26 [i_7] [i_0] [i_6] [i_5] [i_0] [i_0] = (min((((((~(arr_18 [i_0] [i_0] [i_0])))) ? (arr_17 [i_1] [i_5] [i_6] [i_7]) : (min(3109427312973165426, (arr_15 [i_6] [i_5] [i_0]))))), (!-222469959)));
                            }
                        }
                    }
                    arr_27 [i_0] [i_0] [i_0] = ((((~(arr_10 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_1]))) / ((((arr_21 [i_0] [i_1] [i_5]) ? (max(var_9, (arr_15 [i_0] [i_1] [i_5]))) : ((min((arr_11 [i_0 - 1] [i_1] [i_1] [i_5]), var_7))))))));
                    arr_28 [i_0] [i_0] [i_0] = (((arr_17 [i_0 + 1] [i_0] [i_1] [i_5]) ? (((arr_17 [i_5] [i_1] [i_0] [i_0]) / (arr_17 [i_0] [i_0] [i_0] [i_0]))) : (arr_17 [i_0] [i_0] [i_5] [i_5])));
                }
            }
        }
    }
    #pragma endscop
}
