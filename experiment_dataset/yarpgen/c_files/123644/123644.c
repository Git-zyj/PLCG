/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_12 = (max(var_12, ((max(var_6, var_7)))));
                                var_13 = (min(var_13, ((min((max(var_11, var_9)), (min(((max(var_8, var_7))), (min(var_8, var_2)))))))));
                                var_14 = (min((min((max(var_1, var_8)), ((max(var_7, var_1))))), var_3));
                            }
                            var_15 = (min(((max(var_1, var_0))), (min(((max(var_9, var_9))), (min(var_5, var_11))))));

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                arr_16 [i_0 - 2] [i_1] [i_2] [12] [i_1] = var_5;
                                var_16 = var_11;
                                arr_17 [i_1] [i_3] = var_7;
                                arr_18 [i_0] [i_0] [i_0] [i_1] [4] = var_10;
                            }
                            for (int i_6 = 2; i_6 < 22;i_6 += 1)
                            {
                                arr_22 [i_0] [i_0] [22] [6] [i_1] [i_3] [13] = var_4;
                                var_17 = max((min((max(var_11, var_3)), ((min(var_10, var_0))))), var_9);
                            }
                            for (int i_7 = 0; i_7 < 23;i_7 += 1)
                            {
                                var_18 -= (min(var_9, (max(((min(var_4, var_4))), (max(var_9, var_2))))));
                                arr_26 [i_7] [i_1] [i_2 - 2] [i_1] [i_0] = var_1;
                            }
                            for (int i_8 = 3; i_8 < 19;i_8 += 1)
                            {
                                var_19 = (min(var_6, var_0));
                                arr_30 [i_8] [i_1] [i_3] [i_2 + 1] [i_1] [i_0] = (max((min((max(var_10, var_8)), var_9)), var_1));
                                var_20 = (min(var_5, (min((max(var_9, var_5)), ((max(var_9, var_8)))))));
                            }
                            var_21 *= (max(var_10, (min(var_2, var_0))));
                        }
                    }
                }
                var_22 = (min(var_1, var_8));
                arr_31 [i_1] = (min(var_7, (max(var_5, (min(var_7, var_11))))));
            }
        }
    }
    var_23 = (max((max(var_5, ((max(var_3, var_0))))), ((max((max(var_7, var_10)), (max(var_0, var_10)))))));
    #pragma endscop
}
