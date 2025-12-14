/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11321
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
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_12 = var_11;
                                arr_11 [5] [i_2] [8] [1] [0] = (min(((((min((arr_6 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4]), 1))) ? ((-79 ? -86 : 2298473910)) : var_2)), ((min((arr_1 [i_0] [i_0]), (arr_8 [i_4] [i_4 + 3] [i_3] [i_2 + 3]))))));
                                arr_12 [i_3] [i_3] [i_2] [i_3] [i_3] = (((((-var_3 < (min(-79, (arr_4 [i_0] [9] [i_0] [i_2])))))) == var_3));
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = ((-(((min((arr_0 [2]), -79))))));
                            }
                        }
                    }
                }
                var_13 = (max(((-79 ? (arr_6 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_6 [7] [3] [i_0] [i_0] [i_1] [i_1]))), (arr_7 [i_0] [i_1])));
                var_14 = ((((min(var_1, (max((arr_6 [1] [i_1] [i_0] [3] [i_1] [7]), 79))))) ? (((var_11 && ((min((arr_7 [i_0] [i_1]), -126)))))) : ((0 >> ((((-(arr_7 [i_1] [i_0]))) - 949762590))))));
            }
        }
    }
    var_15 = ((var_11 != (max(var_11, var_10))));
    #pragma endscop
}
