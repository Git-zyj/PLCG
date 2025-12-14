/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((((~841420842138929444) ? 841420842138929450 : (((((arr_0 [i_0]) || var_6))))))) ? ((max((arr_4 [i_0]), (min(64, (arr_1 [4])))))) : ((((arr_5 [i_0] [i_1 - 3] [i_1 + 1]) && (!var_17))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_18 = ((((min((((!(arr_3 [i_0])))), (((arr_4 [i_3]) ? (arr_4 [i_1 - 2]) : (arr_2 [i_0])))))) ? ((((((arr_3 [6]) | (arr_1 [i_3]))) & (~var_0)))) : (((arr_10 [i_0] [i_1] [i_1] [i_3]) ? (arr_5 [i_0] [i_2 + 1] [i_2 - 1]) : (arr_9 [i_1 - 1] [i_1 + 1] [i_2 + 3])))));
                            arr_13 [i_0] [i_0] = (arr_12 [i_2]);
                            var_19 = ((~(min(var_3, (arr_11 [i_1 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 3] [i_1 - 1] [i_3])))));
                            arr_14 [i_0] = ((max((((~(arr_2 [i_0])))), (max((arr_9 [8] [i_2 + 1] [i_3]), var_8)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_20 = (max((arr_19 [i_4] [i_4]), (min((arr_20 [i_5 - 1] [i_5 - 1] [i_5 + 1]), (arr_18 [i_4 + 1])))));
                            var_21 = (min(var_21, var_3));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                arr_35 [i_4] [i_5 + 1] [i_5 + 1] [0] [i_9] [i_10] = -var_14;
                                var_22 = (max(var_22, ((((((((((arr_29 [i_4] [i_5] [i_8] [0] [i_9]) ? 1 : -841420842138929444))) ? -17212 : (min((arr_21 [i_9] [i_8]), 841420842138929450))))) ? var_17 : var_9)))));
                                arr_36 [i_4] [i_4] = (((arr_17 [i_4]) & (arr_30 [i_10] [i_4] [i_4] [i_4 - 2])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
