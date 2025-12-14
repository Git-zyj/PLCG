/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (arr_1 [i_0]);
                arr_6 [i_1] = (((((-(var_12 / var_1)))) ? ((~(~40887))) : (arr_5 [i_1 + 1] [i_1 - 1])));
            }
        }
    }
    var_16 = (min(var_16, var_3));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            {
                arr_12 [i_2] = min((arr_9 [i_2]), 13124);

                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    var_17 |= ((!(((arr_10 [22] [i_2 + 1]) == (arr_10 [14] [i_2 + 1])))));
                    arr_15 [i_2] = ((~(((max((arr_7 [i_2]), (arr_11 [i_2]))) % var_12))));
                    arr_16 [i_2] [i_2] [i_2] [i_2] = (max(1, ((-1 / (1189014800621217441 / 2786870986)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((min(((max(13124, -109)), (((arr_11 [i_5]) / 1)))))))));
                                arr_21 [i_2] [i_3] [i_4] [i_2] [i_4] = ((52414 ? (arr_14 [i_2] [1] [i_4] [i_4 - 1]) : ((var_11 ? (arr_19 [i_2 + 1]) : (arr_20 [i_2] [i_3] [i_2 + 1] [i_5] [i_3 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
