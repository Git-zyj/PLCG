/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_15, (((max(var_7, var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (arr_1 [i_0]);

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] = (arr_6 [i_0] [5] [i_0]);
                                var_18 = (max(var_18, ((min((arr_4 [i_0]), ((max((arr_5 [i_2 - 1]), (arr_3 [9] [i_1])))))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] = (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2 - 1] [13]) * (arr_8 [i_0] [i_1] [i_1] [i_2 + 2])));
                    arr_16 [i_0] = (arr_9 [i_0] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_19 = (max(((min(((max((arr_2 [i_0] [i_2 - 1] [14]), (arr_2 [i_0] [i_0] [i_1])))), (arr_18 [i_2 + 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])))), (min((arr_6 [i_0] [i_1] [i_5]), (arr_19 [i_1] [i_2 + 3] [i_2 - 2] [i_6 - 1])))));
                                var_20 = ((((max((arr_6 [i_0] [i_0] [i_5]), (arr_9 [14] [i_1] [14])))) && (arr_18 [5] [i_1] [5] [i_6 - 1])));
                                arr_22 [i_2 - 1] [8] [19] [i_2 + 2] [i_2 - 1] [1] = ((max(((((arr_12 [i_6 - 1] [i_6] [5] [i_6 - 1] [i_6] [i_6] [5]) >> (arr_4 [i_0])))), (max((arr_1 [i_2 + 3]), (arr_21 [i_0] [7] [i_2 + 1] [i_2 + 1] [i_1]))))) & (min((min((arr_12 [i_6] [i_6] [i_6 - 1] [i_6] [i_6] [i_6] [i_6]), (arr_9 [i_0] [i_0] [9]))), ((max((arr_3 [i_2] [i_2]), (arr_4 [i_5])))))));
                                arr_23 [i_0] [i_6 - 1] [i_2 - 2] [i_5] [17] = (min(((~(((arr_10 [i_0] [1] [1] [i_0] [i_0]) >> (((arr_20 [i_0] [i_0] [i_0] [14] [i_0] [i_0] [i_0]) - 402)))))), (arr_18 [i_0] [17] [i_5] [i_5])));
                                var_21 = (-(arr_6 [i_0] [i_2 - 2] [i_5]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 |= var_10;
    #pragma endscop
}
