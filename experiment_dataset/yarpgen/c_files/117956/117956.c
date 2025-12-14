/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, var_10));
                                var_16 = (min(((+(((arr_13 [i_0] [8] [i_2] [i_2] [i_0] [i_0] [i_4 + 1]) ? (arr_7 [2] [i_1 - 1] [i_1]) : var_8)))), ((-(arr_6 [10] [7] [7])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [5] = ((arr_18 [i_0 - 1] [i_1] [i_2] [i_5] [i_1]) | (((arr_20 [i_0] [i_0 - 2] [i_0 - 1] [i_1 + 2] [i_1 - 2] [i_2 - 1]) ? (min(8514028380733659919, (arr_6 [i_0] [i_0] [1]))) : 9932715692975891696)));
                                var_17 = (min((max(((var_0 ? var_8 : (arr_14 [i_0] [i_0] [1]))), (arr_12 [i_0]))), (arr_7 [i_0 + 1] [i_1 + 1] [i_5])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((max((((9932715692975891696 ? 1938354205 : var_7))), var_11)));
    var_19 = var_8;
    var_20 = (~9932715692975891678);
    #pragma endscop
}
