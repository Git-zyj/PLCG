/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_3] [i_0] [i_0] = (arr_7 [i_0 + 1] [i_1] [i_3 - 1] [i_3]);
                                var_14 = ((1290541359 ? (((~(arr_7 [i_3] [i_0 + 1] [i_0 + 1] [i_3])))) : ((~(((arr_9 [i_3] [i_3] [i_2] [i_3] [i_0]) ? (arr_3 [i_2] [i_4]) : 2745))))));
                                arr_13 [i_3] [i_3] [i_2] [i_3] [i_0] = (max(var_10, ((((((var_2 ? (arr_7 [i_0] [i_1] [i_2] [i_3]) : (arr_4 [i_1] [i_1])))) ? var_9 : (arr_3 [i_0] [i_0]))))));
                            }
                        }
                    }
                    var_15 = max((max(var_3, ((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2]) ? var_5 : var_6))))), (min((((!(arr_8 [i_2])))), (((arr_7 [i_0] [i_0] [i_0] [i_2]) ? (arr_6 [i_1] [i_1]) : (arr_4 [i_0] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
