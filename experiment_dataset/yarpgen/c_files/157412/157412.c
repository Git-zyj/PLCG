/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (min(((var_1 ? (((var_7 ? var_3 : var_9))) : var_9)), (((((var_2 ? 219 : var_7)) & (-1884533893 && -489878463734055746))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = (min((~var_8), 15951761909252944489));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] = (-489878463734055734 ? (((-(arr_10 [i_1] [i_1])))) : var_6);
                                arr_18 [11] [i_0] [9] [9] [i_4] = ((-(!3)));
                                arr_19 [i_0 - 1] [i_1] [i_2] [i_0] [i_4] = var_1;
                                arr_20 [i_0] [15] [i_2] [15] [i_3] [i_0] = (min(((min((!489878463734055746), (max(192, (arr_15 [i_0] [i_1] [i_0] [i_3] [i_0])))))), (1324769638 ^ 14636643107600960067)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 &= -2147483647;
    var_13 += var_7;
    var_14 = 20245;
    #pragma endscop
}
