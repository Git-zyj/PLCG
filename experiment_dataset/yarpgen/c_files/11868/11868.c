/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [10] [i_1] [i_1] |= ((((((arr_2 [i_0] [i_1] [i_0]) <= var_8))) << (((arr_4 [i_0 + 4] [i_1]) - 42388))));
                arr_6 [i_1] [i_1] = arr_1 [i_0 + 4];

                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 ^= ((var_12 ? var_17 : (min(var_11, (max(379579287, var_6))))));
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] = var_4;
                                arr_15 [i_1] [i_3] [i_1] = (max(var_9, (min(var_15, 42))));
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] [i_4] = (arr_0 [i_0]);
                                arr_17 [i_0 + 3] [i_1] [i_2] [i_1] [i_4] = (arr_9 [i_0] [i_1] [i_3]);
                            }
                        }
                    }
                    arr_18 [i_1] [i_1] [i_1] = (min(1, (min((arr_2 [i_2] [i_1] [i_0]), (arr_0 [i_0])))));
                }
                arr_19 [i_1] = (min((max(var_14, var_12)), ((((arr_13 [i_0] [i_0] [i_1] [13] [i_0] [i_1]) - var_2)))));
                var_19 = ((var_4 ? ((1 ? (arr_0 [i_0]) : (var_9 & 18287360092876986817))) : (arr_10 [i_0] [i_0 + 3] [i_1] [2] [i_1] [i_1])));
            }
        }
    }
    var_20 = (((min(((var_6 ? 159383980832564804 : var_10)), (((247 ? var_0 : 1))))) % var_16));
    var_21 = ((((var_2 ? var_4 : var_17)) ^ var_2));
    #pragma endscop
}
