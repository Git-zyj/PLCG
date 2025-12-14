/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 *= (((((((((arr_1 [i_2]) >> (var_10 - 2045396749)))) ? (arr_4 [i_2]) : (max(var_7, (arr_1 [i_2])))))) ? ((max(((max(var_2, var_6))), ((var_1 ? (arr_4 [i_2]) : (arr_6 [1] [i_1] [i_2])))))) : ((-(max((arr_0 [i_2] [i_1]), 1023))))));
                    var_18 = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_13, 29302));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_2 [i_3] [i_3 + 1]) && ((min((min(-195488654, var_0)), (min(var_0, (arr_7 [i_1] [i_0]))))))));
                                arr_12 [6] [i_1] [i_1] [14] [i_0] = min((((arr_5 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_4 + 1]) ? (arr_9 [i_3 + 1] [i_4 - 1] [i_4] [i_4 + 2] [i_3 + 1]) : (arr_5 [i_3 - 1] [i_3] [i_3] [i_4 + 2]))), (((((arr_10 [i_0] [i_0]) / 1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
