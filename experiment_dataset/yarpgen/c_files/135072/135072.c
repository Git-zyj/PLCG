/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0] [i_0]) / (arr_0 [i_0])))) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (arr_0 [i_0])));
        var_18 ^= (min((max(((-(arr_0 [i_0]))), (arr_0 [i_0]))), (arr_1 [i_0] [i_0])));
        var_19 = ((((arr_1 [i_0] [i_0]) ? (max(-108, 3979609144)) : ((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_13 [i_2] [i_1] [i_3 - 1] [i_4] = (arr_9 [i_2]);
                            var_20 = (max(var_20, (((!(arr_4 [i_1 + 2]))))));
                            arr_14 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1 + 3] = ((((max((arr_10 [i_3 - 2] [i_3 - 2] [i_2]), (arr_10 [i_3 + 1] [i_3] [i_2])))) ? (((arr_4 [i_1 + 3]) ? (arr_6 [i_1 + 1]) : (max((arr_4 [i_1]), (arr_3 [i_1]))))) : (((max((arr_10 [i_1] [i_2] [i_2]), (arr_10 [i_2] [i_3] [i_2])))))));
                            var_21 = arr_9 [i_2];
                        }
                    }
                }
                var_22 = (arr_3 [i_1 + 2]);
            }
        }
    }
    var_23 = (max((((((var_13 ? var_1 : var_5)) >= var_7))), (max(((var_14 ? var_12 : var_10)), var_10))));
    #pragma endscop
}
