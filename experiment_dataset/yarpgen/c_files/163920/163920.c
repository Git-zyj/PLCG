/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_2] = -9031270669016717383;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_17 [6] = 2529316928983132561;
                                arr_18 [11] [i_3] [i_3] [i_3] [15] [i_1 - 2] [i_0] = (((((arr_6 [i_0] [i_2 + 1] [15]) / (arr_6 [i_1] [i_1 + 3] [i_2 + 1]))) << (!-0)));
                                var_13 = (min((min((arr_14 [i_2 + 1] [i_1 + 3] [i_1] [i_0]), (arr_2 [i_1] [i_1]))), (min((arr_14 [i_0] [i_0] [i_0] [i_0]), (((!(arr_2 [1] [i_4]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((2529316928983132530 ? (~var_9) : (((((159 ? 1 : 48))) + ((var_11 ? 1196593459 : var_5))))));
    var_15 = (min(var_10, var_10));
    #pragma endscop
}
