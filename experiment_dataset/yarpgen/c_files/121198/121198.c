/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (!var_2);
    var_20 = var_3;
    var_21 = (min(var_21, var_5));
    var_22 = (min(((var_18 == (!var_16))), (min((!var_16), (var_0 == var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (max(((216 ? 70 : ((max(-26, 0))))), 12));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_23 = arr_0 [i_3] [5];
                                arr_15 [7] [i_1] [5] [i_2] [5] = (((arr_0 [i_0] [i_1]) ? (arr_13 [i_2] [i_3]) : (((arr_11 [i_1] [i_1] [i_1 - 1] [i_4] [i_4]) ? ((var_6 ? var_17 : (arr_14 [i_0] [i_0] [i_2] [13] [13]))) : (arr_1 [i_0 - 1])))));
                            }
                        }
                    }
                }
                var_24 = (((((arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_0 - 1]) * (arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0 - 1]))) >> (((!(arr_6 [12] [18] [i_0 - 1] [12]))))));
            }
        }
    }
    #pragma endscop
}
