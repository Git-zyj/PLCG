/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_4 <= ((max(var_3, var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = (((-66107556618884785 + 9223372036854775807) << (1 - 1)));
                                var_16 = (max(var_16, (((((var_3 << (((arr_5 [i_0] [i_1]) - 63)))) <= (arr_13 [4] [i_0] [i_2] [i_0] [14] [i_3] [i_4 + 2]))))));
                                arr_14 [i_0] [2] [i_1] [0] [i_4] = (((max(-66107556618884782, (arr_13 [11] [i_1] [i_4 + 3] [i_4] [12] [i_4 - 1] [i_4]))) <= (((((arr_9 [i_1 - 1] [i_1] [i_4 + 1]) + 9223372036854775807)) << (66107556618884781 - 66107556618884781)))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_1] [i_0] &= arr_12 [i_2] [i_1] [i_2] [i_0] [i_1 - 1];
                }
            }
        }
    }
    #pragma endscop
}
