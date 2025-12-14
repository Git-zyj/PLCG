/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(var_9, (-var_9 < var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (min(684943098, (max(16, (((-32767 - 1) ? -8650726729109694333 : 3634560850))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 = arr_7 [i_1 - 3] [i_2 - 1] [i_3] [i_4];
                                var_13 = max((min(((max(var_7, (arr_1 [i_0] [15])))), ((32764 ? (-32767 - 1) : 1650348169)))), -9419);
                                arr_13 [i_4] [i_3] [i_4] [i_4] = ((max((((arr_12 [i_0] [i_1 - 3] [i_2] [i_1 - 3] [i_4]) * var_8)), -1)));
                                arr_14 [i_0] [i_1 - 2] [12] [i_2 + 1] [i_3] [i_3] [i_4 - 3] = (arr_12 [i_2] [i_2] [i_4 + 2] [i_4] [i_4]);
                                var_14 = -var_0;
                            }
                        }
                    }
                }
                var_15 = ((-((((((arr_3 [i_1 - 2] [1] [6]) ? var_5 : var_8))) ? (arr_0 [i_1]) : -var_7))));
                var_16 = min(((-(arr_1 [i_1 - 3] [i_1 - 2]))), (min((arr_1 [i_1 - 1] [i_1 - 2]), (arr_1 [i_1 + 2] [i_1 - 4]))));
                var_17 = 2147483624;
            }
        }
    }
    #pragma endscop
}
