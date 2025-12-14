/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((max(((min(60, var_10))), var_13)), var_6));
    var_21 = (min(((max(var_16, var_2))), (max(var_18, var_6))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_22 = (arr_0 [i_4]);
                                var_23 = var_6;
                                var_24 = ((!(arr_5 [i_0 + 3])));
                                arr_14 [i_0] = (((-22300 + 2147483647) << (((((arr_5 [i_3 + 3]) ? (arr_5 [i_3 + 2]) : (arr_5 [i_2 + 1]))) - 135))));
                                var_25 = (min(var_25, ((~(((arr_12 [i_0 + 3] [i_1] [i_2] [i_0 + 3] [7]) / (arr_12 [i_0 + 1] [i_1 + 1] [i_2 - 2] [7] [i_4 + 1])))))));
                            }
                        }
                    }
                    var_26 *= ((!(arr_4 [i_0] [10])));
                }
            }
        }
    }
    #pragma endscop
}
