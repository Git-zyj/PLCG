/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 = 0;
                                var_13 = var_3;
                                arr_13 [i_2] [i_3] [8] [9] [i_2] = (((arr_1 [i_0 - 1] [i_2 + 2]) ? -3308721122 : (min((arr_1 [i_1] [i_1]), (((arr_8 [i_2] [i_4]) - (arr_2 [i_1])))))));
                                var_14 -= (((((max((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_11 [i_0] [i_1 - 1] [i_2] [i_3] [i_4]))))) ? ((-1 ? (arr_5 [i_1] [i_3] [i_4]) : var_9)) : (arr_3 [i_0 - 1])));
                            }
                        }
                    }
                    var_15 = var_5;
                }
            }
        }
    }
    var_16 = ((((var_11 ? (var_2 - var_6) : 15374867077287536291)) - var_0));
    #pragma endscop
}
