/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [3] [i_1] [i_3] [i_3] [i_1] [i_0] = (arr_0 [i_0]);
                            arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] = (((((!(arr_6 [8] [3] [i_2] [i_3])))) / (arr_6 [i_0] [i_1] [i_2] [i_3])));
                            var_16 ^= ((((min(var_10, 9177493552740626120))) ? (var_8 >= var_12) : ((9269250520968925499 ? var_8 : (arr_4 [i_0])))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_17 = (min(var_17, ((max((1 || 9269250520968925488), (((arr_0 [i_1]) ? (arr_0 [i_2]) : (arr_0 [i_2]))))))));
                                arr_15 [i_0] [1] [8] [5] [i_3] [2] = (((arr_9 [1] [i_2] [i_4]) ? (((arr_9 [i_4] [i_3] [8]) ? (min((arr_0 [i_0]), 4294967295)) : var_10)) : (((((var_9 || -85) > (((arr_14 [i_3] [5] [i_3]) ? (arr_0 [i_1]) : 45))))))));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_1] [i_1] = var_3;
                arr_17 [i_0] [i_0] = (min(-var_6, ((max((arr_1 [i_0] [i_1]), (arr_1 [1] [8]))))));
            }
        }
    }
    var_18 = (min(var_18, ((min(var_3, ((((var_12 ? -8012614630793515364 : 201)) < (((min(var_5, var_12)))))))))));
    #pragma endscop
}
