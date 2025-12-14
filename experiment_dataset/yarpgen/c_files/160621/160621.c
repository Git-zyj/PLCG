/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 = (248 > 39962);
                                var_13 = ((var_3 ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : 19855));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_14 = -var_2;
                            var_15 &= ((-(arr_16 [i_0] [i_1] [i_5] [i_0])));
                            var_16 = (min(var_10, (~var_6)));
                            var_17 = (min((arr_0 [i_0]), var_2));
                        }
                    }
                }
                var_18 = (max((((arr_10 [i_1] [i_1] [i_0] [i_0] [3]) ? var_6 : var_3)), -0));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_19 = (max(var_19, (((-(((arr_4 [i_7]) << (var_7 - 5832030523727484437))))))));
                            var_20 &= (((min(var_9, ((39959 ? 212 : 4193001245150718549)))) * var_10));
                        }
                    }
                }
                var_21 &= ((!(((2221436133167991677 >> (2221436133167991656 - 2221436133167991626))))));
            }
        }
    }
    #pragma endscop
}
