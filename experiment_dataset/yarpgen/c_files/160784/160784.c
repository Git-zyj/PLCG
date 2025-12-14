/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_13 |= ((1 > (max(235, -9223372036854775788))));
                            arr_11 [i_0] [i_0] [i_1] [i_3] [10] [i_3] = 1796824560904384239;
                            var_14 = (((-397823715 ? 397823704 : (arr_2 [i_0] [i_1 - 2] [i_3]))));
                            var_15 += ((((4294967282 ? -397823715 : 3484832111)) != (4294967295 != -397823714)));
                        }
                    }
                }
                var_16 |= (35465847065542656 ? (((1 != ((-1796824560904384227 ? 1 : -397823720))))) : (arr_8 [i_1 + 1] [i_1] [i_1]));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_17 = max((arr_9 [i_4] [i_5] [i_4] [i_4] [i_8]), (((!((((arr_17 [i_4] [i_4] [i_4]) * var_5)))))));
                                arr_22 [i_4] [i_5] [i_4] [i_7] [i_8] = 1;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_18 = ((((((79 | (arr_6 [i_10 - 1] [i_9 - 1] [i_5 + 1] [i_5 + 1]))) + 2147483647)) >> (((((arr_1 [i_9 + 2]) << (((arr_13 [i_9 + 2] [i_5 + 1]) - 678053716)))) - 1397724654))));
                            var_19 = var_7;
                        }
                    }
                }
                var_20 |= (max(-397823723, -397823704));
            }
        }
    }
    #pragma endscop
}
