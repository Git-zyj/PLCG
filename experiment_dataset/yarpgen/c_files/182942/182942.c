/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_7 ? var_5 : var_9));
    var_12 -= (-9223372036854775807 - 1);
    var_13 -= (((((var_2 ? ((14 ? var_6 : -24236)) : var_6))) ? 9676253755891704778 : var_7));
    var_14 = 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 = var_6;
                                arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [15] [3] &= (arr_5 [7] [7] [i_1]);
                            }
                        }
                    }
                    arr_12 [i_2] [7] [17] [i_0] &= arr_8 [i_2] [i_1] [i_1] [18] [i_0];
                    var_16 = (((((var_4 ? (arr_0 [i_1] [i_2]) : (arr_7 [i_0] [i_0] [18] [i_1] [i_2])))) ? var_0 : (arr_8 [i_0] [i_1] [i_2] [11] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
