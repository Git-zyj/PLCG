/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((min((min(var_11, var_0)), var_10)))));
    var_15 = ((-(((var_9 == (min(var_11, var_0)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] = (((((min((arr_5 [i_1 - 3] [i_1 + 1]), var_2)))) > (max(2080768, 4292886528))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, (((((min(var_0, 2080773)) - (arr_5 [i_0] [i_0])))))));
                                var_17 = ((~(arr_4 [i_0])));
                                var_18 = (min(((-13333 ? 201 : 1)), ((((arr_3 [i_1 + 1]) && (arr_3 [i_1 - 1]))))));
                                var_19 = (max((((((var_12 ? (arr_15 [i_0] [7] [i_0] [i_3] [i_1]) : var_7))) && (arr_11 [i_3]))), (arr_1 [i_0])));
                            }
                        }
                    }
                    arr_16 [5] = ((var_11 ? (((arr_13 [i_1 - 3] [i_2] [i_2] [i_1] [i_2]) - (max((arr_15 [i_0] [i_0] [i_1 - 3] [i_1 - 4] [i_0]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : ((max(var_13, (((arr_11 [i_0]) ? 2080787 : (arr_11 [i_0]))))))));
                }
            }
        }
    }
    var_20 = (max(var_20, ((max(var_10, (((2080767 / var_12) ? (4292886521 * var_13) : (((var_6 ? var_2 : var_5))))))))));
    var_21 = ((var_9 | ((max(var_4, 1)))));
    #pragma endscop
}
