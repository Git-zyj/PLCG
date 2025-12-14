/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (((arr_2 [i_0 + 3]) >> (((min((arr_2 [i_1]), (arr_2 [i_0 + 2]))) - 112645783))));
                var_12 = (max(var_12, ((max((arr_4 [i_0] [i_1] [i_0]), (max(((-121 ? 0 : 16)), 14)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = (min((arr_1 [i_0]), (arr_7 [i_1] [i_1])));
                                var_14 = (min(var_14, (((((max(12, 39))) ? (arr_9 [i_0] [i_0 + 1] [i_0] [i_0 + 1]) : 22092)))));
                                var_15 = (max(var_9, ((((arr_9 [i_0 - 2] [i_1] [3] [i_4 + 3]) >= (arr_9 [i_0 - 1] [19] [i_2] [i_4 + 1]))))));
                                var_16 = (arr_13 [i_0 + 2] [i_0 - 1] [i_0 + 3] [12] [i_0 - 1]);
                            }
                        }
                    }
                }
                var_17 = (min(var_17, ((((((arr_4 [3] [3] [i_0 + 2]) ? (arr_2 [i_1]) : (arr_2 [i_0])))) ? (arr_4 [16] [i_1] [i_0 + 1]) : (arr_5 [i_0] [i_1])))));
            }
        }
    }
    var_18 = var_1;
    #pragma endscop
}
