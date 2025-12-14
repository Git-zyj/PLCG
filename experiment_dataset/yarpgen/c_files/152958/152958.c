/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (((136 * var_9) / (arr_1 [i_0] [i_1])));
                arr_6 [i_1] = (min(((var_5 ? (arr_4 [i_0] [i_1] [i_1]) : ((var_0 ? 2863800605 : 24641)))), 1362));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] = (((((var_11 ? 1353 : (arr_7 [i_2 - 1] [i_2 - 3] [i_3 + 1] [i_1])))) ? (arr_7 [i_2 + 1] [i_2 - 1] [i_3 + 1] [i_1]) : ((((!(arr_7 [i_2 - 1] [i_2 - 3] [i_3 + 1] [i_1])))))));
                                var_13 = (arr_9 [i_0] [i_1]);
                                arr_15 [i_1] = ((((((arr_4 [i_3 + 1] [i_3] [i_4]) + (arr_4 [i_3 + 1] [i_3 + 1] [i_3 + 1])))) ? (((arr_4 [i_3 + 1] [i_4] [i_4]) - (arr_4 [i_3 + 1] [i_3 + 1] [i_3 + 1]))) : (((arr_4 [i_3 + 1] [i_4] [i_4]) + (arr_4 [i_3 + 1] [i_3 + 1] [i_4])))));
                                arr_16 [i_2] [i_1] [i_1] [i_3] = 1362;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (var_4 | 717);
    #pragma endscop
}
