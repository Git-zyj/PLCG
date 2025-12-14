/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = 0;
                                var_15 = ((~((var_5 & (arr_1 [i_0] [i_4 - 3])))));
                                var_16 = 106;
                                arr_13 [i_0] [i_0] [i_0] [i_0] = ((+(((arr_10 [i_1 - 2] [i_1] [i_4 - 2] [i_4 - 2]) ? (arr_1 [i_1 - 1] [i_1 - 2]) : (arr_1 [i_1 - 1] [i_3])))));
                                var_17 = ((((((var_2 ? (arr_6 [5] [5] [i_3]) : (arr_3 [i_4 + 1])))) ? (((min((arr_0 [i_2] [i_4 + 1]), (arr_11 [i_2] [i_3] [i_3]))))) : -989343501705871597)));
                            }
                        }
                    }
                    var_18 = (989343501705871597 ^ 0);
                }
            }
        }
    }
    var_19 = ((var_4 ? 0 : (min(var_9, 989343501705871597))));
    var_20 = (min(var_20, (((((var_2 & (255 && var_1))) / 989343501705871597)))));
    #pragma endscop
}
