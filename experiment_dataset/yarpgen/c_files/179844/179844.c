/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((-1 ^ -652738582) ^ (((arr_0 [i_0]) ? (((var_5 >> (var_3 + 8957606969774709854)))) : ((3 ? 4294967292 : -80))))));
        var_17 = (max(var_17, (((((((arr_0 [i_0]) >> (448 - 438)))) <= (((arr_2 [i_0]) ? ((var_14 ? (arr_0 [i_0]) : 28)) : 9677035485960655426)))))));
    }
    var_18 = var_10;
    var_19 = var_14;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_20 = (((~4294966848) ? ((((arr_9 [i_1] [i_2]) || var_9))) : (((arr_1 [i_1] [i_2 + 1]) ? (arr_1 [i_1] [i_1]) : var_16))));
                    var_21 = var_14;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [i_2] [i_2] [9] [i_4] [i_5] = 6;
                                arr_18 [i_4] [i_5] = (((((((arr_15 [i_1] [i_2 + 1] [4] [i_4] [i_5] [i_4] [i_1]) | (arr_16 [i_5 + 1] [i_1] [i_2 - 1] [i_4] [i_5]))) + 2147483647)) << (((((((arr_13 [i_1] [i_1] [i_1]) ? (arr_16 [i_1] [i_1] [i_1] [i_1] [20]) : (arr_10 [i_1] [i_2 + 2]))) + 15302)) - 19))));
                            }
                        }
                    }
                    var_22 = 24800;
                }
            }
        }
    }
    #pragma endscop
}
