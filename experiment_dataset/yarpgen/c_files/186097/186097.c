/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 *= ((!(((~(arr_1 [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 = ((((((arr_4 [i_1] [i_4]) == -743554179)) ? (((arr_0 [i_0]) / var_0)) : ((var_4 ? var_5 : var_10)))));
                                var_13 = (min(((((arr_11 [i_0]) ^ var_3))), var_1));
                                var_14 = (min(var_14, ((((((-(~-743554190)))) ? (min(var_0, (~77141731))) : (((~743554178) ? (min(var_0, (arr_11 [i_2]))) : var_7)))))));
                            }
                        }
                    }
                    var_15 *= (((((min(var_5, (arr_9 [i_2] [i_2 + 1]))))) / (max((min((arr_2 [4]), var_6)), ((max(var_8, var_0)))))));
                    arr_12 [i_0] [i_2] [i_1] [i_0] = (((((!(arr_3 [i_0])))) + (arr_4 [i_2] [i_1])));
                    var_16 *= ((var_5 - ((((max(80, (arr_6 [i_0] [i_1] [i_1] [i_2])))) ? 1157849088 : (max(84, var_7))))));
                }
            }
        }
    }
    var_17 = var_2;
    var_18 = var_9;
    var_19 *= ((var_0 < (var_10 >= var_9)));
    #pragma endscop
}
