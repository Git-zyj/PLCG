/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
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
                                arr_13 [i_0] [i_0] [i_0] [i_0 - 1] = 1;
                                arr_14 [9] [i_0 - 1] [8] [8] [i_2] [i_3] [i_0] = -668522392;
                                arr_15 [i_0] [i_1] [7] [i_0] [i_4] = (max((((!(arr_9 [i_0] [i_2] [i_0])))), (min((-20730 + 130816), (arr_2 [i_0] [i_0 - 1] [i_0])))));
                            }
                        }
                    }
                    arr_16 [i_0] = max((arr_6 [i_0 - 1] [i_0] [i_0]), (max((arr_6 [i_0 - 1] [i_0] [i_0 - 1]), var_7)));
                    var_10 = (65535 & 160);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_11 = (arr_17 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0]);
                                var_12 = 9223372036854775807;
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = var_9;
    #pragma endscop
}
