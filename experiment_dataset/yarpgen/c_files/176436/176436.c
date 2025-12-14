/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((min((((((2655456690978990195 ? -6364203748798389803 : 0))) ? 8 : 6364203748798389802)), ((max(0, (arr_6 [i_2] [i_1] [i_2] [i_3])))))))));
                                arr_13 [21] [i_1] [i_2] [i_1] [i_0] = (arr_6 [i_0] [i_0] [9] [14]);
                            }
                        }
                    }
                    var_18 = 6364203748798389784;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [12] [i_1] [i_2] [i_5] [12] = (min((((arr_17 [i_0] [i_1] [i_2] [i_0] [i_5] [i_6]) ? (arr_17 [i_0] [i_1] [i_0] [i_5] [i_6] [1]) : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (arr_6 [7] [i_2] [i_2] [i_2])));
                                arr_21 [i_0] [11] [i_0] [14] [i_5] [i_6] = (((min((arr_11 [i_0] [i_6]), (arr_11 [i_0] [i_6])))) && ((!(arr_2 [i_2]))));
                                var_19 = (arr_8 [i_6] [i_5] [i_2] [12]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_2;
    #pragma endscop
}
