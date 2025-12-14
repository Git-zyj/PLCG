/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 *= 52121;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 += ((var_14 * ((var_8 + (arr_5 [19] [19] [i_1 - 4] [i_1 - 1])))));
                                var_19 ^= 85;
                            }
                        }
                    }
                    arr_13 [5] [5] [i_2 + 1] = var_5;
                    var_20 = (min(var_5, ((-(arr_11 [i_0] [i_0 - 2] [5] [1] [i_1 - 1] [i_2] [i_0])))));
                    var_21 = (arr_12 [i_0 + 1] [i_1] [i_0 - 2] [i_1] [i_0 + 1] [i_0]);
                }
            }
        }
    }
    var_22 = (((max(85, 127)) << (var_11 + 3592269804070214783)));
    var_23 = ((85 < (~-86)));
    #pragma endscop
}
