/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] = (((arr_0 [i_4]) - (((arr_9 [i_0] [1] [1] [10] [4]) + ((min(var_0, var_7)))))));
                                var_17 = (min(var_17, ((min(((max((arr_10 [i_0] [10] [i_0] [10] [i_4 - 1]), 21938))), (var_1 * -1))))));
                                arr_12 [i_0] [i_1] [i_1] [i_0] [i_0] = -var_0;
                                var_18 = (max(var_18, (((~(arr_5 [i_0] [i_1] [i_2]))))));
                                arr_13 [i_1] [i_2] [i_3] [i_1] = max(var_14, 4095);
                            }
                        }
                    }
                }
                var_19 = (min(var_19, ((((~39) & var_13)))));
            }
        }
    }
    var_20 = var_10;
    #pragma endscop
}
