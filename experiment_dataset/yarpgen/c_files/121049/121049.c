/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(var_16, var_15);
    var_21 = (min(var_21, var_4));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_22 -= var_18;
                            arr_13 [i_3] &= (((var_14 ? ((((arr_1 [i_0]) ? (arr_0 [i_2] [i_0]) : (arr_2 [i_3])))) : var_13)));
                            arr_14 [i_0 - 2] [i_0 - 2] = ((32765 ? (max(((var_9 ? var_5 : (arr_5 [i_3]))), (arr_2 [i_0 + 1]))) : ((((arr_2 [i_0]) != (arr_11 [i_2]))))));
                            arr_15 [i_0] [i_1] = (min((((arr_8 [i_0] [i_1] [i_2] [2]) ? ((((arr_10 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_3]) ? 61 : -1))) : (arr_4 [i_2]))), ((max((arr_0 [i_2] [i_0]), 2)))));
                        }
                    }
                }
                arr_16 [i_0] [i_0] = 1;
            }
        }
    }
    #pragma endscop
}
