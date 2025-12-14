/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_19 = 42246;

                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            arr_12 [i_0 + 1] [i_1] [i_2] [i_3] [15] [i_0 - 1] = ((-(((31 / (arr_9 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1]))))));
                            var_20 = (((min(var_7, (arr_6 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_4 - 1]))) != ((1 << (52803 - 52781)))));
                        }

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_21 = (min(var_21, (((890634465186497480 & (12713 < 12999927326862264488))))));
                            var_22 = ((((((-(arr_9 [i_0] [i_1] [i_2] [i_5]))) + 2147483647)) >> (var_7 + 1922063082)));
                            var_23 = 586576880;
                        }
                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            var_24 = ((~((~(arr_9 [i_2] [i_3] [1] [i_6 - 1])))));
                            var_25 ^= 24;
                        }
                        arr_18 [14] [i_1] [i_1] [i_1] [7] [2] = (((var_8 <= (((!(arr_17 [i_0] [i_0] [i_2] [i_3] [i_0])))))));
                        var_26 &= (arr_5 [8] [i_1] [i_3]);
                    }
                }
            }
        }
        var_27 += ((min(var_6, (arr_3 [i_0 - 1] [i_0 + 1]))));
    }
    var_28 = var_4;
    var_29 = -var_5;
    #pragma endscop
}
