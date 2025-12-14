/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_10 [i_2] [i_1] [i_1] [i_2] [i_1] = ((32206 ? var_8 : ((~(~var_2)))));
                                var_12 = (min(var_12, ((((~3) ? 24383 : -1626)))));
                                var_13 = max(3, 63);
                            }
                        }
                    }
                }
                var_14 -= ((~((~(arr_0 [i_0 - 1])))));
                arr_11 [i_0] = (~-1431144605);
                arr_12 [i_0] [i_0] = ((1 ? 0 : 88));
            }
        }
    }
    var_15 = var_11;
    var_16 = ((~(((var_3 <= (max(91641801, 63)))))));
    var_17 = (min(((~(max(var_5, var_10)))), (~var_5)));
    #pragma endscop
}
