/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = -5498171071020308733;
                                arr_11 [i_0] [19] [10] [i_2] [i_3] [i_4 + 3] = var_1;
                            }
                        }
                    }
                    arr_12 [i_0] [5] [i_2] = 1911699950575989245;
                    arr_13 [19] [i_1] [i_2] = (((var_4 ? var_16 : 1848359496)));
                    var_18 += (-127 - 1);
                }
            }
        }
    }
    var_19 = 7463279043664795750;
    var_20 = ((var_4 * ((~((max(var_14, var_3)))))));
    #pragma endscop
}
