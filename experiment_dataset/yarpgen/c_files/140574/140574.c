/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = ((((((arr_9 [i_0] [i_0] [i_0] [i_4]) - (arr_10 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])))) ? ((((arr_13 [i_1 - 1] [i_1 + 1] [3] [i_1 - 1] [i_1 - 1]) <= var_13))) : -31986));
                                var_17 = (((((((arr_5 [i_1 - 1]) ? -31986 : (arr_5 [i_1 + 1]))) + 2147483647)) >> ((((arr_11 [i_1 + 1] [i_1 + 1] [i_1 - 1] [4] [i_1 - 1] [i_1 - 1]) || (arr_2 [i_1 - 1] [i_1 + 1]))))));
                                var_18 = (min(var_18, ((max(((-((6510983459108414546 ? 40726 : 17877)))), (((arr_3 [i_1 - 1]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 1]))))))));
                            }
                        }
                    }
                }
                var_19 = (max(var_19, 866967173));
                arr_15 [i_0] = (((((((((arr_6 [i_0]) < var_6))) << (((arr_5 [i_0]) - 44693))))) ? ((((((var_14 + 2147483647) >> (var_7 - 378254876693455225)))) % (max(286895975, (arr_9 [i_0] [i_1] [i_1 - 1] [i_0]))))) : (arr_9 [i_0] [i_0] [i_0] [i_0])));
                arr_16 [i_0] |= ((((min(var_9, (arr_8 [i_1 - 1])))) < ((max((arr_0 [i_1 + 1]), (arr_8 [i_1 - 1]))))));
            }
        }
    }
    var_20 = (~var_0);
    var_21 = (min(var_21, (611636512 || var_4)));
    var_22 *= (((((!var_13) ? (max(762500897, 27)) : (min(var_12, var_0)))) & 0));
    #pragma endscop
}
