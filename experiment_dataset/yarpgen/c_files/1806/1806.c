/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [6] = (((((((((arr_2 [i_0] [i_1]) ? 18116 : 0))) ? (arr_3 [i_2] [i_0]) : var_6))) ? (arr_5 [i_0] [i_1] [i_1]) : (min(var_5, (arr_6 [12] [i_1] [i_2])))));
                    var_12 = (max((((arr_7 [i_0] [i_2]) ? 5631689229881321230 : (arr_2 [i_0] [i_0]))), ((max(8, ((var_4 ? (arr_3 [i_0] [14]) : -18)))))));
                    var_13 = var_1;
                    arr_9 [i_0] [i_0] [i_0] = ((((max(((max(var_6, 27))), (max(118, (arr_3 [2] [i_2])))))) || (arr_1 [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = (max((((arr_10 [i_4 - 3] [i_0] [i_0]) ? 4197516611 : var_3)), ((((arr_10 [i_0] [i_2] [4]) ? (arr_10 [i_0] [i_1] [i_4 + 1]) : (arr_10 [i_3] [i_1] [i_0]))))));
                                arr_14 [i_0] [i_4] [14] [i_2] [i_3] [i_4] [i_4 - 3] = ((min((arr_4 [i_4 + 1] [i_4]), (arr_4 [i_4 - 3] [9]))));
                                var_15 = (arr_4 [i_0] [i_0]);
                                var_16 = ((((max((arr_13 [2] [i_1] [i_2] [i_4 - 2] [i_0] [i_3]), (var_4 | var_4)))) ? -98 : (arr_13 [i_4] [13] [i_4 + 1] [i_4] [i_4 - 3] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((max(((var_4 ? var_5 : var_11), var_3))));
    var_18 = ((((max(-585949082960680742, -98))) ? ((((-var_0 || (((2806273475289433439 ? var_11 : 6959))))))) : var_7));
    var_19 = ((var_10 ? 8 : ((min(((var_7 ? 104 : var_8)), ((min(var_1, var_10))))))));
    var_20 = ((var_10 && (((-1075910865518208469 ? var_3 : var_10)))));
    #pragma endscop
}
