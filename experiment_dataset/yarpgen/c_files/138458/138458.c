/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((((((~(arr_11 [i_0] [6] [i_4 - 1] [i_4 - 1] [i_1] [4])))) ? (arr_11 [i_0] [i_1] [i_1] [i_3] [i_3] [i_0]) : (var_9 <= var_8))))));
                                arr_13 [6] [6] [i_0] [6] [i_4] [4] = var_11;
                            }
                        }
                    }
                    arr_14 [i_0] = var_5;
                    var_14 = ((-(((var_12 >= ((((!(arr_1 [i_0]))))))))));
                }
            }
        }
    }
    var_15 = ((((var_6 / (5127479445265091896 | var_2))) + (!var_4)));
    var_16 = var_5;
    #pragma endscop
}
