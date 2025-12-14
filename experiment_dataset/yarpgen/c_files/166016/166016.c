/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_17 += (min(((1 - (arr_4 [8]))), (arr_4 [6])));
                var_18 += var_13;
                var_19 = (((arr_5 [i_1]) ^ ((((arr_0 [i_0] [i_0 + 2]) << (((arr_6 [i_0 + 2] [i_0 - 1] [i_0 - 2]) - 2037931316)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_20 = (min(var_20, (((min(((-(arr_7 [1] [1]))), ((-3229 ? var_6 : 2047)))) > (arr_9 [13])))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_21 = ((((((arr_15 [i_2 - 1] [i_4] [i_5] [i_6]) ? 4908111205723147648 : -2047)) < (((2972684704 ? (arr_15 [i_3] [i_3] [i_3] [i_3]) : var_7))))));
                                var_22 = (max((((arr_13 [i_2 - 1] [i_3 + 1] [i_2 + 2]) ? var_7 : (arr_17 [i_2 + 2] [i_2 + 2] [i_4] [1] [i_6] [i_5 - 2] [i_3]))), ((((-(arr_18 [i_2] [i_3] [i_6] [i_4] [i_2] [i_2]))) - (arr_15 [i_2 - 1] [i_3] [i_4] [5])))));
                                arr_20 [i_6] [i_5 + 1] [11] [i_3 - 1] [i_6] = 2;
                                var_23 = ((var_1 ? (((min((arr_17 [2] [i_5 + 1] [11] [i_5 - 1] [i_5] [i_5] [i_5]), (arr_15 [i_5] [i_5 + 1] [i_5] [i_5 - 1]))))) : ((((max(4248259183, (arr_16 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_6])))) ? (arr_14 [15]) : 46708095))));
                            }
                        }
                    }
                    var_24 = (max(var_24, ((((-10487 | -32765) ? (((!((max(var_16, var_1)))))) : ((1322282601 ? 120 : (-250121758 <= 0))))))));
                }
            }
        }
    }
    #pragma endscop
}
