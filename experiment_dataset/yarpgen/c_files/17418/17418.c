/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = ((((-((max(50, var_12))))) + -0));
                                arr_14 [4] [i_3] [i_2] [i_0] [i_0] = ((-(56 <= 122)));
                                var_16 = 134;
                                var_17 = (((((arr_6 [i_0] [i_1 - 1] [i_3] [i_4]) ? (max((arr_6 [i_0] [i_0] [i_0] [i_0]), var_5)) : var_6)) * (((max(var_12, var_8))))));
                            }
                        }
                    }
                    var_18 ^= (max(((50 ? (arr_3 [i_1 + 3]) : (arr_3 [i_1 - 1]))), (arr_3 [i_1 + 3])));
                    arr_15 [i_0] [i_1 - 1] = var_12;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] |= 16;
                                arr_23 [i_0] = var_14;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_1] [i_2] [i_7] [i_0] [i_0] = (arr_24 [i_1 - 1] [4] [i_2] [4] [i_7]);
                                arr_29 [i_0] [i_0] [i_1 + 1] [2] [i_1 + 1] [i_7] [11] = (max(((max(8003747305034261372, (arr_9 [i_0] [i_0] [i_0] [i_0])))), 3286811267));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = 1;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            {
                arr_35 [i_9] [i_10] = ((max(-7052916107968677194, 122)) == var_8);
                var_20 = ((((min(var_1, (arr_34 [i_9] [i_10] [i_9])))) * ((max((arr_34 [i_10] [i_10] [i_9]), (arr_34 [i_9] [i_10] [i_9]))))));
            }
        }
    }
    #pragma endscop
}
