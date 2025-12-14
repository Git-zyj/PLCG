/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((min((arr_1 [i_0]), (arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_15 *= ((~(((min((arr_6 [i_3]), 0))))));
                            var_16 &= (arr_1 [i_0]);
                            arr_8 [i_3] = (((max(var_8, (((arr_7 [i_0] [i_3] [6] [i_3]) ? var_0 : -1)))) != var_8));
                        }
                    }
                }
                var_17 = ((max(((((arr_1 [i_0]) | var_5))), (max(7599530314792334029, -15)))) | (((413426034 ? -413426051 : 1))));
                var_18 ^= ((!(((var_6 ? var_6 : (arr_7 [i_0] [i_1] [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_19 ^= ((var_4 ? ((-(arr_14 [i_0]))) : (((!(!2211848691))))));
                            arr_15 [i_0] [i_1] [i_4] [i_5] = ((arr_14 [i_1 + 2]) ? ((((arr_14 [i_1 - 2]) < (arr_9 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 + 2])))) : (((arr_14 [i_1 - 1]) ? (arr_2 [i_1 + 1] [i_1 - 2] [i_5]) : var_9)));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_11;
    var_21 = var_0;
    #pragma endscop
}
