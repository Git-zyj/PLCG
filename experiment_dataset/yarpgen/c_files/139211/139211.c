/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min((((!(!var_8)))), 1104734731);
    var_14 = (max((var_9 & var_11), var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = (arr_10 [i_4] [i_3] [14] [5] [i_0]);
                                arr_11 [i_4 - 1] [16] [i_2 - 1] [i_2] [i_1] [3] [i_0] = ((var_0 ? var_12 : (arr_7 [i_2 + 2] [i_2 + 2])));
                                var_16 |= (((arr_4 [i_1 + 1] [i_0]) >= (arr_4 [i_1 + 1] [8])));
                            }
                        }
                    }
                    arr_12 [i_2 + 1] [i_0] = -var_8;
                }
                for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    var_17 = (max(var_11, (arr_14 [i_0] [i_1 + 1])));
                    var_18 = (max((arr_5 [i_5 - 1] [i_0]), var_12));
                    var_19 += (arr_0 [i_1 - 1]);
                    var_20 *= (min((min(((0 * (arr_5 [i_0] [i_0]))), ((((arr_10 [i_0] [i_0] [i_1] [i_5 + 2] [19]) * (arr_0 [i_0])))))), ((var_2 ? -var_9 : (var_7 * 0)))));
                }
                arr_16 [i_1] = (var_10 ? (min(((((arr_8 [i_0] [i_0] [i_1] [i_1]) - -1))), (max((arr_5 [i_1 - 1] [i_0]), (arr_2 [i_0] [i_1] [i_1]))))) : (((arr_1 [i_0]) ? (arr_4 [i_1] [i_0]) : (max(var_6, (arr_2 [i_0] [i_0] [i_0]))))));
            }
        }
    }
    var_21 = (((((~((8 ? -8 : var_12))))) ^ ((var_4 ? (((var_3 ? var_8 : var_7))) : (max(var_9, var_10))))));
    #pragma endscop
}
