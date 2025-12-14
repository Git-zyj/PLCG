/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max(var_8, ((max(var_7, var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, (((~(((arr_5 [0] [8] [0]) ? ((((arr_10 [1] [i_3] [i_1]) ^ 876007020))) : (max(758989061, 994070142)))))))));
                                var_12 = ((!((((max((arr_7 [i_0] [10]), (arr_5 [i_0] [i_1] [1])))) < (((arr_1 [i_0]) ? (arr_10 [i_4] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0])))))));
                                var_13 = (max(((-(((arr_12 [i_0] [i_1] [i_2] [i_1] [i_3] [i_4]) + (arr_10 [i_1] [i_0] [i_4]))))), var_4));
                                var_14 = (((!(arr_2 [i_0]))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((!((((arr_8 [i_0] [i_1 - 1]) ? ((min((arr_6 [i_0] [6] [8] [8]), (arr_2 [i_0])))) : (arr_10 [i_0] [i_0] [4]))))));
                            }
                        }
                    }
                }
                var_15 = -var_0;
            }
        }
    }
    #pragma endscop
}
