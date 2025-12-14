/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, ((((min((((1073741696 ? var_5 : var_5))), ((~(arr_6 [i_2] [i_1] [i_0])))))) ? ((var_6 ? (arr_9 [i_0 - 2]) : ((82 ^ (arr_5 [i_4] [i_3 - 1]))))) : 1590))));
                                arr_11 [i_1] [i_1] [i_2 + 1] [i_3] [i_4] = ((var_7 ? -1 : ((var_3 ? 22 : (arr_10 [i_2] [i_2] [i_2] [i_2] [i_1])))));
                                var_14 -= (max((((max(var_11, -63)))), (min(var_12, (arr_1 [i_0] [i_0 + 1])))));
                                arr_12 [i_1] [i_1] [i_1] [i_3] [i_4] = ((59 || ((max(72, -81)))));
                            }
                        }
                    }
                }
                var_15 = (-127 - 1);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] [i_5] [4] |= (arr_14 [i_0] [i_1] [i_5] [i_5]);
                            var_16 &= max(var_11, (!-21152));
                            var_17 = (((arr_4 [i_1]) || (((var_9 ? (arr_4 [i_1]) : var_6)))));
                            arr_22 [i_0 - 3] [i_0 - 3] [i_5] [i_1] = 27221;
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, var_6));
    #pragma endscop
}
