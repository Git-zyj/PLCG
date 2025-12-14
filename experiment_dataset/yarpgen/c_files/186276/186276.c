/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_2 % var_1) << (((122 * var_2) - 2770741))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [1] = ((((var_2 ? var_0 : (arr_9 [i_4 - 1])))) ? (arr_8 [1] [1] [i_2]) : (((((1 >> (var_2 - 22684))) < -8047))));
                                var_13 = var_6;
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] &= (((!-9) ^ var_2));
                    var_14 = ((4721569596933718425 ? ((((~var_10) <= (((-16 ? 0 : 1131820668)))))) : 1));
                }
            }
        }
    }
    #pragma endscop
}
