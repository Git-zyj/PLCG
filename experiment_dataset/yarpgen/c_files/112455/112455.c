/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_3 [i_0]) << (((arr_2 [i_0]) - 4224538966))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 *= 1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = ((((((var_1 ? 4 : -57636070)) + 2147483647)) << (((((!(arr_5 [i_0] [i_2])))) - 1))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] = ((0 ? 0 : (arr_7 [i_4 - 1] [i_1 + 1])));
                                var_16 = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        var_17 = (min(var_17, (arr_17 [i_5])));
        var_18 = (max(var_9, ((max(177, ((min(var_11, 12))))))));
        var_19 = ((0 & (-21164 ^ -21166)));
        var_20 *= var_4;
        var_21 = min(((127 ? 175 : (!-64))), var_5);
    }
    #pragma endscop
}
