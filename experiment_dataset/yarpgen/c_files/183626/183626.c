/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (((min(var_2, 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (((((((arr_0 [i_1] [i_0]) + (arr_2 [i_0] [i_0]))) + ((max((arr_0 [10] [2]), 1)))))) ? (((max((var_15 != var_8), (min(var_4, var_12)))))) : var_13);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_13 [i_4 + 1] [8] [8] [8] [i_0] [i_0] = ((((min((((arr_11 [i_3 + 1] [i_0] [3]) * var_0)), (arr_12 [i_0] [i_1] [i_0] [i_0] [i_4 + 1])))) ? var_13 : (max(var_9, (max((arr_5 [5] [5] [i_2] [i_3]), var_3))))));
                                arr_14 [i_1] [i_1] [i_3] [i_4] = (min(var_3, (((min(-5197038567850194067, 1)) / (max(-5197038567850194091, (arr_12 [4] [i_1] [i_2] [i_3] [i_4])))))));
                                var_18 = (max(var_18, ((max((arr_9 [i_4 + 1]), ((((arr_9 [i_4 + 1]) ? -51 : (arr_9 [i_4 + 1])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((((min(var_6, 2536538564)) + (((max(var_2, var_14)))))) / (var_12 + var_4)));
    #pragma endscop
}
