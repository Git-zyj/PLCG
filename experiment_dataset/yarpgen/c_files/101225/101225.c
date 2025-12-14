/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (min(((var_6 ? (min(6958542754604100266, (arr_2 [i_0 + 1] [i_0 + 1]))) : (arr_1 [i_0 - 3]))), 126644719));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((-(arr_8 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_4 + 1]))))));
                                var_17 = var_1;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_18 -= ((!((max((arr_4 [i_0] [i_0]), (arr_16 [i_0] [i_1] [i_5] [i_7]))))));
                                var_19 = 6958542754604100253;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 4; i_8 < 23;i_8 += 1) /* same iter space */
    {
        var_20 = arr_22 [i_8];
        var_21 = (max(var_21, (((~(((((var_9 ? var_0 : 1))) ? (arr_19 [i_8 - 3]) : 23316)))))));
        arr_23 [i_8] = ((((-(((arr_20 [i_8]) - var_3))))) ? (arr_21 [i_8]) : (((arr_21 [i_8 + 1]) + var_0)));
    }
    for (int i_9 = 4; i_9 < 23;i_9 += 1) /* same iter space */
    {
        arr_27 [i_9] [i_9] = 42352;
        arr_28 [i_9] [i_9] = 246;
        var_22 = (max((((arr_26 [13]) ? 3837412953 : var_4)), ((((var_12 / var_13) ? -var_9 : 42220)))));
    }
    #pragma endscop
}
