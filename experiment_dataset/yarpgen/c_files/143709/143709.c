/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = var_5;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [6] [6] [i_3] [i_2] [17] = (min(((((((var_7 ? var_7 : var_6))) ? var_6 : var_6))), var_2));
                                arr_14 [i_3] [i_1] [i_2] [i_3 + 1] [1] [i_2] [i_4] = (min(2047, (!66584576)));
                                arr_15 [i_3] [i_2] [i_3 - 1] = (((!(((4659548626033413176 ? 2376718034 : (-2147483647 - 1)))))) ? (min(var_1, -var_6)) : 6775245676895464155);
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_4] = -var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = -var_1;
    #pragma endscop
}
