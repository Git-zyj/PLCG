/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((var_7 ? var_9 : var_4))) ? ((var_14 ? var_13 : var_10)) : var_1))) ? ((((var_15 % var_1) ? 1 : (var_15 == 12)))) : ((var_1 ? -var_11 : ((max(var_15, var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = ((((max(99, var_9)) ? (((arr_4 [i_0]) ? (arr_5 [1] [i_1 - 2]) : (arr_3 [i_0]))) : ((((arr_2 [i_1] [0]) * (arr_1 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_18 = ((((((((arr_5 [i_0] [i_1]) ? (arr_9 [i_3] [i_1] [14]) : -1433419266264878855))) ? ((min((arr_0 [i_3] [i_1]), (arr_6 [i_0] [i_0] [i_0] [i_0])))) : (arr_4 [i_3])))) ? (max((((arr_6 [i_0] [i_2] [i_2] [i_1 - 1]) ? (arr_4 [i_2]) : (arr_9 [i_1 + 1] [i_2] [11]))), (arr_8 [i_0] [1] [i_1] [i_2] [i_3]))) : 243);
                            var_19 = (max((arr_5 [i_0] [i_0]), (((((arr_7 [i_2]) ? (arr_8 [i_0] [i_1 + 2] [i_2] [i_2] [i_3]) : (arr_7 [i_2]))) | ((-49 ? (arr_0 [10] [i_1 + 1]) : var_7))))));
                            var_20 = (i_2 % 2 == zero) ? (((((((((arr_6 [i_2] [i_1] [i_2] [i_3]) ? (arr_5 [i_2] [i_0]) : (arr_5 [i_2] [i_1])))) ? (((min((arr_7 [i_2]), -74)))) : (min((arr_9 [i_0] [i_0] [i_0]), (arr_1 [i_1] [16]))))) << (((arr_8 [i_0] [i_1] [i_1] [i_2] [i_3]) + 668848574))))) : (((((((((arr_6 [i_2] [i_1] [i_2] [i_3]) ? (arr_5 [i_2] [i_0]) : (arr_5 [i_2] [i_1])))) ? (((min((arr_7 [i_2]), -74)))) : (min((arr_9 [i_0] [i_0] [i_0]), (arr_1 [i_1] [16]))))) << (((((arr_8 [i_0] [i_1] [i_1] [i_2] [i_3]) + 668848574)) - 167696556)))));
                        }
                    }
                }
                arr_10 [i_1] [i_1 + 1] [i_0] = ((((((max((arr_5 [i_0] [i_0]), var_6))) ? (((174 ? 243 : (arr_4 [i_0])))) : ((var_11 ? 3940904528087913408 : (arr_0 [1] [i_1]))))) + (((((((arr_8 [i_0] [i_0] [i_0] [10] [i_1 + 1]) ? (arr_4 [i_1]) : (arr_8 [i_0] [i_1] [i_0] [14] [i_0])))) ? (max(var_0, var_4)) : ((max((arr_1 [i_0] [i_0]), (arr_2 [i_0] [i_1])))))))));
                var_21 = (min(var_21, ((((arr_8 [i_0] [i_0] [i_0] [14] [i_0]) <= var_4)))));
            }
        }
    }
    #pragma endscop
}
