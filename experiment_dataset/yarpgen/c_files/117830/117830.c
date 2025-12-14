/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = ((-(max(var_8, (-8416067207308174340 <= var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (arr_0 [i_1 - 1] [i_0 + 3]);
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0 + 3] [i_0] [i_1] [12] = (arr_9 [i_4 - 3] [i_3 + 3] [i_2] [i_2] [i_2 + 1] [i_0] [i_0]);
                                arr_13 [i_0 + 1] [i_0] [i_1] [1] [8] [i_4 - 2] = (min((65511 <= var_10), (((arr_6 [i_1] [i_1] [i_1] [i_1]) ? (max((arr_0 [i_1] [i_3 - 1]), 65511)) : ((((65488 <= (arr_10 [i_0])))))))));
                                arr_14 [i_0] [11] [i_1] [i_2] [i_1] [i_3 + 3] [11] = (~((~(arr_5 [i_3 + 1] [i_1 + 1] [i_4 - 3]))));
                                arr_15 [i_1] [i_4] [i_4 - 1] [i_3] [i_1] [i_1] [i_1] = (arr_9 [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2] [i_3] [i_4]);
                            }
                        }
                    }
                }
                var_13 = (max(((((arr_5 [i_1 - 1] [i_1 - 1] [i_0 - 1]) ? (arr_5 [i_1 - 1] [i_1 - 2] [i_0 + 3]) : (arr_5 [i_1 - 1] [i_1 - 1] [i_0 + 3])))), (~4711832888179917428)));
            }
        }
    }
    var_14 -= var_10;
    var_15 = var_10;
    #pragma endscop
}
