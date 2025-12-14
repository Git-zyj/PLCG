/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = ((((min(((max(var_8, var_14))), var_5))) == (max((((arr_5 [i_0] [i_1 + 1] [i_2] [i_0 - 2]) >> (var_14 - 28019))), var_6))));
                    var_18 = (arr_5 [3] [2] [7] [i_1 + 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = (arr_4 [i_4] [i_0] [i_0] [i_0 + 3]);
                                var_20 |= -2762793177046227458;
                            }
                        }
                    }
                    var_21 = var_12;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_22 = (max((((var_6 >> (((arr_19 [12] [i_5] [i_5] [i_5]) / (arr_15 [i_5] [4])))))), (min(((2147483640 - (arr_15 [23] [i_9 + 2]))), (!2762793177046227470)))));
                                var_23 = (max((((!((max((arr_18 [i_9 + 2] [7] [i_9] [19]), var_10)))))), (max((max(var_13, (arr_13 [10] [i_9]))), 1))));
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_24 = (~-2147483641);
                        var_25 &= (min((max(-2762793177046227465, ((((arr_17 [i_6] [1] [23] [i_5]) - (arr_23 [i_7] [19] [i_10] [i_10] [i_7])))))), (((max(var_14, 2762793177046227488)) >> (!var_0)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
