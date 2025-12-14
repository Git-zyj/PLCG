/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_1 - 3] [i_3] [i_3] |= arr_4 [5] [5];
                                var_14 *= max((arr_11 [i_0] [i_3] [i_2] [2] [i_3] [i_4]), -4);
                            }
                        }
                    }
                    var_15 ^= (((((arr_7 [i_0] [i_1] [i_1] [i_1]) / var_3)) >= (max((arr_2 [i_1]), var_6))));
                }
                var_16 = (12582912 ? ((-(((arr_0 [i_0]) ? 4282384383 : var_3)))) : var_12);
            }
        }
    }
    var_17 = var_4;
    var_18 = (min(var_18, var_0));
    var_19 = 4282384383;
    #pragma endscop
}
