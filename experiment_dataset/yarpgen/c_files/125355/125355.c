/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((!2) > (~5056377295723047912))) ? var_9 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = var_8;
                var_13 -= (min((((var_10 ? ((3251539073 ? var_2 : var_7)) : ((((arr_0 [i_1]) || 2200924961)))))), (arr_3 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] [i_1] [13] [i_3 - 1] [i_2] = (arr_9 [i_0] [i_0] [i_2] [i_2] [i_1]);

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_14 = (arr_9 [i_0 + 1] [i_1] [i_2] [i_1] [i_1]);
                                var_15 += arr_0 [i_0 - 1];
                                arr_14 [i_0] [i_0] [i_0] [i_4] [i_1] = 3251539073;
                            }
                            arr_15 [i_0] [i_0] [i_2] [i_1] [i_1] [i_2] = (max((((arr_6 [i_0] [i_0] [i_3]) ? (!112) : 43689)), ((~(((arr_9 [7] [i_0] [i_0 + 1] [i_0] [i_1]) ? (arr_4 [i_1]) : (arr_1 [i_0] [i_0])))))));
                            var_16 = ((((~(var_0 < var_3)))) ? (arr_10 [i_3 + 1]) : (min((!var_7), 732310889)));
                        }
                    }
                }
                var_17 = (max(((~(arr_12 [i_0] [i_1] [i_1] [i_1] [i_0]))), (!-19)));
            }
        }
    }
    #pragma endscop
}
