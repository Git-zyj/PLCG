/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 += var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (max(var_1, (max(var_17, var_8))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_1] [i_0] = (var_2 ? ((max((max(var_13, var_17)), var_13))) : (max(var_4, var_9)));
                                var_21 += max((max((max(var_15, var_5)), var_8)), ((var_14 ? var_9 : var_10)));
                                var_22 += var_9;
                                arr_12 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2] = (max((max(((max(var_16, var_8))), (max(var_6, var_0)))), (max(var_9, ((var_1 ? var_14 : var_7))))));
                                arr_13 [i_1] [i_0] [i_4] = (max((max(var_13, var_15)), (max((max(var_12, var_15)), (max(var_0, var_17))))));
                            }
                        }
                    }
                    arr_14 [i_1] [i_0] [i_0] [i_0 + 1] = (max((max(var_0, var_0)), ((max(var_17, var_17)))));

                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        var_23 = (min(var_23, (max(((max(((max(var_13, var_2))), (max(var_16, var_3))))), (max(var_6, var_9))))));
                        var_24 = var_3;
                    }
                }
            }
        }
    }
    #pragma endscop
}
