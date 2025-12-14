/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (((14 ? 3302083494084362158 : -4)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_10 = (max(((((var_3 ? 243 : (arr_8 [i_4] [i_1]))))), ((((min(-28, -21))) ? -162 : 2968410213))));
                                var_11 = (min(var_11, ((((((-(arr_4 [i_2] [5] [i_4])))) / var_8)))));
                            }
                        }
                    }
                    var_12 = ((!(!28796)));
                    arr_12 [i_0] [2] = ((!(arr_0 [i_2])));
                }
            }
        }
    }
    var_13 = ((162 ? (var_6 - var_9) : (max((((var_7 ? var_0 : var_0))), (max(var_1, var_7))))));
    var_14 = (((((!(var_0 & var_0)))) / var_9));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                arr_17 [i_6] [i_6] = max((((arr_1 [i_5 + 1]) | (arr_1 [i_5 + 1]))), (arr_11 [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 + 1] [i_5 + 2] [i_5 - 1] [i_5 + 1]));
                var_15 = (max(var_15, (((((min(4, ((1 ? (arr_8 [i_5 - 1] [i_5 - 1]) : (arr_16 [i_5])))))) | ((-28 + (arr_15 [i_6] [i_6]))))))));
                var_16 -= (((arr_10 [i_5] [i_5] [1] [i_5] [i_5]) ? ((var_3 ? (arr_1 [0]) : ((((arr_3 [i_5] [i_6] [i_6]) ? 512 : 183))))) : (((((((arr_8 [i_6] [i_6]) <= (arr_1 [i_6])))) | (arr_11 [i_5] [i_6] [i_5] [i_6] [i_6] [i_5] [i_5]))))));
                var_17 |= ((!(((-(arr_3 [i_5 + 1] [i_5 + 1] [i_5 - 1]))))));
            }
        }
    }
    #pragma endscop
}
