/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 ^= arr_6 [i_0] [i_0] [i_0 + 1] [i_0];
                                var_14 = ((-((((((arr_10 [11] [i_1]) ? var_1 : 695656513))) / var_0))));
                                var_15 ^= 3599310783;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_16 = (9223372036854775807 / (((9223372036854775807 ? 3599310783 : -20136))));
                                arr_17 [i_1] [i_1] [14] [i_1] = (((arr_7 [6]) / (arr_7 [i_0 + 1])));
                                arr_18 [i_6] [i_6] [i_2] [i_5] [i_6 + 1] [13] |= 695656491;
                                var_17 = (max(var_17, 11075908604864747721));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 ^= var_10;
    var_19 = var_11;
    #pragma endscop
}
