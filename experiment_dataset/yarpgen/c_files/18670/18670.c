/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 ? 403731422364325612 : (!var_3)));
    var_16 = var_9;
    var_17 = (~1000639948);
    var_18 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2 + 1] [i_2] [i_3 + 1] = ((((((((arr_10 [i_0] [i_1] [i_2] [i_3]) || var_0)) && ((max((arr_0 [i_1] [i_3]), 15498671902090463626)))))) & (arr_10 [i_0 + 3] [i_1] [i_2] [i_3 - 1])));
                            var_19 = (((!28296) && -23791));
                        }
                    }
                }

                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    var_20 = (min(var_20, (((((min((arr_9 [i_1] [i_1] [i_4 + 1]), (arr_9 [i_4 + 2] [i_4] [i_4 + 1])))) ? (0 < 1000639953) : (((arr_9 [i_4 + 3] [i_4] [i_4 + 1]) ? (arr_9 [i_0 + 1] [i_0 + 2] [i_4 + 1]) : (arr_9 [i_1] [i_4] [i_4 + 1]))))))));
                    var_21 = (arr_3 [i_1]);
                    arr_15 [i_0 + 3] [i_4 - 1] = (~3694337428852125106);
                }
                var_22 = (max(var_22, ((((arr_0 [i_0] [i_0 + 3]) >= var_8)))));
            }
        }
    }
    #pragma endscop
}
