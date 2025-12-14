/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 |= ((((((((1 ? var_0 : 57)) + 2147483647)) << (1 - 1))) << (((((arr_4 [i_0] [i_1] [i_2]) ? 118 : (arr_4 [1] [i_1] [i_2]))) - 118))));
                    var_20 = ((~((var_3 >> (((arr_2 [i_1] [i_1]) - 71))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = ((((min(((1594609268 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : 1)), ((479236610 ? 1 : 1))))) & (((arr_5 [i_4] [i_3] [i_1] [11]) >> (var_11 + 981570052)))));
                                arr_14 [12] [i_3] [12] [i_1] [12] = (((1297538178 * 1) / (arr_1 [i_1] [i_1])));
                                arr_15 [8] [i_1] [i_1] [i_3] [i_4] = (17129499988105756933 != 0);
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_4] = var_2;
                                arr_17 [i_2] = (var_4 / 1266825632);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 ^= (var_3 ? 233 : 0);
    #pragma endscop
}
