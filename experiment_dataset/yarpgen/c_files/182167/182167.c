/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = var_7;
    var_13 = var_1;
    var_14 = (min((((((~var_1) + 2147483647)) >> (var_6 - 1435850828))), (((var_8 != (((max(var_3, var_7)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = ((((min(((max(176, -1))), ((-4582 ? var_8 : var_9))))) ? (min(var_7, (max((arr_7 [i_0] [i_1] [i_3]), var_5)))) : (((~(max((arr_0 [4]), (arr_1 [i_4]))))))));
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] = (arr_2 [i_1 + 2] [i_4 + 1]);
                                var_16 = 6294;
                                arr_16 [i_0] [i_1 + 2] [10] [i_3] [i_1] = min(-9572, ((((arr_5 [i_4] [i_4 + 2] [i_4]) != -18342))));
                            }
                        }
                    }
                }
                var_17 = (((arr_11 [i_0] [i_0] [i_1 - 1] [i_1] [i_1 - 1]) * 79));
                var_18 = 4294967295;
            }
        }
    }
    #pragma endscop
}
