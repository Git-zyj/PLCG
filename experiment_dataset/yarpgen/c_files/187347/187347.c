/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1 + 3] [i_0] [i_0] = (arr_2 [i_1 + 3] [i_1] [8]);
                arr_7 [i_1] [1] [i_0] |= ((((((arr_3 [i_0] [10]) ? (((arr_2 [i_0] [i_1] [i_1]) ? var_8 : (arr_4 [i_1] [8] [i_0]))) : (((-(arr_0 [i_1]))))))) ? (max(-var_4, (arr_2 [i_0] [i_1] [i_1]))) : var_9));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_14 = ((((((9223372036854775807 ? 41163 : (arr_2 [i_0] [i_1] [i_0]))))) ? var_5 : (arr_8 [i_1] [i_1 + 1] [i_1] [i_1 + 3])));
                            arr_14 [i_0] [i_2] [i_0] [i_3] [i_2] = ((var_11 ? (((var_9 ? ((min(var_5, (arr_5 [i_1 + 3] [i_0] [i_0])))) : (arr_10 [i_3] [9] [i_2] [9])))) : (!var_12)));
                        }
                    }
                }
            }
        }
    }
    var_15 = var_13;
    #pragma endscop
}
