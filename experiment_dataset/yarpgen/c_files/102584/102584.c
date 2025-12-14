/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    var_18 = (((var_8 || (var_5 != var_13))) ? (min(var_12, ((min(var_15, -1))))) : (((((max(var_13, var_7))) ? var_6 : 101))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_19 += ((-((((((arr_4 [i_3 - 4] [i_0] [i_0]) + var_14)) >= var_3)))));

                            for (int i_4 = 2; i_4 < 18;i_4 += 1)
                            {
                                var_20 = var_9;
                                arr_12 [i_1] [i_3 - 3] [i_2] [i_1] [i_1] = (max(3725316253173131379, ((((var_10 + 2147483647) >> (((arr_1 [i_1 + 1]) - 608322841)))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                arr_15 [i_0] [i_1] = (((arr_14 [i_3 - 4] [i_1] [i_3] [i_1] [i_3]) ? (arr_14 [i_2] [i_1] [i_2] [i_1] [i_1]) : (arr_0 [i_1 - 1])));
                                var_21 -= -1;
                            }
                            for (int i_6 = 0; i_6 < 20;i_6 += 1)
                            {
                                arr_19 [i_1] [i_1] [2] [i_3] [i_6] = var_13;
                                var_22 -= 11977;
                            }
                            var_23 ^= ((min(-1, var_6)));
                        }
                    }
                }
                var_24 = var_11;
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_28 [i_9] [i_9] [i_1] [8] [i_9] = 1;
                                arr_29 [i_0] [i_1] [i_1] [i_0] [9] [9] [i_9] = (max(((255 ? 0 : -5463275756364135162)), ((max(((var_4 ? var_5 : var_9)), 2147483647)))));
                                arr_30 [i_0] [i_0] [i_7] [i_0] [i_9] &= ((96 != (max(38, -2048))));
                                var_25 = (min(var_25, var_7));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (min(var_26, ((min((min(var_0, var_13)), ((1185045365 ? -8417113938613884439 : 28)))))));
    #pragma endscop
}
