/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (max(((((min(var_9, var_13))) ? var_11 : 9223372036854775807)), (min(var_6, (min(7, var_14))))));
    var_16 |= (max(var_7, ((var_13 ? ((var_8 ? 9223372036854775807 : var_11)) : (~var_4)))));
    var_17 = ((var_5 ? ((((((var_3 ? 121 : var_8)) < (min(249, 323649335)))))) : (max((min(var_4, var_0)), 14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((((max(((max(var_6, var_6))), (arr_1 [i_0] [i_0])))) ? ((min((arr_3 [10] [i_1 - 1] [i_1]), -111))) : ((((var_14 == var_7) ? (min(var_2, var_14)) : (((var_13 >> (3862751303 - 3862751298))))))))))));
                var_19 = ((arr_0 [i_0]) - ((((arr_3 [i_1] [i_1] [i_0]) / 127))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_20 = (((((max(var_13, (arr_10 [i_1 + 3] [i_2 - 1] [i_1 + 1]))))) * (((!var_11) ? (min(-24176, var_1)) : (min(var_7, 771232945518042674))))));
                                var_21 = (min(var_21, (arr_11 [i_4] [i_3] [i_0] [i_0] [i_0])));
                                arr_12 [i_0] [i_1] [i_2 - 1] [i_1] [i_1] [i_4] = (((min((arr_8 [i_2] [i_2 + 1] [i_2 - 1] [11] [11] [i_2 + 1]), 9223372036854775807)) << (((max(var_4, var_1)) - 1231376852574082383))));
                            }
                            arr_13 [i_0] [i_1] [i_2] = (max((min(var_14, 0)), (min(var_3, (arr_8 [i_1] [i_1 + 1] [i_1 + 3] [i_1] [i_1] [i_0])))));
                        }
                    }
                }
                var_22 = 4294967280;
            }
        }
    }
    #pragma endscop
}
