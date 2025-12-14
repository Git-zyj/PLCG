/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((1 ? (max(45, 3751441922340459919)) : var_6)), (((-var_11 != (min(49754, var_6)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [19] = 15782;
                                var_13 = (max(((0 ? (arr_3 [i_0 - 1] [13] [i_0 - 1]) : (arr_8 [i_0 - 1] [i_1] [i_0 - 1] [i_3 + 1]))), ((var_11 ? ((~(arr_1 [i_1]))) : (!var_4)))));
                                var_14 = ((((((arr_3 [i_0] [i_0] [i_0 - 1]) ? (arr_8 [i_0] [i_0 - 1] [i_0] [i_0]) : (max((arr_6 [i_0 - 1]), 14695302151369091682))))) ? (((-7117364478442032159 && (arr_8 [i_3] [i_3 + 1] [i_3] [i_3 - 3])))) : (arr_8 [i_0 - 1] [i_2] [i_3 - 1] [i_4])));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_5] = max(((min(3751441922340459934, -12))), (min((min((arr_2 [i_1] [i_1]), 3751441922340459934)), ((var_8 * (arr_4 [i_0] [i_1] [i_2]))))));
                        arr_15 [i_0] [i_1] [i_2] [i_2] = ((!((!((!(arr_9 [i_0 - 1] [i_0 - 1] [i_1] [23] [23] [i_2] [i_5])))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_1] [i_1] = var_11;
                        arr_21 [0] [i_1] [i_1] [i_1] = 14695302151369091682;
                    }
                }
            }
        }
    }
    #pragma endscop
}
